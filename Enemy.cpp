#include "Enemy.h"
#include <stdio.h>

void (Enemy::*Enemy::FuncTable[])() = {
	&Enemy::Approach,
	&Enemy::Shot,
	&Enemy::Leave
};

void Enemy::Update() {
	(this->*FuncTable[static_cast<size_t>(phase_)])();

	/*switch (phase_) {
	case Phase::kApproach:
		Approach();
		break;
	case Phase::kShot:
		Shot();
		break;
	case Phase::kLeave:
		Leave();
		break;
	}*/
}

// Ú‹ß
void Enemy::Approach() {
	printf("Ú‹ß");
	phase_ = Phase::kShot;
}

// ËŒ‚
void Enemy::Shot() {
	printf("ËŒ‚");
	phase_ = Phase::kLeave;
}

// —£’E
void Enemy::Leave() {
	printf("—£’E");
}