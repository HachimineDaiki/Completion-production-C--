#pragma once
#include"DxLib.h"

struct Player{

	int px=500;  //プレイヤーのx座標  ///数字は仮
	int py=900;  //プレイヤーのy座標


	int PlayerNum;   //プレイヤーの画像を変えるための変数

}; extern Player player;

void PlayerDisp();  //プレイヤーの描画
void PlayerMove();   //プレイヤーの動き

void PlayerAll();   //プレイヤに関する情報をすべてまとめる
