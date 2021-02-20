#include"Enemy.h"
#include"LoadPicture.h"
#include<math.h>

Enemy::Enemy() {};

void Enemy::EnemyDisp() {
	DrawGraph(Enx, Eny, Pic.Enemy, TRUE);
}
void Enemy::EnemyMove() {
}

void Enemy::EnemyAll(){
	EnemyMove();
	EnemyDisp();
}

