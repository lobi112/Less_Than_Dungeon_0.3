#include "Header.h"

void quest_chest(MyHero& Hero, MyWeapon& Weapon1, MyWeapon& Weapon2) //������
{
	string choice = "0";
	while (choice == "0")
	{

		cout << "�� ����� ������. ������� ��� ?" << endl;
		cout << "1)��" << endl;
		cout << "2)���" << endl;
		cout << Hero.name << ": ";
		cin >> choice;
		if (choice == "��" || choice == "��" || choice == "1") //�������� ��������� ��������� � ����������
		{
			int chance = rand() % 100;
			if (chance < 5)
			{
				cout << "� ������� ���������: �������" << endl; //������� 5%
				cout << Hero.name << ": �������� ?" << endl;
				Hero.score += 1;
				system("pause");
				break;
			}

			if (chance < 25) //����� 20%
			{
				cout << "� �������: �����" << endl;
				cout << Hero.name << ": ������ �� ��������, ����� � ������ ���..." << endl;
				system("pause");
				break;
			}

			if (chance < 40)//������/�����/��� 15%
			{
				int type = rand() % 3 + 1; //1-2-3 . ������-�����-���
				
				chance = Weapon_Armor_chance(Hero);
				while (1) {

					MyWeapon Weapon_Change(Hero.damage_plus);
					Weapon_Change.Weapon_change(chance);
					system("cls");

					switch (type)
					{
					case 1: cout << "� ������� ��������� : ������ - "; Item_Check(chance, 1); break;
					case 2: cout << "� ������� ��������� : "; Item_Check(chance, 2); break;
					case 3: cout << "� ������� ��������� : "; Item_Check(chance, 3); break;
					}

					switch (type)
					{
					case 1: cout << "���� : " << Weapon_Change.damage << "-" << Weapon_Change.damage + Weapon_Change.damage_dif - 1 << endl; break;
					case 2: cout << "������� ������ : "; Item_Check(chance, 22); break;
					case 3: cout << "������ � ����� : "; Item_Check(chance, 33);; break;
					}

					switch (type)
					{
					case 1: cout << "����� ��� ?" << endl; break;
					case 2: cout << "������ �� ���� ?" << endl; break;
					case 3: cout << "����� ��� ?" << endl; break;
					}
					cout << "1)��" << endl;
					cout << "2)���" << endl;
					cout << "3)�������" << endl;
					cout << Hero.name << ": ";
					cin >> choice;
					if (choice == "1" || choice == "��" || choice == "��")
					{
						switch (type)
						{
						case 1: Weapon1 = Weapon_Change; break;
						case 2: Hero.Armor_change(chance); break;
						case 3: Hero.Shield_change(chance); break;
						}
						cout << Hero.name << " : ��� ����� ����������� !" << endl;
						system("pause");
						break;
					}
					if (choice == "2" || choice == "���" || choice == "���")
					{
						cout << Hero.name << ": ��� ��� �� � ����." << endl;
						system("pause");
						break;
					}
					if (choice == "3" || choice == "�������" || choice == "�������")
					{
						ActPockets(Hero, Weapon1, Weapon2);
						continue;
					}

					cout << Hero.name << " : ���� �� ��� ���-�� ������, �� ���� �� � ������ ��� ����� ?" << endl;
					system("pause");

				}

				break;
			}

			if (chance < 60)//����� 20%
			{
				int chance_potion = 1 + rand() % 3;
				Hero.poition += chance_potion;
				cout << "� ������� ���������: ����� ������� (" << chance_potion << ")" << endl;
				system("pause");
				break;
			}
			if (chance < 85)//������ 25%
			{
				int chance_gold = 5 + rand() % 16;
				Hero.gold += chance_gold;
				Hero.score += chance_gold;
				cout << "� ������� ���������: ������� ������ (" << chance_gold << ")" << endl;
				system("pause");
				break;
			}
			if (chance <= 97)//������� 12%
			{
				int chance_picklock = 1 + rand() % 3;
				Hero.picklock += chance_picklock;
				cout << "� ������� ���������: ������� (" << chance_picklock << ")" << endl;
				system("pause");
				break;
			}


			if (chance > 97) //�����(��������� ������) 2%
			{
				if (Hero.HP < 0.2*Hero.Max_HP)
				{
					cout << "������ �������� ������� � ��������� �������� ���..." << endl;
					Hero.Change_HP(-Hero.Max_HP);
					_getch();
				}
				else
				{
					cout << "������ �������� �������, ������� ��������� ���������� �� ���." << endl;
					cout << "��� ������� ���������, �� ������ ������ ��� ��������." << endl;
					chance = Hero.Max_HP/5 - rand() % Hero.Max_HP / 10;
					Hero.Change_HP(-chance);
					cout << "�� �������� " << Hero.HP-chance << " ��������." <<  endl;
					_getch();
				}
				break;
			}



			if (choice == "���" || choice == "���" || choice == "2")
			{
				cout << Hero.name << ": ����� ��������� ������." << endl;
				system("pause");
				break;
			}


			cout << Hero.name << ": ����� ���������� ������������. ���� ��� ���-�� ������." << endl;
			choice = "0";
			system("pause");
			system("cls");
		}
	}
}

