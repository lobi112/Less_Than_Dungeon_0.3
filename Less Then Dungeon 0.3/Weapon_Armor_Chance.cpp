#include "Header.h"

int Weapon_Armor_chance(MyHero& Hero)
{
	int incrise = Hero.points * 5;
	if (incrise > 100)
	{
		incrise = 100;
	}
	int chance = rand() % 100;
	if (chance < 60 - incrise || chance < 5)
	{
		return 1;
	}
	if (chance < 90 - incrise || chance < 10)
	{
		return 2;
	}
	if (chance < 110 - incrise || chance < 15)
	{
		return 3;
	}
	if (chance < 130 - incrise || chance < 20)
	{
		return 4;
	}
	if (chance < 160 - incrise || chance < 25)
	{
		return 5;
	}
	if (chance < 180 - incrise || chance < 30)
	{
		return 6;
	}
	if (chance < 195 - incrise || chance < 35)
	{
		return 7;
	}
	if (chance < 200 - incrise)
	{
		return 8;
	}
	return 0;

}