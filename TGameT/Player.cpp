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
		player.py--;
	

	}

	if (g_key.nowKey & PAD_INPUT_DOWN) {  //�\���L�[�̉��������Ɖ��ɐi��
		player.py++;
	
	}

	if (g_key.nowKey & PAD_INPUT_RIGHT) {  //�\���L�[�̉E�������ƉE�ɐi��
		player.px++;
		player.PlayerNum = 2;
	}else {
		player.PlayerNum = 0;
	}


	if (g_key.nowKey & PAD_INPUT_LEFT) {  //�\���L�[�̍��������ƍ��ɐi��
		player.px--;
		player.PlayerNum = 1;
	}
	
}

void PlayerAnime() {

	switch (player.Case)
	{
	case 0:
		if (g_key.nowKey & PAD_INPUT_RIGHT) {  //�\���L�[�̉E�������ƍ��ɐi��
			player.PlayerNum = 2;

		}else {
			player.PlayerNum = 0;
		}
		break;

	case 1:
		if (g_key.nowKey & PAD_INPUT_LEFT) {  //�\���L�[�̍��������ƍ��ɐi��
			player.PlayerNum = 1;

		}else {
			player.PlayerNum = 0;
		}
		break;
	

	default:
		player.PlayerNum = 0;
		break;
	}



	if (g_key.nowKey & PAD_INPUT_RIGHT) {  //�\���L�[�̍��������ƍ��ɐi��
		player.PlayerNum = 2;

	}
	else {
		player.PlayerNum = 0;
	}
	

	if (g_key.nowKey & PAD_INPUT_LEFT) {  //�\���L�[�̍��������ƍ��ɐi��
		player.PlayerNum = 1;

	}else {
		player.PlayerNum = 0;
	}
}

void PlayerAll() {
	PlayerMove();  //�v���C���[�̓���
	PlayerDisp();  //�v���C���[�̕`��
	//PlayerAnime();  //�v���C���[�̃A�j���[�V����
}