#pragma once

class Enemy
{
private:
	enum class Phase {
		kApproach,
		kShot,
		kLeave
	};

public:
	void Update();

private:
	// �ڋ�
	void Approach();
	// �ˌ�
	void Shot();
	// ���E
	void Leave();

private:
	static void(Enemy::* FuncTable[])();
	Phase phase_ = Phase::kApproach;
	bool GameLoop = true;
};
