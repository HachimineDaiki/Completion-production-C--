#pragma once
#include"DxLib.h"

#define PLAYER_MAX_SHOT1 11
#define PLAYER_MAX_SHOT2 15

struct Player{

	int px=500;  //プレイヤーのx座標  ///数字は仮
	int py=900;  //プレイヤーのy座標
	int pw = 50;  //自機の幅
	int ph = 50;  //自機の高さ

	int pbx[12];
	int pby[12];
	int bflag[12];

	int PlayerNum=0;   //プレイヤーの画像を変えるための変数

}; extern Player player;

typedef struct {
	double x, y;
	int flag;
} SHOT_t; SHOT_t PlayerShots[PLAYER_MAX_SHOT1][PLAYER_MAX_SHOT2];




void PlayerDisp();  //プレイヤーの描画
void PlayerMove();   //プレイヤーの動き
void PlayerShot();   //プレイヤーの射撃の処理
void PlayerBulletMove();  //自機の弾の動き
void PlayerAnime();   //プレイヤーのアニメーション

void PlayerAll();   //プレイヤに関する情報をすべてまとめる
