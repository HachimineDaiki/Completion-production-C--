#pragma once
#include"DxLib.h"

class PLAYER {

	//x���W,y���W
	double x, y;

	//�摜��
	int width, height;

	//�摜�𑀍삷��ϐ�
	int imagenum;

	//�ړ��W��
	float move;
	



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
//	float px=500;  //�v���C���[��x���W  ///�����͉�
//	float py=900;  //�v���C���[��y���W
//	int pw = 50;  //���@�̕�
//	int ph = 50;  //���@�̍���
//
//
//	int PlayerNum=0;   //�v���C���[�̉摜��ς��邽�߂̕ϐ�
//
//}; extern Player player;








void PlayerDisp();  //�v���C���[�̕`��
void PlayerMove();   //�v���C���[�̓���
void PlayerShot();   //�v���C���[�̎ˌ��̏���
void PlayerBulletMove();  //���@�̒e�̓���
void PlayerAnime();   //�v���C���[�̃A�j���[�V����

void PlayerAll();   //�v���C���Ɋւ���������ׂĂ܂Ƃ߂�
