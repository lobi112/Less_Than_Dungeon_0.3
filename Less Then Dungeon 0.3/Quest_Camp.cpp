#include "Header.h"

void quest_camp(MyHero& Hero, MyWeapon& Weapon1, MyWeapon& Weapon2)
{
	string choice;
	int chance;
	while (1)
	{
		system("cls");
		cout << "�� ���������� ��������� ������." << endl;
		cout << "����� � ��� ������ ������ ������� �����, ���� �� ��� ��������� ������ �����." << endl;
		cout << Hero.name << ": ��� �� ����� �� ���, ����� ��� ������ ���� ������� ������." << endl;
		cout << "1)���������" << endl;
		cout << "2)����" << endl;
		cout << Hero.name << " :";
		cin >> choice;
	
		if (choice == "1" || choice == "���������" || choice == "���������")
		{
			cout << Hero.name << " : ��� ������������� ����� �����." << endl;
			cout << "�� ������������, ����� ��������� ��� � �������� ����." << endl;
			chance = 20 + rand() % 10;
			Hero.Change_HP(chance);
			cout << "�� ������������ " << chance << " ��������." << endl;
			_getch();
			chance = rand() % 100;
			if (chance < 25)
			{
				cout << "�������, ���-�� ������������..." << endl;
				_getch();
				system("cls");
				chance = Weapon_Armor_chance(Hero);
				quest_enemy(Hero, Weapon1, Weapon2, chance);
				if (Hero.HP <= 0)
				{
					cout << Hero.name << " : ����� ��������� ������, �� ��� ���� �� ����." << endl;
					_getch();
					break;
				}
				break;
			}
			else
			{
				continue;
			}

		}
		if (choice == "2" || choice == "����" || choice == "����")
		{
			cout << Hero.name << " : � ���� ��� ������� �� �����." << endl << endl;
			system("pause");
			break;
		}

		cout << Hero.name << " : ����� ������, ��� ������." << endl;
		_getch();
	}
}