#include <stdio.h>
#include "Enemy.h"

int main() {
	Enemy* enemy = new Enemy();

	enemy->Update();

	for (int i = 0; i < 2; i++) {
		enemy->Update();
	}

	delete enemy;

	return 0;
}