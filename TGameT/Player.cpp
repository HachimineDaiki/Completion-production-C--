#include"DxLib.h"
#include"Player.h"
#include"LoadPicture.h"
#include"Control.h"


//�\���̂̐錾


void PlayerDisp() {

	DrawGraph(player.px,player.py , Pic.Player[player.PlayerNum], TRUE);  //�v���C���[��`�悷��

}

void PlayerMove() {
	if (g_key.nowKey & PAD_INPUT_RIGHT) {  //�\���L�[�̉E�������ƉE�ɐi��
		player.px++;

	}
	if (g_key.nowKey & PAD_INPUT_LEFT) {  //�\���L�[�̍��������ƍ��ɐi��
		player.px--;
	}
	if (g_key.nowKey & PAD_INPUT_UP) {  //�\���L�[�̏�������Ə�ɐi��
		player.py--;
	}
	if (g_key.nowKey & PAD_INPUT_DOWN) {  //�\���L�[�̉��������Ɖ��ɐi��
		player.py++;
	}
}

void PlayerAll() {
	PlayerMove();  //�v���C���[�̓���
	PlayerDisp();  //�v���C���[�̕`��
}