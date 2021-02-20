#include"DxLib.h"
#include"LoadPicture.h"
#include"Player.h"
#include"Control.h"
#include"BackScrool.h"
#include"Enemy.h"
#include"FPS.h"
//構造体の宣言
keyInfo g_key;   //キーに関する構造体の宣言
Player player;   //プレイヤーに関する構造体の宣言

BackScrool backScroll;//バックスクロールクラス
Enemy enemy;
Fps fps;

int g_count = 0 ;
int nResult = ChangeWindowMode(TRUE);

// プログラムは WinMain から始まります
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	SetGraphMode(1400, 1000, 32);
	
	ChangeWindowMode(FALSE);   //ウインドウモードにする


	if (DxLib_Init() == -1) return-1;  //DXライブラリ初期化処理

	if (LoadPicture() == -1)return-1; //LoadPicture初期化処理

	SetDrawScreen(DX_SCREEN_BACK);

	

	while (ProcessMessage() == 0) {

		DrawFormatString(0, 0, GetColor(255, 255, 255), "ChangeWindowMode() = [%d]", nResult); //ChangeWindowModeがFALSEかTRUEか。
		ClearDrawScreen();         //画面のクリア
		KeyControl();  //キーに関する関数

		
		backScroll.BackMove(); //画面スクロール
		enemy.EnemyAll(); //敵処理関数(封印中)

		fps.FpsAll();
		PlayerAll();   //プレイヤの処理をまとめた関数

	if (CheckHitKey(KEY_INPUT_ESCAPE) == 1) {
		 return 0;
		}

		ScreenFlip();              //画面の更新
	}
	WaitKey();  //キー入力待ち

	DxLib_End();//DXライブラリ使用の終了条件


	return 0;				// ソフトの終了 
}