#include"DxLib.h"
#include"LoadPicture.h"

//struct Pic;   //�摜��ǂݍ��ލ\���̂̐錾
image Pic;
int LoadPicture() {

	if ((Pic.BackGround = LoadGraph("images/STGBack.png")) == -1)return -1;   //�w�i�摜��ǂݍ���

	if (LoadDivGraph("images/Player.png", 6, 3, 2, 64, 64, Pic.Player) == -1)return -1;  //�v���C���[�̉摜

	if ((Pic.playerBullet = LoadGraph("images/shot01.png")) == -1)return -1;   //�w�i�摜��ǂݍ���

	return 0;
}


