#include"DxLib.h"
#include"Player.h"
#include"LoadPicture.h"
#include"Control.h"


//�\���̂̐錾


void PlayerDisp() {

	DrawGraph(player.px,player.py , Pic.Player[player.PlayerNum], TRUE);  //�v���C���[��`�悷��

}

void PlayerMove() {
	if (g_key.nowKey & PAD_INPUT_UP) {  //�\���L�[�̏�������Ə�ɐi��
		player.py-=5;
	}
	if (g_key.nowKey & PAD_INPUT_DOWN) {  //�\���L�[�̉��������Ɖ��ɐi��
		player.py+=5;
	}
	if (g_key.nowKey & PAD_INPUT_RIGHT) {  //�\���L�[�̉E�������ƉE�ɐi��
		player.px+=5;
	}
	if (g_key.nowKey & PAD_INPUT_LEFT) {  //�\���L�[�̍��������ƍ��ɐi��
		player.px-=5;	
	}
	if (g_key.nowKey & PAD_INPUT_1) {
		PlayerShot();

	}

}

void PlayerAnime() {
	if (g_key.nowKey & PAD_INPUT_RIGHT) {  //�\���L�[�̉E�������ƉE�ɌX��
		player.PlayerNum = 2;
	}else if (g_key.nowKey & PAD_INPUT_LEFT) { //�\���L�[�̍��������ƍ��ɌX��
		player.PlayerNum = 1;
	}else {
		player.PlayerNum = 0;
	}
}

void PlayerShot() {

}


void PlayerBulletMove() {
	
}




void PlayerAll() {
	
	PlayerMove();  //�v���C���[�̓���
	PlayerDisp();  //�v���C���[�̕`��
	PlayerBulletMove();
	PlayerAnime();  //�v���C���[�̃A�j���[�V����
}