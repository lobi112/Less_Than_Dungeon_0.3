#include "Header.h"
/*�������� ������� �������� �������� ������������ ������ �����*/

void quest_enemy(MyHero& Hero, MyWeapon& Weapon1, MyWeapon& Weapon2, int Enemy_type) //����
{
	int chance;
	bool success = 0;
	bool pay = false;
	string choice;
	MyEnemy Enemy;
	Enemy.CreateEnemy(Enemy_type);
	Enemy.count = 2;
	/*
	if (Enemy.name == "�������") {
		cout << Hero.name << ": ������� � �����, ��� ������� �� ������ �����. ��� ����, �������� ������������." << endl;
		if (Enemy.Enemy_type < 51) {
			cout << "��������� 1 �����" << endl;
			Hero.poition++;
		}
		else cout << "�������, ������ ���, ������ �������� � ������� � ���� ������" << endl;
	}
	else if (Enemy.name == "���������") {
		cout << "�������, ��� ����� �������� ����. ���� �� ���������" << endl;
		Sleep(10000);
	}*/
	cout << "� ��� ������������ " << Enemy.name << "!" << endl;
	cout << "����������� ���������� �� ����� ? (" << Enemy.pay_off_cost << " �����)" << endl;
	cout << "1)��" << endl;
	cout << "2)���" << endl;
	cout << Hero.name << ": ";
	cin >> choice;
	if (choice == "���" || choice == "���" || choice == "2")
	{
		Hero.flag = 1;
	}
	if (choice == "��" || choice == "��" || choice == "1")
	{
		chance = rand() % 100;
		if (Hero.class_name == "��������") {
			if (Hero.gold - 5 >= Enemy.pay_off_cost) {
				if (chance >= Enemy.pay_off) {
					Hero.gold -= Enemy.pay_off_cost;
					success = 1;
					if (Enemy.pay_off_cost < 4) cout << "�� ������ " << Enemy.name << Enemy.pay_off_cost << " ������� ������" << endl;
					else cout << "�� ������ " << Enemy.name << Enemy.pay_off_cost << " ������� �����" << endl;
					pay = true;
					Battle_Diologs(Enemy, success);
					_getch();
				}
				else {
					Battle_Diologs(Enemy, success);
					_getch();
				}
			}
			else
			{
				cout << Hero.name << ": ��� �� ���, � ���� �� ������ �����..." << endl;
				_getch();
			}
		}
		else {
			if (Hero.gold >= Enemy.pay_off_cost) {
				if (chance < Enemy.pay_off) {
					Hero.gold -= Enemy.pay_off_cost;
					success = 1;
					cout << "�� ������ " << Enemy.name << Enemy.pay_off_cost << " ������� �����" << endl;
					pay = true;
					Battle_Diologs(Enemy, success);
					_getch();
				}
				else {
					Battle_Diologs(Enemy, success);
					_getch();
				}
			}
			else {
				cout << Hero.name << ": ��� �� ���, � ���� �� ������ �����..." << endl;
				_getch();
			}
		}
	}
	if (pay == false) {
		while (Enemy.HP > 0 && Hero.HP > 0) {
			if (Hero.flag == 0) 
			{
				Tacktics(Enemy, Hero, Weapon1, Weapon2);
			}
			if (Hero.HP <= 0)
			{
				break;
			}
			if (Hero.flag == 1) {
				if (Hero.flag == 1) {
					while (true) {
						Battle_Info(Enemy, Hero, Weapon1, Weapon2);
						cout << "1) �����" << endl;
						cout << "2) �������" << endl;
						cout << "3) ���������" << endl;
						cout << "4) ������������ ����� �������" << endl;
						cout << "5) �������" << endl;
						cout << Hero.name << ": ";
						cin >> choice; cout << endl;
						if (choice == "1" || choice == "�����" || choice == "�����") 
						{
							while(1) 
							{
								system("cls");
								Battle_Info(Enemy, Hero, Weapon1, Weapon2);
								cout << "1) ������� �����" << endl;
								cout << "2) ������ �����." << endl;
								cout << "3) ������� �����." << endl;
								cout << "4) ��� �����." << endl;
								cout << "5) �����" << endl;
								cout << Hero.name << ": ";
								cin >> choice; cout << endl;
								if (choice == "1") 
								{
									cout << "�� �������� " << Enemy.name << "." << endl;
									Sleep(1000);
									Hero_Attack(Enemy, Hero, Weapon1, Weapon2, 1);
									break;
								}
								if (choice == "2")
								{
									chance = rand() % 100;
									if (chance < 60)
									{
										cout << "�� ��������� ������ �����." << endl;
										Sleep(1000);
										Hero.flag = 0;
										Hero_Attack(Enemy, Hero, Weapon1, Weapon2, 1.5);
									}
									else
									{
										cout << "�� ������������." << endl;
										Hero.flag = 0;
										Sleep(1000);
									}
									break;
								}
								if (choice == "3")
								{
									cout << "�� ��������� ������� �����." << endl;
									Enemy.Hurt(((Weapon1.damage + rand() % Weapon1.damage_dif)/2) - Enemy.armor);
									Hero.flag = 0;
									Sleep(1000);
									system("cls");
									break;
								}
								if (choice == "4")
								{
									cout << "�� ��������� ��� �����." << endl;
									for (int i = 0; i < 2; i++)
									{
										chance = rand() % 100;
										if (chance < 50)
										{
											Hero_Attack(Enemy, Hero, Weapon1, Weapon2, 1);
										}
										else
										{
											cout << "�� ������������." << endl;
											Sleep(1000);
										}
									}
									Hero.flag = 0;
									break;
									
								}
								if (choice == "5")
								{
									break;;
								}
								system("cls");
							}

						}
						if (Hero.flag == 0)
						{
							break;
						}
						if (choice == "2" || choice == "��������� �������" || choice == "��������� �������") {
							ActPockets(Hero, Weapon1, Weapon2);
							continue;
						}
						if (choice == "3" || choice == "���������" || choice == "���������") {
							ShowEnemy(Enemy);
							continue;
						}
						if (choice == "4" || choice == "������������ ����� �������" || choice == "������������ ����� �������") 
						{
							ActUsePotion(Hero);
							Hero.flag = 0;
							break;
						}
						if ((choice == "5" || choice == "�������" || choice == "�������") && Enemy.Enemy_type != 7) {
							cout << "��������� ������ ���� � �����." << endl;
							Sleep(1000);
							Hero.Hurt(2 * (Enemy.damage + rand() % Enemy.damage_dif - Hero.armor));
							if (Hero.HP < 0) 
							break;
							else 
							{
								cout << "��� ������� �������, �� ��� ���� ������ ���������" << endl;
								_getch();
								break;
							}
						}
						if ((choice == "5" || choice == "�������" || choice == "�������") && Enemy.Enemy_type == 7) 
						{
							cout << Hero.name << " : ���� ������� � �����, ������ ������" << endl;
							_getch();
						}
						cout << Hero.name << "��� ������� �� ��������" << endl;
						_getch();
					}
				}
			}
			if (choice == "5" || choice == "�������" || choice == "�������")
			{
				break;
			}
		}
		if (Hero.HP > 0 && Enemy.HP <= 0)
		{
			Hero.score += Enemy.score; Hero.points += Enemy.points;
			cout << "���� �������� !" << endl;
			_getch();
		};
	}
	
}


