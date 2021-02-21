#pragma once
#include"DxLib.h"

class Enemy {
public:
	Enemy();
	void EnemyDisp();//敵表示
	void EnemyMove();//敵動き
	bool EnemyAll();//敵の全て
	void Shot();//敵弾
	void Enemy_pattern0(int i);//動きパターン0
private:
	double Enx, Eny, Enw, Enh;//座標、幅・高さ
	int in_time, stop_time, out_time;//敵が出てから止まって消えるまで	
	int count;//カウント(仕様未定)
	bool endflag;
};