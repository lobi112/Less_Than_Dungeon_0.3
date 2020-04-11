#include "Header.h"

void quest_fountain(MyHero& Hero, MyWeapon& Weapon1, MyWeapon& Weapon2)
{
	string choice;
	while (1) 
	{
		system("cls");
		cout << "�� ������� � ������ ���������� ������� ������, � ������ ������� ������������� ������. " << endl;
		cout << "�������� ������ ������� ������ �������� ��������� ������." << endl;
		cout << "���� � ������� ���������� � ��������� �������� ������� ����." << endl;
		cout << "����� �������� ���������� �������� ��������� � ��������� �����������." << endl;
		_getch();
		cout << Hero.name << " : �������� �����! ����� � ��� ������� � ����� �������� ��������." << endl;
		cout << Hero.name << " : ������ ����� ����� �� �������������, � ���� ������ ������������." << endl;
		cout << "1)�������� (�������� �� ���������)" << endl;
		cout << "2)����." << endl;
		cout << Hero.name << " : ";
		cin >> choice;
		if (choice == "1" || choice == "�������� " || choice == "��������")
		{
			cout << Hero.name << " : �����, ���������." << endl << endl;
			_getch();
			system("cls");
			cout << "�� ������ �������� � �������� ����������." << endl;
			cout << "���� �� ������� �������� ���������, ��������� �� ���� � ������ ����������� ������ �����." << endl;
			cout << "�� ������� ������� ������ ����." << endl;
			cout << Hero.name << " : ������, ���-�� ������������." << endl << endl;
			_getch();
			quest_enemy(Hero, Weapon1, Weapon2, 7);
			if (Hero.HP <= 0)
			{
				break;
			}
			quest_enemy(Hero, Weapon1, Weapon2, 7);
			if (Hero.HP <= 0)
			{
				break;
			}
			quest_enemy(Hero, Weapon1, Weapon2, 7);
			if (Hero.HP <= 0)
			{
				break;
			}
			Hero.charge_cristall = 1;
			cout << Hero.name << " : ���, ����, �������, ��������, �� � ��������, �������, ��� �����." << endl;
			cout << Hero.name << " : ���� ��������� ������." << endl;
			_getch();
			system("cls");
			break;
		}
		if (choice == "2" || choice == "����" || choice == "����")
		{
			cout << Hero.name << " : ����� �������, �������, ����� �����������" << endl << endl;;
			system("pause");
			break;
		}
		
	}
}