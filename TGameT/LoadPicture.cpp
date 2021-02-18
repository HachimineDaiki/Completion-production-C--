#include"DxLib.h"
#include"LoadPicture.h"

//struct Pic;   //画像を読み込む構造体の宣言
image Pic;
int LoadPicture() {

	if ((Pic.BackGround = LoadGraph("images/STGBack.png")) == -1)return -1;   //背景画像を読み込み

	if (LoadDivGraph("images/Player.png", 6, 3, 2, 64, 64, Pic.Player) == -1)return -1;  //プレイヤーの画像

	return 0;
}


