#pragma once
#include"DxLib.h"

struct Player{

	int px=500;  //�v���C���[��x���W  ///�����͉�
	int py=900;  //�v���C���[��y���W

	int Case=0;   //������ς��邱�Ƃɂ����PlayerNum���삷��
	int PlayerNum=0;   //�v���C���[�̉摜��ς��邽�߂̕ϐ�

}; extern Player player;

void PlayerDisp();  //�v���C���[�̕`��
void PlayerMove();   //�v���C���[�̓���
void PlayerAnime();   //�v���C���[�̃A�j���[�V����

void PlayerAll();   //�v���C���Ɋւ���������ׂĂ܂Ƃ߂�
