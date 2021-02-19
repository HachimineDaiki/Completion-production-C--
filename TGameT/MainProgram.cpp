#include"DxLib.h"
#include"LoadPicture.h"
#include"Player.h"
#include"Control.h"


//構造体の宣言
keyInfo g_key;   //キーに関する構造体の宣言
Player player;   //プレイヤーに関する構造体の宣言


// プログラムは WinMain から始まります
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	SetGraphMode(1400, 1000, 32);
	ChangeWindowMode(TRUE);   //ウインドウモードにする


	if (DxLib_Init() == -1) return-1;  //DXライブラリ初期化処理

	if (LoadPicture() == -1)return-1; //LoadPicture初期化処理

	SetDrawScreen(DX_SCREEN_BACK);

	while (ProcessMessage() == 0) {

		ClearDrawScreen();         //画面のクリア

		KeyControl();  //キーに関する関数
		PlayerAll();   //プレイヤの処理をまとめた関数
		DrawGraph(0, 0, Pic.BackGround, TRUE);


		ScreenFlip();              //画面の更新
	}
	WaitKey();  //キー入力待ち

	DxLib_End();//DXライブラリ使用の終了条件


	return 0;				// ソフトの終了 
}