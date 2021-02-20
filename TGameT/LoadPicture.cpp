#include"DxLib.h"
#include"LoadPicture.h"

//struct Pic;   //‰æ‘œ‚ğ“Ç‚İ‚Ş\‘¢‘Ì‚ÌéŒ¾
image Pic;
int LoadPicture() {

	if ((Pic.BackGround = LoadGraph("images/STGBack.png")) == -1)return -1;   //”wŒi‰æ‘œ‚ğ“Ç‚İ‚İ

	if (LoadDivGraph("images/Player.png", 6, 3, 2, 64, 64, Pic.Player) == -1)return -1;  //ƒvƒŒƒCƒ„[‚Ì‰æ‘œ

	if ((Pic.playerBullet = LoadGraph("images/shot01.png")) == -1)return -1;   //”wŒi‰æ‘œ‚ğ“Ç‚İ‚İ

	return 0;
}


