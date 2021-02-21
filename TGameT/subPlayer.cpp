#include"Player.h"

#define PLAYER_MAX_SHOT1 11
#define PLAYER_MAX_SHOT2 15


typedef struct {
	double x, y;
	int flag;
}SHOT_t; SHOT_t PlayerShots[PLAYER_MAX_SHOT1][PLAYER_MAX_SHOT2];

