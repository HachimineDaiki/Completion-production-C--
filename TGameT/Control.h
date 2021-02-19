#pragma once
#
#include "DxLib.h"

//キーボードの入力状態
struct keyInfo {
	int oldKey;
	int nowKey;
	int keyFlg;
};
void KeyControl();

extern keyInfo g_key;