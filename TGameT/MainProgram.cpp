#include"DxLib.h"
#include"LoadPicture.h"
#include"Player.h"
#include"Control.h"
#include"BackScrool.h"
#include"Enemy.h"
#include"FPS.h"
//�\���̂̐錾
keyInfo g_key;   //�L�[�Ɋւ���\���̂̐錾
Player player;   //�v���C���[�Ɋւ���\���̂̐錾

BackScrool backScroll;//�o�b�N�X�N���[���N���X
Enemy enemy;
Fps fps;

int g_count = 0 ;
int nResult = ChangeWindowMode(TRUE);

// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	SetGraphMode(1400, 1000, 32);
	
	ChangeWindowMode(FALSE);   //�E�C���h�E���[�h�ɂ���


	if (DxLib_Init() == -1) return-1;  //DX���C�u��������������

	if (LoadPicture() == -1)return-1; //LoadPicture����������

	SetDrawScreen(DX_SCREEN_BACK);

	

	while (ProcessMessage() == 0) {

		DrawFormatString(0, 0, GetColor(255, 255, 255), "ChangeWindowMode() = [%d]", nResult); //ChangeWindowMode��FALSE��TRUE���B
		ClearDrawScreen();         //��ʂ̃N���A
		KeyControl();  //�L�[�Ɋւ���֐�

		
		backScroll.BackMove(); //��ʃX�N���[��
		enemy.EnemyAll(); //�G�����֐�(����)

		fps.FpsAll();
		PlayerAll();   //�v���C���̏������܂Ƃ߂��֐�

	if (CheckHitKey(KEY_INPUT_ESCAPE) == 1) {
		 return 0;
		}

		ScreenFlip();              //��ʂ̍X�V
	}
	WaitKey();  //�L�[���͑҂�

	DxLib_End();//DX���C�u�����g�p�̏I������


	return 0;				// �\�t�g�̏I�� 
}