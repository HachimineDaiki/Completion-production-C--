#include"DxLib.h"
#include"LoadPicture.h"


//�\���̂̐錾
//image Pic;


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


		DrawGraph(0, 0, Pic.BackGround, TRUE);


		DrawGraph(100, 100, Pic.Player[0], TRUE);

		ScreenFlip();              //��ʂ̍X�V
	}
	WaitKey();  //�L�[���͑҂�

	DxLib_End();//DX���C�u�����g�p�̏I������


	return 0;				// �\�t�g�̏I�� 
}