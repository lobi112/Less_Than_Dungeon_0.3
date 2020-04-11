#include "Header.h"

void ActUsePotion(MyHero& Hero)
{
	if (Hero.poition > 0)
	{
		int chance = 15 + rand() % 21;
		Hero.Change_HP(chance);
		Hero.poition--;
		cout << Hero.name << ": Пора подлечиться." << endl;
		cout << "Вы восстановили : " << chance << " здоровья." << endl << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << Hero.name << ": Нет зелий. Это может плохо обернуться..." << endl;
		system("pause");
		system("cls");
	}
}