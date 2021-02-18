#include"DxLib.h"
#include"LoadPicture.h"


//構造体の宣言
//image Pic;


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


		DrawGraph(0, 0, Pic.BackGround, TRUE);


		DrawGraph(100, 100, Pic.Player[0], TRUE);

		ScreenFlip();              //画面の更新
	}
	WaitKey();  //キー入力待ち

	DxLib_End();//DXライブラリ使用の終了条件


	return 0;				// ソフトの終了 
}