#pragma once
#include"DxLib.h"
int LoadPicture();  //画像を読み込む巻子う


//画像の種類

struct image {

	int BackGround;

	int Player[6];

	int Enemy; //Enemy変数

	int playerBullet;

};

extern image Pic; 
