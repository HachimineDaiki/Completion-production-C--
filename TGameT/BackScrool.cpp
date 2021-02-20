#include"BackScrool.h"
#include"LoadPicture.h"



void BackScrool::BackMove() {
	g_Scrool += 5;

	cr2 = GetColor(255, 255, 255);


	//SetDrawArea(0,0,1400,1000);//描画領域設定（仕様未定封印中）

	DrawGraph(0, g_Scrool%1400-1400, Pic.BackGround, TRUE);
	DrawGraph(0, g_Scrool % 1400, Pic.BackGround, FALSE);
	
	//SetDrawArea(0,0,1400,1000);//(封印)


	/*ゲーム領域調整用Line*/
	/*DrawLine(30, 20, 470, 20, cr2);
	DrawLine(30, 20, 30, 450, cr2);
	DrawLine(30, 450, 470, 450, cr2);
	DrawLine(470, 20, 470, 450, cr2);

	DrawBox(510, 320, 610, 350, cr2, TRUE);
	DrawBox(510, 380, 610, 410, cr2, TRUE);
	*/
}