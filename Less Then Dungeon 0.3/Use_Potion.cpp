#include "Header.h"

void ActUsePotion(MyHero& Hero)
{
	if (Hero.poition > 0)
	{
		int chance = 15 + rand() % 21;
		Hero.Change_HP(chance);
		Hero.poition--;
		cout << Hero.name << ": ���� �����������." << endl;
		cout << "�� ������������ : " << chance << " ��������." << endl << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << Hero.name << ": ��� �����. ��� ����� ����� ����������..." << endl;
		system("pause");
		system("cls");
	}
}