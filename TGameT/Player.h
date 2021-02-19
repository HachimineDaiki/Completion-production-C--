#pragma once
#include"DxLib.h"

struct Player{

	int px=500;  //プレイヤーのx座標  ///数字は仮
	int py=900;  //プレイヤーのy座標

	int Case=0;   //数字を変えることによってPlayerNum操作する
	int PlayerNum=0;   //プレイヤーの画像を変えるための変数

}; extern Player player;

void PlayerDisp();  //プレイヤーの描画
void PlayerMove();   //プレイヤーの動き
void PlayerAnime();   //プレイヤーのアニメーション

void PlayerAll();   //プレイヤに関する情報をすべてまとめる
