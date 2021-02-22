#include"DxLib.h"
#include"Player.h"
#include"LoadPicture.h"
#include"Control.h"
#include"Shot.h"


//�\���̂̐錾
PLAYER::PLAYER() {
	width = 29;
	height = 40;

	//�ړ��W��
	move = 1.0f;

	

	//�����ʒu
	x = 100;
	y = 400;

	//�摜�𑀍삷��ϐ�
	imagenum = 0;

	//life
	life = true;

}


void PLAYER::Draw() {

	DrawGraph(PLAYER::x,PLAYER::y , Pic.Player[PLAYER::imagenum], TRUE);  //�v���C���[��`�悷��

}

void PLAYER::Move() {
	if (g_key.nowKey& PAD_INPUT_UP&& PLAYER::y>0) {  //�\���L�[�̏�������Ə�ɐi��
		PLAYER::y-=5.0f;
	}
	if (g_key.nowKey & PAD_INPUT_DOWN&& PLAYER::y < 900) {  //�\���L�[�̉��������Ɖ��ɐi��
		PLAYER::y+=5.0f;
	}
	if (g_key.nowKey & PAD_INPUT_RIGHT&& PLAYER::x < 800) {  //�\���L�[�̉E�������ƉE�ɐi��
		PLAYER::x+=5.0f;
	}
	if (g_key.nowKey & PAD_INPUT_LEFT && PLAYER::x > 0) {  //�\���L�[�̍��������ƍ��ɐi��
		PLAYER::x-=5.0f;
	}
	//BulletMove();

}

void PLAYER::Anime() {
	if (g_key.nowKey & PAD_INPUT_RIGHT) {  //�\���L�[�̉E�������ƉE�ɌX��
		PLAYER::imagenum = 2;
	}else if (g_key.nowKey & PAD_INPUT_LEFT) { //�\���L�[�̍��������ƍ��ɌX��
		PLAYER::imagenum = 1;
	}else {
		PLAYER::imagenum = 0;
	}
}





void PLAYER::All() {
	
	PLAYER::Move();  //�v���C���[�̓���
	PLAYER::Draw();  //�v���C���[�̕`��
	//BulletMove();
	PLAYER::Anime();  //�v���C���[�̃A�j���[�V����
}