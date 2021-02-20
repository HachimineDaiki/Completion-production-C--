#pragma once
#include"DxLib.h"

#define PLAYER_MAX_SHOT1 11
#define PLAYER_MAX_SHOT2 15

struct Player{

	int px=500;  //�v���C���[��x���W  ///�����͉�
	int py=900;  //�v���C���[��y���W
	int pw = 50;  //���@�̕�
	int ph = 50;  //���@�̍���

	int pbx[12];
	int pby[12];
	int bflag[12];

	int PlayerNum=0;   //�v���C���[�̉摜��ς��邽�߂̕ϐ�

}; extern Player player;

typedef struct {
	double x, y;
	int flag;
} SHOT_t; SHOT_t PlayerShots[PLAYER_MAX_SHOT1][PLAYER_MAX_SHOT2];




void PlayerDisp();  //�v���C���[�̕`��
void PlayerMove();   //�v���C���[�̓���
void PlayerShot();   //�v���C���[�̎ˌ��̏���
void PlayerBulletMove();  //���@�̒e�̓���
void PlayerAnime();   //�v���C���[�̃A�j���[�V����

void PlayerAll();   //�v���C���Ɋւ���������ׂĂ܂Ƃ߂�
