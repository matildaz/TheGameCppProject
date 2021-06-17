#include "mobs.hpp"

int lightMobs::levelUp()
{
	while (healthPoints < standartHealthPoints)
		healthPoints += 1;
	healthPoints += 10;
	standartHealthPoints *= 2;
	coins += 5;
	return 0;
}

bool lightMobs::isNotAlive()
{
	if (healthPoints <= 0)
		return true;
	else
		return false;
}

boss::boss() {
    healthPoints = 100;
    coins = 100;
    standartHealthPoints = 100;
}

int player::swordUpgrade()
{
	damage += 1;
    coins -= costOfUpgrade;
	return 0;
}

int player::costUpdate()
{
	costOfUpgrade += 10;
	return 0;
}