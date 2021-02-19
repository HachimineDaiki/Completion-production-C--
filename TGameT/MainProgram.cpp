#include"DxLib.h"
#include"LoadPicture.h"
#include"Player.h"
#include"Control.h"


//�\���̂̐錾
keyInfo g_key;   //�L�[�Ɋւ���\���̂̐錾
Player player;   //�v���C���[�Ɋւ���\���̂̐錾


// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	SetGraphMode(1400, 1000, 32);
	ChangeWindowMode(TRUE);   //�E�C���h�E���[�h�ɂ���


	if (DxLib_Init() == -1) return-1;  //DX���C�u��������������

	if (LoadPicture() == -1)return-1; //LoadPicture����������

	SetDrawScreen(DX_SCREEN_BACK);

	while (ProcessMessage() == 0) {

		ClearDrawScreen();         //��ʂ̃N���A

		KeyControl();  //�L�[�Ɋւ���֐�
		PlayerAll();   //�v���C���̏������܂Ƃ߂��֐�
		DrawGraph(0, 0, Pic.BackGround, TRUE);


		ScreenFlip();              //��ʂ̍X�V
	}
	WaitKey();  //�L�[���͑҂�

	DxLib_End();//DX���C�u�����g�p�̏I������


	return 0;				// �\�t�g�̏I�� 
}