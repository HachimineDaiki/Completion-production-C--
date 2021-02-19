#include"DxLib.h"
#include"Player.h"
#include"LoadPicture.h"
#include"Control.h"


//構造体の宣言


void PlayerDisp() {


	DrawGraph(player.px,player.py , Pic.Player[player.PlayerNum], TRUE);  //プレイヤーを描画する


}

void PlayerMove() {
	if (g_key.nowKey & PAD_INPUT_RIGHT) {  //十字キーの右を押すと右に進む
		player.px++;

	}
	if (g_key.nowKey & PAD_INPUT_LEFT) {  //十字キーの左を押すと左に進む
		player.px--;
	}
	if (g_key.nowKey & PAD_INPUT_UP) {  //十字キーの上を押すと上に進む
		player.py--;
	}
	if (g_key.nowKey & PAD_INPUT_DOWN) {  //十字キーの下を押すと下に進む
		player.py++;
	}
}

void PlayerAll() {
	PlayerMove();  //プレイヤーの動き
	PlayerDisp();  //プレイヤーの描画
	

}