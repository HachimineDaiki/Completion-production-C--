#include"DxLib.h"
#include"LoadPicture.h"
#include"Player.h"
#include"Control.h"
#include"BackScrool.h"
#include"Enemy.h"
#include"FPS.h"
#include"peCont.h"
#include"Shot.h"
#include"define.h"


//�\���̂̐錾
keyInfo g_key;   //�L�[�Ɋւ���\���̂̐錾
PLAYER player;   //�v���C���[�Ɋւ���\���̂̐錾


BackScrool backScroll;//�o�b�N�X�N���[���N���X
Enemy enemy;
Fps fps;
peCont cnt;

int g_count = 0;
int nResult = ChangeWindowMode(TRUE);

// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	SetGraphMode(1400, 1000, 32);
	
	ChangeWindowMode(FALSE);   //�E�C���h�E���[�h�ɂ���


	if (DxLib_Init() == -1) return-1;  //DX���C�u��������������

	if (LoadPicture() == -1)return-1; //LoadPicture����������

	SetDrawScreen(DX_SCREEN_BACK);

	

	while (ScreenFlip()==0&&ProcessMessage()==0 && ClearDrawScreen()==0) {

		DrawFormatString(0, 0, GetColor(255, 255, 255), "ChangeWindowMode() = [%d]", nResult); //ChangeWindowMode��FALSE��TRUE���B

		KeyControl();  //�L�[�Ɋւ���֐�

		cnt.All();

		backScroll.BackMove(); //��ʃX�N���[��
		enemy.EnemyAll(); //�G�����֐�(����)

		fps.FpsAll();
		player.All();   //�v���C���̏������܂Ƃ߂��֐�

	if (CheckHitKey(KEY_INPUT_ESCAPE) == 1) {
		 return 0;
		}

	}
	WaitKey();  //�L�[���͑҂�

	DxLib_End();//DX���C�u�����g�p�̏I������


	return 0;				// �\�t�g�̏I�� 
}