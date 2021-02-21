#include"Enemy.h"
#include"LoadPicture.h"
#include<math.h>
#include"peCont.h"


Enemy::Enemy() {

	DrawGraph(Enx, Eny, Pic.Enemy, TRUE);

	Enx=50, Eny=-60, Enw=27, Enh=25;//À•WA•E‚‚³

	in_time = 180;
	stop_time = 300;
	out_time = 420;

	count = 0;
	endflag = false;
};

void Enemy::EnemyDisp() {
	DrawGraph(Enx, Eny, Pic.Enemy, TRUE);
}

void Enemy::Enemy_pattern0(int i) {

}
void Enemy::EnemyMove() {
	

	if (in_time < g_count && g_count < stop_time) {
		Eny += 2;
	}
	else if (g_count > out_time) {
		Eny -= 2;
		if (Eny < -40) {
			endflag = true;
		}
	}
}

void Enemy::Shot() {


}
bool Enemy::EnemyAll(){
	EnemyDisp();
	EnemyMove();

	++count;
	return endflag;
}

