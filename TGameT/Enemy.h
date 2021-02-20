#pragma once
#include"DxLib.h"

class Enemy {
public:
	Enemy();
	void EnemyDisp();
	void EnemyMove();
	void EnemyAll();
private:
	double Enx, Eny, Enw, Enh;//座標、幅・高さ
	/*int Encnt;//カウンタ
	int pattern;//移動パターン
	int kind; //敵の種類
	double sp;//スピード
	int bltime;//弾幕開始時間
	int blkind;//弾幕の種類
	int col;//色
	int hp;//体力
	int blkind2;//弾の種類
	int wait;//停滞時間*/
};