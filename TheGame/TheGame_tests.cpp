#include <doctest.h>
//#include "TheGame.cpp"
#include "mobs.hpp"

TEST_CASE("Something works") { REQUIRE(3 == 3); };

TEST_CASE("First structure upgrade test") {
    player knight;
    REQUIRE(knight.damage == 1);
    knight.coins += 10;
    knight.swordUpgrade();
    knight.costUpdate();
    REQUIRE(knight.coins == 0);
    REQUIRE(knight.damage == 2);
    REQUIRE(knight.costOfUpgrade == 20);
}

TEST_CASE("Second structure kill test") { 
    player knight;
    lightMobs mob;
    mob.levelUp();
    REQUIRE(mob.healthPoints == 20);
    REQUIRE(mob.coins == 10);
    for (auto i = 0; i < 10; i++) 
        mob.healthPoints -= knight.damage;
    REQUIRE(mob.isNotAlive() == false);
    REQUIRE(knight.coins != 10);
    for (auto i = 0; i < 10; i++)
        mob.healthPoints -= knight.damage;
    REQUIRE(mob.isNotAlive() == true);
    knight.coins += mob.coins;
    REQUIRE(knight.coins == 10);
}

TEST_CASE("Third structure boss test") { 
    boss Boss;
    player knight;
    knight.coins = 49500;
    while (knight.coins != 0) {
        knight.swordUpgrade();
        knight.costUpdate();
    }
    Boss.healthPoints -= knight.damage;
    REQUIRE(Boss.healthPoints == 0);
    REQUIRE(Boss.isNotAlive() == true);
    REQUIRE(knight.coins == 0);
    knight.coins += Boss.coins;
    REQUIRE(knight.coins == 100);
}
/*
TEST_CASE("Fourth test") { 
    REQUIRE(texture_mob(2, minotaur_1_stand) ==
            "sprites/minotaur_1/Minotaur_01_Taunt_002.png");
}
*/