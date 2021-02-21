//#include"DxLib.h"
//#include"LoadPicture.h"
//#include"Player.h"
//#include"Control.h"
//#include"Shot.h"
//#include"define.h"
//
//
//void BulletDisp() {
//	for (int i = 0; i < BULLET_NUM; i++) {
//		if (bullet[i].flg==true) {
//			bullet[i].x = player.px;
//			bullet[i].y = player.py;
//		}
//		DrawGraph(bullet[i].x, bullet[i].y, Pic.playerBullet, TRUE);
//	}
//
//
//}
//
//void BulletMove()
//{
//	for (int i = 0; i < BULLET_NUM; i++) {
//		if (g_key.keyFlg & PAD_INPUT_2) {
//
//			if (bullet[i].flg == false) {
//				bullet[i].flg = true;
//				bullet[i].x = player.px;
//				bullet[i].y -= 20.0f;
//
//			}
//
//			if (bullet[i].flg == true && bullet[i].y <= -10) {
//				bullet[i].flg = false;
//			}
//
//
//		}
//	}
//
//
//}


//void BulletMove() {
//	for (int i = 0; i < BULLET_NUM; i++) {		
//		if (g_key.keyFlg & PAD_INPUT_2) {
//
//		if (bullet[i].flg == false) {
//			bullet[i].flg = true;
//			bullet[i].x = player.px;
//			bullet[i].y -= 20.0f;
//
//		}
//
//		if (bullet[i].flg == true&&bullet[i].y<=-10){
//			bullet[i].flg = false;
//		}
//
//
//	}
//}