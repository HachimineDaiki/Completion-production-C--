#pragma once
#include"DxLib.h"
int LoadPicture();  //�摜��ǂݍ��ފ��q��


//�摜�̎��

struct image {

	int BackGround;

	int Player[6];

	int Enemy; //Enemy�ϐ�

	int playerBullet;

};

extern image Pic; 
