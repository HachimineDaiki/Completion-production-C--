#pragma once
#include"DxLib.h"

class Enemy {
public:
	Enemy();
	void EnemyDisp();//�G�\��
	void EnemyMove();//�G����
	bool EnemyAll();//�G�̑S��
	void Shot();//�G�e
	void Enemy_pattern0(int i);//�����p�^�[��0
private:
	double Enx, Eny, Enw, Enh;//���W�A���E����
	int in_time, stop_time, out_time;//�G���o�Ă���~�܂��ď�����܂�	
	int count;//�J�E���g(�d�l����)
	bool endflag;
};