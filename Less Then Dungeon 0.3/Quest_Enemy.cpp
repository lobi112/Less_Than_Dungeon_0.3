#include "Header.h"
/*Добавить систему прокачки монстров относительно уровня героя*/

void quest_enemy(MyHero& Hero, MyWeapon& Weapon1, MyWeapon& Weapon2, int Enemy_type) //Враг
{
	int chance;
	bool success = 0;
	bool pay = false;
	string choice;
	MyEnemy Enemy;
	Enemy.CreateEnemy(Enemy_type);
	Enemy.count = 2;
	/*
	if (Enemy.name == "Слизень") {
		cout << Hero.name << ": Кажется я помню, как сделать из слизня зелье. Иди сюда, склизкое недосущество." << endl;
		if (Enemy.Enemy_type < 51) {
			cout << "Добавлено 1 зелье" << endl;
			Hero.poition++;
		}
		else cout << "Слизень, увидев вас, почуял недоброе и скрылся в щели пещеры" << endl;
	}
	else if (Enemy.name == "Усталость") {
		cout << "Говорят, это самый страшный враг. Надо бы отдохнуть" << endl;
		Sleep(10000);
	}*/
	cout << "К вам приближается " << Enemy.name << "!" << endl;
	cout << "Попробовать откупиться от врага ? (" << Enemy.pay_off_cost << " монет)" << endl;
	cout << "1)Да" << endl;
	cout << "2)Нет" << endl;
	cout << Hero.name << ": ";
	cin >> choice;
	if (choice == "Нет" || choice == "нет" || choice == "2")
	{
		Hero.flag = 1;
	}
	if (choice == "Да" || choice == "да" || choice == "1")
	{
		chance = rand() % 100;
		if (Hero.class_name == "Дворянин") {
			if (Hero.gold - 5 >= Enemy.pay_off_cost) {
				if (chance >= Enemy.pay_off) {
					Hero.gold -= Enemy.pay_off_cost;
					success = 1;
					if (Enemy.pay_off_cost < 4) cout << "Вы отдали " << Enemy.name << Enemy.pay_off_cost << " золотых монеты" << endl;
					else cout << "Вы отдали " << Enemy.name << Enemy.pay_off_cost << " золотых монет" << endl;
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
				cout << Hero.name << ": Как же так, у меня не хватит денег..." << endl;
				_getch();
			}
		}
		else {
			if (Hero.gold >= Enemy.pay_off_cost) {
				if (chance < Enemy.pay_off) {
					Hero.gold -= Enemy.pay_off_cost;
					success = 1;
					cout << "Вы отдали " << Enemy.name << Enemy.pay_off_cost << " золотых монет" << endl;
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
				cout << Hero.name << ": Как же так, у меня не хватит денег..." << endl;
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
						cout << "1) Атака" << endl;
						cout << "2) Карманы" << endl;
						cout << "3) Противник" << endl;
						cout << "4) Использовать зелье лечения" << endl;
						cout << "5) Убежать" << endl;
						cout << Hero.name << ": ";
						cin >> choice; cout << endl;
						if (choice == "1" || choice == "Атака" || choice == "атака") 
						{
							while(1) 
							{
								system("cls");
								Battle_Info(Enemy, Hero, Weapon1, Weapon2);
								cout << "1) Обычная атака" << endl;
								cout << "2) Тяжёлая атака." << endl;
								cout << "3) Быстрая атака." << endl;
								cout << "4) Две атаки." << endl;
								cout << "5) Назад" << endl;
								cout << Hero.name << ": ";
								cin >> choice; cout << endl;
								if (choice == "1") 
								{
									cout << "Вы атакуете " << Enemy.name << "." << endl;
									Sleep(1000);
									Hero_Attack(Enemy, Hero, Weapon1, Weapon2, 1);
									break;
								}
								if (choice == "2")
								{
									chance = rand() % 100;
									if (chance < 60)
									{
										cout << "Вы проводите тяжёлую атаку." << endl;
										Sleep(1000);
										Hero.flag = 0;
										Hero_Attack(Enemy, Hero, Weapon1, Weapon2, 1.5);
									}
									else
									{
										cout << "Вы промахнулись." << endl;
										Hero.flag = 0;
										Sleep(1000);
									}
									break;
								}
								if (choice == "3")
								{
									cout << "Вы проводите быструю атаку." << endl;
									Enemy.Hurt(((Weapon1.damage + rand() % Weapon1.damage_dif)/2) - Enemy.armor);
									Hero.flag = 0;
									Sleep(1000);
									system("cls");
									break;
								}
								if (choice == "4")
								{
									cout << "Вы проводите Две атаки." << endl;
									for (int i = 0; i < 2; i++)
									{
										chance = rand() % 100;
										if (chance < 50)
										{
											Hero_Attack(Enemy, Hero, Weapon1, Weapon2, 1);
										}
										else
										{
											cout << "Вы промахнулись." << endl;
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
						if (choice == "2" || choice == "Проверить карманы" || choice == "проверить карманы") {
							ActPockets(Hero, Weapon1, Weapon2);
							continue;
						}
						if (choice == "3" || choice == "Противник" || choice == "противник") {
							ShowEnemy(Enemy);
							continue;
						}
						if (choice == "4" || choice == "Использовать зелье лечения" || choice == "использовать зелье лечения") 
						{
							ActUsePotion(Hero);
							Hero.flag = 0;
							break;
						}
						if ((choice == "5" || choice == "Убежать" || choice == "убежать") && Enemy.Enemy_type != 7) {
							cout << "Противник делает удар в спину." << endl;
							Sleep(1000);
							Hero.Hurt(2 * (Enemy.damage + rand() % Enemy.damage_dif - Hero.armor));
							if (Hero.HP < 0) 
							break;
							else 
							{
								cout << "Вам удалось убежать, но это было крайне неприятно" << endl;
								_getch();
								break;
							}
						}
						if ((choice == "5" || choice == "Убежать" || choice == "убежать") && Enemy.Enemy_type == 7) 
						{
							cout << Hero.name << " : Меня прижали к стене, бежать некуда" << endl;
							_getch();
						}
						cout << Hero.name << "Нет времени на глупости" << endl;
						_getch();
					}
				}
			}
			if (choice == "5" || choice == "Убежать" || choice == "убежать")
			{
				break;
			}
		}
		if (Hero.HP > 0 && Enemy.HP <= 0)
		{
			Hero.score += Enemy.score; Hero.points += Enemy.points;
			cout << "Враг повержен !" << endl;
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
		cout << Enemy.name << " проводит двойную атаку !" << endl;
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
			cout << Enemy.name << " готовится к атаке." << endl;
			Sleep(1500);
			system("cls");
			Hero.flag = 1;
		}
		Enemy.count++;
	}
	else
	if (Enemy.Enemy_type == 3 && chance < 50) 
	{
		cout << Enemy.name << " проводит тяжёлую атаку" << endl;
		Sleep(1500);
		Hero_Protection(Enemy, Hero, Weapon1, Weapon2, 1.5);
	}
	else
	{
		cout << Enemy.name << " атакует." << endl;
		Sleep(1000);
		Hero_Protection(Enemy, Hero, Weapon1, Weapon2, 1);
	}
}









void Hero_Protection(MyEnemy& Enemy, MyHero& Hero , MyWeapon& Weapon1, MyWeapon& Weapon2, double mod)
{
	string choice;
	int chance = rand() % 100;
	cout << "1) Увернуться." << endl;
	cout << "2) Блокировать." << endl;
	cout << Hero.name << ": "; cin >> choice;
	cout << endl;
	if (choice == "1" || choice == "Увернуться" || choice == "увернуться") {
		if (chance < Hero.Dodge) 
		{
			cout << "Вы увернулись." << endl;
			Sleep(1000);
			system("cls");
		}
		else 
		{
			cout << Enemy.name << " атакует." << endl;
			Hero.Hurt(int(mod*(Enemy.damage + rand() % Enemy.damage_dif)) - Hero.armor);
			Sleep(1000);
			system("cls");
		}
	}
	else
	if (choice == "2" || choice == "Блокировать" || choice == "блокировать") {
		if (chance < Hero.block) {
			cout << "Вы заблокировали атаку." << endl;
			Hero.Hurt(int(mod*(Enemy.damage + rand() % Enemy.damage_dif)) - Hero.armor - Hero.shield);
			Sleep(1000);
			system("cls");
		}
		else {
			cout << Enemy.name << " атакует." << endl;
			Hero.Hurt(int(mod*(Enemy.damage + rand() % Enemy.damage_dif)) - Hero.armor);
			Sleep(1000);
			system("cls");
		}

	}
	else
	{
		cout << "Враг не поощряет ошибки !" << endl;
		cout << Enemy.name << " атакует." << endl;
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
		cout << Enemy.name << " увернулся." << endl;
		Sleep(1000);
	}
	else
	if (Enemy_choice == 2 && chance < Enemy.block) 
	{
		cout << Enemy.name << " блокирует атаку." << endl;
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
	cout << "Имя: " << Hero.name << endl;
	cout << "Здоровье: " << Hero.HP << endl;
	cout << "Урон: " << Weapon1.damage << "-" << Weapon1.damage + Weapon1.damage_dif - 1 << endl << endl;
	cout << "Враг: " << Enemy.name << endl;
	cout << "Здоровье: " << Enemy.HP << endl;
	cout << "Урон: " << Enemy.damage << "-" << Enemy.damage + Enemy.damage_dif - 1 << endl << endl;
}