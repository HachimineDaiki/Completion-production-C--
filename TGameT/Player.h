#pragma once
#include"DxLib.h"

struct Player{

	int px=500;  //�v���C���[��x���W  ///�����͉�
	int py=900;  //�v���C���[��y���W


	int PlayerNum;   //�v���C���[�̉摜��ς��邽�߂̕ϐ�

}; extern Player player;

void PlayerDisp();  //�v���C���[�̕`��
void PlayerMove();   //�v���C���[�̓���

void PlayerAll();   //�v���C���Ɋւ���������ׂĂ܂Ƃ߂�
