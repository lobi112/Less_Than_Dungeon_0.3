#include "Header.h"

void quest_rune_light(MyHero& Hero, MyWeapon& Weapon1, MyWeapon& Weapon2)
{
	string choice;
while (1)
{
	system("cls");
	cout << "�� ���� ���� �� ���������� Ҹ����� �����." << endl;
	cout << "���� : ��, ������, �� ����� �������� �� ���� ?" << endl;
	cout << "���� : ���� ������, ������ ���������� � ���� ���� �����, ���� ��������������� ��������� ������ �����, ��-��-��." << endl << endl;
	cout << "1)������ (150)" << endl;
	cout << "2)� ���� ��� ������� �����." << endl;
	cout << "3)�������." << endl;
	cout << "4)����." << endl;
	cout << Hero.name << " :";
	cin >> choice;

		if ((choice == "1" || choice == "������" || choice == "������") && Hero.gold >= 80)
		{
			Hero.gold -= 80;
			Hero.rune_light++;
			cout << "��� ���������� ������ �� ���� ������, �������� � ��������� ������." << endl;
			cout << "���� � ������� ��������� ����������, ������ ������� ������������ �����." << endl;
			_getch();
			cout << "���� : � ����� ������� ���� ����� ����, ������ !" << endl;
			cout << "���� �������� ������ � �������� �������� �� ����." << endl;
			_getch();
			cout << "�� ����������� ������������ ������." << endl;
			cout << Hero.name << " : ��� ������� ��� ����� ���� �����, ���� � ����� ������� ������." << endl;
			_getch();
			break;

		}
		if (Hero.gold == 0  && (choice == "1" || choice == "������" || choice == "������"))
		{
			cout << "���� : ��-��, ����� ������, �������, ����� ������� ����� �� �����." << endl;
		    _getch();
			continue;
		}
		if ((choice == "1" || choice == "������" || choice == "������") && Hero.gold > 0 && Hero.gold < 150)
		{
			cout << "���� : ����� ������� ����, ������ �� ���������." << endl;
			_getch();
			continue;
		}


		if (choice == "2" )
		{
			
			while (1)
			{
			 system("cls");
			 cout << Hero.name << " : � ���� ��� ������� �����, ����� ���������� �� ���-�� ?" << endl;
			 cout << "���� : ������-��, ��� �� ����������� ����� ������... " << endl;
			 cout << "���� : ����� �� ������ ����������, ������, ����������, �� ���-�� �������, �������� ?" << endl << endl;
			 cout << "1)�� (������ ������ � �������� ������)" << endl;
			 cout << "2)���." << endl;
			 cout << "3)�������." << endl;
			 cout << Hero.name << " :";
			 cin >> choice;
			
				if ((choice == "1" || choice == "��" || choice == "��") && Weapon1.name>=4)
				{
					Weapon1.Weapon_change(0);
					Hero.rune_light++;
					cout << "���� : �� ����� !" << endl;
					_getch();
					cout << "��� ���������� ������ �� ���� ������, �������� � ��������� ������." << endl;
					cout << "���� � ������� ��������� ����������, ������ ������� ������������ �����." << endl;
					_getch();
					cout << "���� : � ����� ������� ���� ����� ����, ������ !" << endl;
					cout << "���� �������� �������� �� ����." << endl;
					_getch();
					cout << "�� ����������� ������������ ������." << endl;
					cout << Hero.name << " : ��� ������� ��� ����� ���� �����, ���� � ����� ������� ������." << endl;
					_getch();
					break;
				}
				else if ((choice == "1" || choice == "��" || choice == "��") && Weapon1.name < 4)
				{
					cout << "���� : ���, �� ��� � �� ��������, ��� ����� �� ����� ����� �������." << endl;
					_getch();
					continue;
				}
				if (choice == "2" || choice == "���" || choice == "���")
				{
					cout << "���� : ��, ��� ������." << endl;
					_getch();
					break;
				}
				if (choice == "3" || choice == "�������" || choice == "�������")
				{
					ActPockets(Hero, Weapon1, Weapon2);
					continue;
				}

				cout << "���� : ���, ����� ��� �� ����, � ����� ��������." << endl;
				system("pause");
			}
			if (Hero.rune_light == 0) continue;
			else break;

		}
		if (choice == "3" || choice == "�������" || choice == "�������")
		{
			ActPockets(Hero, Weapon1, Weapon2);
			continue;
		}
		if ((choice == "4" || choice == "����" || choice == "����"))
		{
			cout<< Hero.name << " : ������." << endl;
			system("pause");
			break;
		}

		cout << "�� ����� �� ����� �������." << endl;
		_getch();

	}
}