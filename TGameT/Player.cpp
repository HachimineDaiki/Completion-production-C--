#include"DxLib.h"
#include"Player.h"
#include"LoadPicture.h"
#include"Control.h"
#include"Shot.h"


//構造体の宣言
PLAYER::PLAYER() {
	width = 29;
	height = 40;

	//移動係数
	move = 1.0f;

	//初期位置
	x = 100;
	y = 400;


	//画像を操作する変数
	imagenum = 0;

}


void PLAYER::Draw() {

	DrawGraph(PLAYER::x,PLAYER::y , Pic.Player[PLAYER::imagenum], TRUE);  //プレイヤーを描画する

}

void PLAYER::Move() {
	if (g_key.nowKey & PAD_INPUT_UP) {  //十字キーの上を押すと上に進む
		PLAYER::y-=5.0f;
	}
	if (g_key.nowKey & PAD_INPUT_DOWN) {  //十字キーの下を押すと下に進む
		PLAYER::y+=5.0f;
	}
	if (g_key.nowKey & PAD_INPUT_RIGHT) {  //十字キーの右を押すと右に進む
		PLAYER::x+=5.0f;
	}
	if (g_key.nowKey & PAD_INPUT_LEFT) {  //十字キーの左を押すと左に進む
		PLAYER::x-=5.0f;
	}
	//BulletMove();

}

void PLAYER::Anime() {
	if (g_key.nowKey & PAD_INPUT_RIGHT) {  //十字キーの右を押すと右に傾く
		PLAYER::imagenum = 2;
	}else if (g_key.nowKey & PAD_INPUT_LEFT) { //十字キーの左を押すと左に傾く
		PLAYER::imagenum = 1;
	}else {
		PLAYER::imagenum = 0;
	}
}





void PLAYER::All() {
	
	PLAYER::Move();  //プレイヤーの動き
	PLAYER::Draw();  //プレイヤーの描画
	//BulletMove();
	PLAYER::Anime();  //プレイヤーのアニメーション
}