#pragma once
#
#include "DxLib.h"

//�L�[�{�[�h�̓��͏��
struct keyInfo {
	int oldKey;
	int nowKey;
	int keyFlg;
};
void KeyControl();

extern keyInfo g_key;