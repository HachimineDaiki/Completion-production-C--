#pragma once
#include"DxLib.h"

class Enemy {
public:
	Enemy();
	void EnemyDisp();
	void EnemyMove();
	void EnemyAll();
private:
	double Enx, Eny, Enw, Enh;//���W�A���E����
	/*int Encnt;//�J�E���^
	int pattern;//�ړ��p�^�[��
	int kind; //�G�̎��
	double sp;//�X�s�[�h
	int bltime;//�e���J�n����
	int blkind;//�e���̎��
	int col;//�F
	int hp;//�̗�
	int blkind2;//�e�̎��
	int wait;//��؎���*/
};