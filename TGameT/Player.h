#pragma once
#include"DxLib.h"

class PLAYER {

	//x座標,y座標
	double x, y;

	//画像幅
	int width, height;

	//画像を操作する変数
	int imagenum;

	//移動係数
	float move;

	//移動
	bool life;
	

private:
	void Move();
	void Draw();
	void Anime();
public:
	PLAYER();
	void All();

};


//struct Player{
//
//	float px=500;  //プレイヤーのx座標  ///数字は仮
//	float py=900;  //プレイヤーのy座標
//	int pw = 50;  //自機の幅
//	int ph = 50;  //自機の高さ
//
//
//	int PlayerNum=0;   //プレイヤーの画像を変えるための変数
//
//}; extern Player player;








//void PlayerDisp();  //プレイヤーの描画
//void PlayerMove();   //プレイヤーの動き
//void PlayerShot();   //プレイヤーの射撃の処理
//void PlayerBulletMove();  //自機の弾の動き
//void PlayerAnime();   //プレイヤーのアニメーション
//
//void PlayerAll();   //プレイヤに関する情報をすべてまとめる
