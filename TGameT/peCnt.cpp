#include"peCont.h"
void peCont::All() {



	if (enemy != NULL) {
		if (enemy->EnemyAll()) {
			delete enemy;
			enemy = NULL;
		}
	}
	++g_count;
}