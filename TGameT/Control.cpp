#include "DxLib.h"
#include "control.h"
/*********************************************************
* �L�[�{�[�h�̓��͏�ԊǗ�
**********************************************************/
void KeyControl() {
	g_key.oldKey = g_key.nowKey;
	g_key.nowKey = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	g_key.keyFlg = g_key.nowKey & ~g_key.oldKey;
}