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
	// Ú‹ß
	void Approach();
	// ËŒ‚
	void Shot();
	// —£’E
	void Leave();

private:
	static void(Enemy::* FuncTable[])();
	Phase phase_ = Phase::kApproach;
	bool GameLoop = true;
};
