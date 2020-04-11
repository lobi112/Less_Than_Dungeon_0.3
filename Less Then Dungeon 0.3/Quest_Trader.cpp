#include "Header.h"

void quest_trader_1(MyHero& Hero, MyWeapon& Weapon1, MyWeapon& Weapon2)
{
	string choice;
	int chance = rand() % 9;


	int cost1 = 8 + rand() % 8;
	int cost2 = 8 + rand() % 8;
	int sell = 3 + rand() % 5;



	while (1)
	{
		system("cls");
		cout << "�� ���� ��� ���������� ����-��������, ��� ����� "; DwarfName(chance); cout << "." << endl;
		DwarfName(chance); cout << ": ����������� ����, ������. �� ������ ��������� �� ��� ������ ?" << endl;
		cout << "1)������" << endl;
		cout << "2)�������" << endl;
		cout << "3)�������" << endl;
		cout << "4)����" << endl;
		cout << Hero.name << ": "; cin >> choice;
		if (choice == "1" || choice == "������" || choice == "������")
		{
			system("cls");
			DwarfName(chance); cout << ": ��� �� ������ ������ ?" << endl;
			cout << "1)����� -" << cost1 << " ������" << endl;
			cout << "2)������� -" << cost2 << " ������" << endl;
			cout << "3)�����" << endl;
			cout << Hero.name << ": "; cin >> choice;
			if ((choice == "1" || choice == "�����" || choice == "�����") && Hero.gold >= cost1)
			{
				Hero.gold -= cost1;
				Hero.poition++;
				cout << "�� ��������� �������� �����." << endl;
				system("pause");
				continue;
			}
			if ((choice == "1" || choice == "�����" || choice == "�����") && Hero.gold < cost1)
			{
				DwarfName(chance); cout << ": � ���� ��� �� ��� �����." << endl;
				system("pause");
				continue;
			}

			if ((choice == "2" || choice == "�������" || choice == "�������") && Hero.gold >= cost2)
			{
				Hero.gold -= cost2;
				Hero.picklock++;
				cout << "�� ��������� �������" << endl;
				system("pause");
				continue;
			}

			if ((choice == "2" || choice == "�������" || choice == "�������") && Hero.gold < cost2)
			{
				DwarfName(chance); cout << ": � ���� ��� �� ��� �����." << endl;
				system("pause");
				continue;
			}

			if (choice == "3" || choice == "�����" || choice == "�����")
			{
				DwarfName(chance); cout << ": ����� ���-�� ��� ?" << endl;
				system("pause");
				continue;
			}

		}

		if (choice == "2" || choice == "�������" || choice == "�������")
		{
			system("cls");
			DwarfName(chance); cout << ": ��� �� ������ ������� ?" << endl;
			cout << "1)����� +" << cost1 - sell << " ������" << endl;
			cout << "2)������� +" << cost2 - sell << " ������" << endl;
			cout << "3)�����" << endl;
			cout << Hero.name << ": "; cin >> choice;
			if ((choice == "1" || choice == "�����" || choice == "�����") && Hero.poition > 0)
			{
				Hero.gold += (cost1 - sell);
				Hero.poition--;
				cout << "�� ������� �������� �����." << endl;
				system("pause");
				continue;
			}

			if ((choice == "1" || choice == "�����" || choice == "�����") && Hero.poition == 0)
			{
				DwarfName(chance); cout << ": � ���� ��� ����� ������� ." << endl;
				system("pause");
				continue;
			}

			if ((choice == "2" || choice == "�������" || choice == "�������") && Hero.picklock > 0)
			{
				Hero.gold += (cost2 - sell);
				Hero.picklock--;
				cout << "�� ������� �������." << endl;
				system("pause");
				continue;
			}

			if ((choice == "2" || choice == "�������" || choice == "�������") && Hero.picklock == 0)
			{
				DwarfName(chance); cout << ": � ���� ��� �������." << endl;
				system("pause");
				continue;
			}

			if (choice == "3" || choice == "�����" || choice == "�����")
			{
				DwarfName(chance); cout << ": ����� ���-�� ��� ?" << endl;
				system("pause");
				continue;
			}

		}

		if (choice == "3" || choice == "�������" || choice == "�������")
		{
			ActPockets(Hero, Weapon1, Weapon2);
			continue;
		}



		if (choice == "4" || choice == "����" || choice == "����")
		{
			DwarfName(chance); cout << ": ����� ����, ������ !" << endl;
			system("pause");
			break;
		}


		DwarfName(chance); cout << ": ������ ��������� ? � �� ��������. " << endl;
		system("pause");
		system("cls");
		continue;
	}

}