void Tacktics(MyEnemy& Enemy, MyHero& Hero, MyWeapon& Weapon1, MyWeapon& Weapon2)
{
	int chance = rand() % 100;; int flag = 0;
	string choice;
	Battle_Info(Enemy, Hero, Weapon1, Weapon2);
	if (Enemy.Enemy_type == 2 && chance < 35)
	{
		cout << Enemy.name << " �������� ������� ����� !" << endl;
		Sleep(1500);
		Hero_Protection(Enemy, Hero, Weapon1, Weapon2, 1);
		Battle_Info(Enemy, Hero, Weapon1, Weapon2);
		Hero_Protection(Enemy, Hero, Weapon1, Weapon2, 1);
	}
	else
	if (Enemy.Enemy_type == 4) 
	{
		if (Enemy.count % 2 == 0) 
		{
			Hero_Protection(Enemy, Hero, Weapon1, Weapon2, 1);
		}
		else 
		{
			cout << Enemy.name << " ��������� � �����." << endl;
			Sleep(1500);
			system("cls");
			Hero.flag = 1;
		}
		Enemy.count++;
	}
	else
	if (Enemy.Enemy_type == 3 && chance < 50) 
	{
		cout << Enemy.name << " �������� ������ �����" << endl;
		Sleep(1500);
		Hero_Protection(Enemy, Hero, Weapon1, Weapon2, 1.5);
	}
	else
	{
		cout << Enemy.name << " �������." << endl;
		Sleep(1000);
		Hero_Protection(Enemy, Hero, Weapon1, Weapon2, 1);
	}
}