void quest_chest_lock(MyHero& Hero, MyWeapon& Weapon1, MyWeapon& Weapon2)
{
	int chance;
	string choice = "0";
	while (choice != "2")
	{

		cout << "�� ����� ������ � ������� ������. ������� ��� � ������� ������� ?" << endl;
		cout << "1)��" << endl;
		cout << "2)���" << endl;
		cout << Hero.name << ": ";
		cin >> choice;
		if ((choice == "��" || choice == "��" || choice == "1") && Hero.picklock > 0) //�������� ��������� ��������� � ����������
		{
			while (choice == "1")
			{
				chance = rand() % 100; //�������� �� ����� ��� �������� ������� 40%
				if (chance < Hero.chest_unlock)
				{
					cout << "������ ������ !" << endl;
					system("pause");
					break;
				}

				else if (Hero.picklock <= 0)
				{
					cout << Hero.name << ": � ���� ��������� �������, ������� ����." << endl;
					system("pause");
					choice = "0";
				}

				else
				{
					Hero.picklock--;
					system("cls");
					cout << "������� ���������" << endl;
					cout << "����������� ��� ��� ?" << endl;
					cout << "1)��" << endl;
					cout << "2)���" << endl;
					cout << Hero.name << ": ";
					cin >> choice;
					if (choice == "���" || choice == "���" || choice == "2")
					{
						cout << Hero.name << ": �������� � ������ ���." << endl;
						choice = "0";
					}
				}
			}

			if (choice == "0")
			{
				break;
			}

			chance = rand() % 100; //�������� ��������� ����

			if (chance < 35)//��������� ������ 35%
			{
				int type = rand() % 3 + 1; //1-2-3 . ������-�����-���

				chance = Weapon_Armor_chance(Hero);
				while (1) {

					MyWeapon Weapon_Change(chance);
					Weapon_Change.Weapon_change(chance);
					system("cls");

					switch (type)
					{
					case 1: cout << "� ������� ��������� : ������ - "; Item_Check(chance, 1); break;
					case 2: cout << "� ������� ��������� : "; Item_Check(chance, 2); break;
					case 3: cout << "� ������� ��������� : "; Item_Check(chance, 3); break;
					}

					switch (type)
					{
					case 1: cout << "���� : " << Weapon_Change.damage << "-" << Weapon_Change.damage + Weapon_Change.damage_dif - 1 << endl; break;
					case 2: cout << "������� ������ : "; Item_Check(chance, 22); break;
					case 3: cout << "������ � ����� : "; Item_Check(chance, 33);; break;
					}

					switch (type)
					{
					case 1: cout << "����� ��� ?" << endl; break;
					case 2: cout << "������ �� ���� ?" << endl; break;
					case 3: cout << "����� ��� ?" << endl; break;
					}
					cout << "1)��" << endl;
					cout << "2)���" << endl;
					cout << "3)�������" << endl;
					cout << Hero.name << ": ";
					cin >> choice;
					if (choice == "1" || choice == "��" || choice == "��")
					{
						switch (type)
						{
						case 1: Weapon1 = Weapon_Change; break;
						case 2: Hero.Armor_change(chance); break;
						case 3: Hero.Shield_change(chance); break;
						}
						cout << Hero.name << " : ��� ����� ����������� !" << endl;
						system("pause");
						break;
					}
					if (choice == "2" || choice == "���" || choice == "���")
					{
						cout << Hero.name << ": ��� ��� �� � ����." << endl;
						system("pause");
						break;
					}
					if (choice == "3" || choice == "�������" || choice == "�������")
					{
						ActPockets(Hero, Weapon1, Weapon2);
						continue;
					}

					cout << Hero.name << " : ���� �� ��� ���-�� ������, �� ���� �� � ������ ��� ����� ?" << endl;
					system("pause");

				}

				break;
			}

			if (chance < 65)//����� 30%
			{
				int chance_potion = 1 + rand() % 5;
				Hero.poition += chance_potion;
				cout << "� ������� ���������: ����� ������� (" << chance_potion << ")" << endl;
				system("pause");
				break;
			}
			if (chance < 95)//������ 30%
			{
				int chance_gold = 10 + rand() % 51;
				Hero.gold += chance_gold;
				Hero.score += chance_gold;
				cout << "� ������� ���������: ������� ������ (" << chance_gold << ")" << endl;
				system("pause");
				break;
			}


			if (chance >= 95) //�����(��������� ������) 5%
			{
				if (Hero.HP < 0.2*Hero.Max_HP)
				{
					cout << "������ �������� ������� � ��������� �������� ���..." << endl;
					Hero.Change_HP(-Hero.Max_HP);
					_getch();
				}
				else
				{
					cout << "������ �������� �������, ������� ��������� ���������� �� ���." << endl;
					cout << "��� ������� ���������, �� ������ ������ ��� ��������." << endl;
					chance = Hero.Max_HP / 5 - rand() % Hero.Max_HP / 10;
					cout << "�� �������� " << Hero.HP - chance << " ��������." << endl;
					_getch();
				}
				break;
			}
		}
		else
		{
			cout << Hero.name << " : � ���� ����� ��� �������, ����� �������� �������..." << endl;
			system("pause");
			break;
		}


		if (choice == "���" || choice == "���" || choice == "2")
		{
			cout << Hero.name << ": ����� ��������� ������." << endl;
			system("pause");
			break;
		}


		cout << Hero.name << ": ����� ���������� ������������. ���� ��� ���-�� ������." << endl;
		choice = "0";
		system("pause");
		system("cls");



	}

}