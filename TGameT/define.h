#pragma once

extern int g_count; //フレーム変数

struct Ene_SHOT {
	bool flag;//弾が発射中かどうか
	double x;//ｘ座標
	double y;//y座標
	int gh;//グラフィックハンドル
	int width, height;//画像幅
	int pattern;//パターン
	int speed;//スピード
};