void Hero_Protection(MyEnemy& Enemy, MyHero& Hero , MyWeapon& Weapon1, MyWeapon& Weapon2, double mod)
{
	string choice;
	int chance = rand() % 100;
	cout << "1) ����������." << endl;
	cout << "2) �����������." << endl;
	cout << Hero.name << ": "; cin >> choice;
	cout << endl;
	if (choice == "1" || choice == "����������" || choice == "����������") {
		if (chance < Hero.Dodge) 
		{
			cout << "�� ����������." << endl;
			Sleep(1000);
			system("cls");
		}
		else 
		{
			cout << Enemy.name << " �������." << endl;
			Hero.Hurt(int(mod*(Enemy.damage + rand() % Enemy.damage_dif)) - Hero.armor);
			Sleep(1000);
			system("cls");
		}
	}
	else
	if (choice == "2" || choice == "�����������" || choice == "�����������") {
		if (chance < Hero.block) {
			cout << "�� ������������� �����." << endl;
			Hero.Hurt(int(mod*(Enemy.damage + rand() % Enemy.damage_dif)) - Hero.armor - Hero.shield);
			Sleep(1000);
			system("cls");
		}
		else {
			cout << Enemy.name << " �������." << endl;
			Hero.Hurt(int(mod*(Enemy.damage + rand() % Enemy.damage_dif)) - Hero.armor);
			Sleep(1000);
			system("cls");
		}

	}
	else
	{
		cout << "���� �� �������� ������ !" << endl;
		cout << Enemy.name << " �������." << endl;
		Hero.Hurt(int(mod*(Enemy.damage + rand() % Enemy.damage_dif)) - Hero.armor);
		Sleep(1000);
		system("cls");
	}

	Hero.flag = 1;
}


void Hero_Attack(MyEnemy& Enemy, MyHero& Hero, MyWeapon& Weapon1, MyWeapon& Weapon2, double mod)
{
	int chance = rand() % 100;
	int Enemy_choice = 1 + rand() % 2;
	if (Enemy_choice == 1 && chance < Enemy.Dodge) 
	{
		cout << Enemy.name << " ���������." << endl;
		Sleep(1000);
	}
	else
	if (Enemy_choice == 2 && chance < Enemy.block) 
	{
		cout << Enemy.name << " ��������� �����." << endl;
		Enemy.Hurt(int(mod*(Weapon1.damage + rand() % Weapon1.damage_dif)) - Enemy.armor - Enemy.shield);
		Sleep(1000);
	}
	else 
	{
		Enemy.Hurt(int(mod*(Weapon1.damage + rand() % Weapon1.damage_dif)) - Enemy.armor);
		Sleep(1000);
	}
	Hero.flag = 0;
}


void Battle_Info(MyEnemy& Enemy, MyHero& Hero, MyWeapon& Weapon1, MyWeapon& Weapon2)
{
	system("cls");
	cout << "���: " << Hero.name << endl;
	cout << "��������: " << Hero.HP << endl;
	cout << "����: " << Weapon1.damage << "-" << Weapon1.damage + Weapon1.damage_dif - 1 << endl << endl;
	cout << "����: " << Enemy.name << endl;
	cout << "��������: " << Enemy.HP << endl;
	cout << "����: " << Enemy.damage << "-" << Enemy.damage + Enemy.damage_dif - 1 << endl << endl;
}