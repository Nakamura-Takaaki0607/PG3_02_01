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

// �ڋ�
void Enemy::Approach() {
	printf("�ڋ�");
	phase_ = Phase::kShot;
}

// �ˌ�
void Enemy::Shot() {
	printf("�ˌ�");
	phase_ = Phase::kLeave;
}

// ���E
void Enemy::Leave() {
	printf("���E");
}