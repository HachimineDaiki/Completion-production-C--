#include"DxLib.h"
#include"LoadPicture.h"

//struct Pic;   //画像を読み込む構造体の宣言
image Pic;
int LoadPicture() {

	if ((Pic.BackGround = LoadGraph("images/STGBack.png")) == -1)return -1;   //背景画像を読み込み

	if (LoadDivGraph("images/Player.png", 6, 3, 2, 64, 64, Pic.Player) == -1)return -1;  //プレイヤーの画像

<<<<<<< HEAD
	if ((Pic.Enemy = LoadGraph("images/EnemyOct.png")) == -1)return -1; //敵画像読み込み
=======
	if ((Pic.playerBullet = LoadGraph("images/shot01.png")) == -1)return -1;   //背景画像を読み込み
>>>>>>> 719be84ddd44b93d1d37e291b376faabf89c155a

	return 0;
}


