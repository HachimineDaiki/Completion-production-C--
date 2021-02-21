#pragma once
#include"DxLib.h"

class Enemy {
public:
	Enemy();
	void EnemyDisp();
	void EnemyMove();
	bool EnemyAll();
	void Enemy_pattern0(int i);
private:
	double Enx, Eny, Enw, Enh;//À•WA•E‚‚³
	int in_time, stop_time, out_time;	
	int count;
	bool endflag;
};