#pragma once
#include"DxLib.h"
int LoadPicture();  //画像を読み込む巻子う


//画像の種類

struct image {

	int BackGround;

	int Player[6];

<<<<<<< HEAD
	int Enemy; //Enemy変数
=======
	int playerBullet;

>>>>>>> 719be84ddd44b93d1d37e291b376faabf89c155a

};

extern image Pic; 
