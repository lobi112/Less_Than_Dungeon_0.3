#include "Header.h"

int Begin()
{
	int score = 0; //������� ����� ����
	string choice;
	int chance;

	cout << "�����: �� !" << endl;
	_getch();
	cout << "...: ���..." << endl;
	_getch();
	cout << "�����: �������� !" << endl;
	_getch();
	cout << "...: ��� ? ��� ��� ������� ?" << endl;
	_getch();
	cout << "�� ��������� ����� � ������ ������� ������." << endl;
	cout << "�����: ��� �� ���� ����������, ������ ?" << endl;
	_getch();
	cout << "...: �� ���� �����." << endl;
	cout << "...: ��� ���������, ��� � ?" << endl;
	_getch();
	cout << "�����: ����� ���������� � ����������, ���� �� �������, ���� �� �� ��� ������� �����." << endl;
	cout << "�����: ��� ���� ����� ?" << endl;
	cout << "������� ��� �����: ";
	cin >> choice;
	system("cls");
	MyHero Hero(choice);	 //��������� ��������� ���������

	while (1)
	{
		system("cls");
		cout << "�������� ����� �����: " << endl;
		cout << "1)�������� " << endl;
		cout << "2)���� " << endl;
		cout << "3)������� " << endl;
		cout << "4)��� " << endl;
		cout << "5)�������� " << endl;
		cout << "6)����� " << endl;
		cout << "�����: ";
		cin >> choice;
		if (choice == "1" || choice == "��������" || choice == "��������")
		{
			Hero.Class_choice(1);
			break;
		}
		if (choice == "2" || choice == "����" || choice == "����")
		{
			Hero.Class_choice(2);
			break;
		}
		if (choice == "3" || choice == "�������" || choice == "�������")
		{
			Hero.Class_choice(3);
			break;
		}
		if (choice == "4" || choice == "���" || choice == "���")
		{
			Hero.Class_choice(4);
			break;
		}
		if (choice == "5" || choice == "��������" || choice == "��������")
		{
			Hero.Class_choice(5);
			break;
		}
		if (choice == "6" || choice == "�����" || choice == "�����")
		{
			Hero.Class_choice(6);
			cout << "������ ���� ����� ? ���������� !" << endl;
			_getch();
			break;
		}

	}

	MyWeapon Weapon1(Hero.damage_plus);
	MyWeapon Weapon2(Hero.damage_plus);
	Weapon1.Weapon_change(0);
	Weapon2.Weapon_change(0);
	Hero.Armor_change(0);
	Hero.Shield_change(0);
	system("cls");

	cout << Hero.name << ": ��� � ��� �������� ?" << endl;
	cout << "�����: �� ����, �� �������� ����� �������, �� �������, ��� ����� ����." << endl;
	_getch();
	cout << "�� �������������� � ������ �������� ����, �������� ������ �� ����������� ��� �����." << endl;
	cout << Hero.name << ": ������..." << endl;
	cout << "� ������ ���� �������� �������� ����-�������� �����." << endl;
	cout << "�������� ��������� ������ ����, �� ��� �������, ����� �������� ��������� �������� �����." << endl;
	_getch();
	cout << Hero.name << " : ������� �� �������� ������ � ���� �������..." << endl;
	cout << Hero.name << " : ����� �������, ��� ����� �������� ��������." << endl;
	_getch();
	cout << "�����: � ���� ����� �������." << endl;
	cout << "�����: � ���� ���������, ������� ���������� ��������. " << endl;
	cout << "�����: � � ������� ������ ���� ��������. " << endl;
	_getch();
	cout << Hero.name << ": �����, ���������." << endl;
	system("pause");
	quest_escape(Hero);

	int counter = 0; //���������� ��� �������� ���������� ������.
	int rune_time = 10; //����� ���� �����
	while (1)
	{
		if (Hero.HP <= 0 && (choice != "������" || choice != "x�����" || choice != "4"))
		{
			system("cls");
			cout << "�������� �������� ���, �� ���� �� ����..." << endl;
			cout << "����: " << Hero.score << endl;
			system("pause");
			system("cls");
			cout << "���� �������� " << endl;
			system("pause");
			system("cls");
			break;
		}

		if (Hero.HP > 0 && Hero.win == 1)
		{
			system("cls");
			cout << "�� ���������� � ������� ���������� � ��������� �� ������� !" << endl;
			cout << "����: " << Hero.score << endl;
			system("pause");
			system("cls");
			cout << "�� �������� " << endl;
			system("pause");
			system("cls");
			break;
		}

		
		if (Hero.HP <= 0 && (choice != "������" || choice != "x�����" || choice != "4"))
		{
			system("cls");
			cout << "�������� �������� ���, �� ���� �� ����..." << endl;
			cout << "����: " << Hero.score << endl;
			system("pause");
			system("cls");
			cout << "���� �������� " << endl;
			system("pause");
			system("cls");
			break;
		}

		
		system("cls");
		cout << Hero.name << ": ��� ������ ?" << endl;
		cout << "1)������" << endl;
		cout << "2)�������" << endl;
		cout << "3)����� (��������� ��������)" << endl;
		cout << "4)������" << endl;
		if (Hero.rune_light == 1 )
		{
			cout << "5)������������ ���� ����� (�� ������������� - "<< rune_time <<" )" << endl;
		}
		cout << Hero.name << ": ";
		cin >> choice;
		/*22% - ����
		30% - ������
		9% - ������ � ������
		13% - �������
		3% - �����
		8% - ��������
		15% - ������ */
		if (choice == "������" || choice == "������" || choice == "1")
		{
			if (Hero.rune_light == 1 && rune_time != 0)
			{
				rune_time--;
			}
			counter++;
			system("cls");
			chance = rand() % 100;

			if (Hero.points > 8 && chance < 5 && Hero.charge_cristall == 0)
			{
				quest_fountain(Hero,Weapon1,Weapon2); //����� 5% ���� � ������� ���-�� �����

				continue;
			}

			if (chance < 10 && Hero.points>3 && counter > 20 && Hero.rune_light == 0)
			{
				quest_rune_light(Hero, Weapon1, Weapon2); 

				continue;
			}

		    if (chance >15 && chance < 45)
			{
				quest_chest(Hero, Weapon1, Weapon2); //C����� 30% ����
				continue;
			}			
			
			if (chance > 15 && chance < 55)
			{
				quest_chest_lock(Hero, Weapon1, Weapon2); //C����� � ������ 8% ����

				continue;
			}

			if (chance > 15 && chance < 60)
			{
				quest_trader_1(Hero, Weapon1, Weapon2); //�������� ���� 5%

				continue;
			}

			if (chance > 15 && chance < 65)
			{
				quest_riddle(Hero); //������� 5% ����

				continue;
			}
			if (chance > 15 && chance < 70)
			{
				quest_camp(Hero, Weapon1, Weapon2);

				continue;
			}

			if (chance > 15 && chance < 72)
			{
				quest_escape(Hero); //����� 5% ���� � ������� ���-�� �����

				continue;
			}



			if (chance > 15 && chance < 87 + Hero.points / 2)
			{
				chance = Weapon_Armor_chance(Hero);
				quest_enemy(Hero, Weapon1, Weapon2, chance); //���� 15-25% ����

				continue;
			}

			cout << "����� ���� ��������� ������ �������� � ������ �������." << endl; //������ �������
			cout << Hero.name << ": ���,������� ����� ������. " << endl;
			system("pause");
			continue;
		}

		if (choice == "�������" || choice == "�������" || choice == "2")
		{
			ActPockets(Hero, Weapon1, Weapon2); //�������� ��� ���������� �����
			continue;
		}

		if (choice == "�����" || choice == "�����" || choice == "3")
		{
			ActUsePotion(Hero); //������������ ����� ��������
			continue;
		}

		if (choice == "������" || choice == "x�����" || choice == "4")
		{
			Hero.Change_HP(-(Hero.Max_HP));
			system("cls");
			cout << "�� ������� � ���� �� ����..." << endl;;
			cout << "����: " << Hero.score << endl;
			system("pause");
			system("cls");
			cout << "���� �������� " << endl;
			system("pause");
			system("cls");
			break;
		}
		if (choice == "5" && rune_time != 0)
		{
			cout << Hero.name << " : ����� �����, ���� ��� �� �������� �������." << endl;
			system("pause");
			continue;
		}

		if (choice == "5" && rune_time == 0)
		{
			system("cls");
			cout << "�� ���������� ���� ��� ������� � ������ ��� ����� ������� ���������� ����� ����, �������� ����� ����� ����." << endl;
			cout << "���� �� ������ ����������� ? :" << endl;
			cout << "1)������" << endl;
			cout << "2)��������" << endl;
			cout << "3)������" << endl;
			cout << "4)�����" << endl;
			cout << Hero.name << ": ";
			cin >> choice;
			while(1) 
			{
				if (choice == "1" || choice == "������" || choice == "������")
				{
					rune_time = 10;
					quest_escape(Hero);
					break;
				}
				if (choice == "2" || choice == "��������" || choice == "��������")
				{
					rune_time = 10;
					quest_trader_1(Hero, Weapon1, Weapon2);
					break;
				}
				if (choice == "3" || choice == "������" || choice == "������")
				{
					rune_time = 10;
					quest_camp(Hero, Weapon1, Weapon2);
					break;
				}
				if (choice == "4" || choice == "�����" || choice == "�����")
				{
					cout << Hero.name << " : ���, �������, ��������� ��� �����" << endl;
					break;
				}
				cout << Hero.name << ": ���� ���-�� ������!" << endl;
				system("pause");
			}
			continue;
		}



		cout << Hero.name << ": ���� ���-�� ������!" << endl; //��� �������� �����
		system("pause"); 


	}

	ScoreF(Hero); //������ ����� �  ����� � ����
	return 0;
}