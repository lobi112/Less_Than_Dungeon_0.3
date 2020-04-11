#include "Header.h"

void quest_chest(MyHero& Hero, MyWeapon& Weapon1, MyWeapon& Weapon2) //Сундук
{
	string choice = "0";
	while (choice == "0")
	{

		cout << "Вы нашли сундук. Открыть его ?" << endl;
		cout << "1)Да" << endl;
		cout << "2)Нет" << endl;
		cout << Hero.name << ": ";
		cin >> choice;
		if (choice == "Да" || choice == "да" || choice == "1") //Варианты выпадения предметов и опасностей
		{
			int chance = rand() % 100;
			if (chance < 5)
			{
				cout << "В сундуке находится: Помидор" << endl; //Помидор 5%
				cout << Hero.name << ": Серьёзна ?" << endl;
				Hero.score += 1;
				system("pause");
				break;
			}

			if (chance < 25) //Пусто 20%
			{
				cout << "В сундуке: Пусто" << endl;
				cout << Hero.name << ": Ничего не поделать, может в другой раз..." << endl;
				system("pause");
				break;
			}

			if (chance < 40)//Оружие/броня/щит 15%
			{
				int type = rand() % 3 + 1; //1-2-3 . Оружие-броня-щит
				
				chance = Weapon_Armor_chance(Hero);
				while (1) {

					MyWeapon Weapon_Change(Hero.damage_plus);
					Weapon_Change.Weapon_change(chance);
					system("cls");

					switch (type)
					{
					case 1: cout << "В сундуке находится : Оружие - "; Item_Check(chance, 1); break;
					case 2: cout << "В сундуке находится : "; Item_Check(chance, 2); break;
					case 3: cout << "В сундуке находится : "; Item_Check(chance, 3); break;
					}

					switch (type)
					{
					case 1: cout << "Урон : " << Weapon_Change.damage << "-" << Weapon_Change.damage + Weapon_Change.damage_dif - 1 << endl; break;
					case 2: cout << "Уровень защиты : "; Item_Check(chance, 22); break;
					case 3: cout << "Защита в блоке : "; Item_Check(chance, 33);; break;
					}

					switch (type)
					{
					case 1: cout << "Взять его ?" << endl; break;
					case 2: cout << "Надеть на себя ?" << endl; break;
					case 3: cout << "Взять его ?" << endl; break;
					}
					cout << "1)Да" << endl;
					cout << "2)Нет" << endl;
					cout << "3)Карманы" << endl;
					cout << Hero.name << ": ";
					cin >> choice;
					if (choice == "1" || choice == "Да" || choice == "да")
					{
						switch (type)
						{
						case 1: Weapon1 = Weapon_Change; break;
						case 2: Hero.Armor_change(chance); break;
						case 3: Hero.Shield_change(chance); break;
						}
						cout << Hero.name << " : Это может пригодиться !" << endl;
						system("pause");
						break;
					}
					if (choice == "2" || choice == "Нет" || choice == "нет")
					{
						cout << Hero.name << ": Мне это не к чему." << endl;
						system("pause");
						break;
					}
					if (choice == "3" || choice == "Карманы" || choice == "карманы")
					{
						ActPockets(Hero, Weapon1, Weapon2);
						continue;
					}

					cout << Hero.name << " : Надо бы уже что-то решить, не могу же я стоять тут вечно ?" << endl;
					system("pause");

				}

				break;
			}

			if (chance < 60)//Зелье 20%
			{
				int chance_potion = 1 + rand() % 3;
				Hero.poition += chance_potion;
				cout << "В сундуке находится: Зелье лечения (" << chance_potion << ")" << endl;
				system("pause");
				break;
			}
			if (chance < 85)//Золото 25%
			{
				int chance_gold = 5 + rand() % 16;
				Hero.gold += chance_gold;
				Hero.score += chance_gold;
				cout << "В сундуке находятся: Золотые монеты (" << chance_gold << ")" << endl;
				system("pause");
				break;
			}
			if (chance <= 97)//Отмычка 12%
			{
				int chance_picklock = 1 + rand() % 3;
				Hero.picklock += chance_picklock;
				cout << "В сундуке находятся: Отмычки (" << chance_picklock << ")" << endl;
				system("pause");
				break;
			}


			if (chance > 97) //Мимик(Мгновення смерть) 2%
			{
				if (Hero.HP < 0.2*Hero.Max_HP)
				{
					cout << "Сундук оказался мимиком и мгновенно поглотил вас..." << endl;
					Hero.Change_HP(-Hero.Max_HP);
					_getch();
				}
				else
				{
					cout << "Сундук оказался мимиком, который мгновенно набросился на вас." << endl;
					cout << "Вам удалось вырваться, но монстр сильно вас потрепал." << endl;
					chance = Hero.Max_HP/5 - rand() % Hero.Max_HP / 10;
					Hero.Change_HP(-chance);
					cout << "Вы потеряли " << Hero.HP-chance << " здоровья." <<  endl;
					_getch();
				}
				break;
			}



			if (choice == "Нет" || choice == "нет" || choice == "2")
			{
				cout << Hero.name << ": Нужно двигаться дальше." << endl;
				system("pause");
				break;
			}


			cout << Hero.name << ": Здесь оставаться небезопастно. Пора уже что-то решить." << endl;
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

		cout << "Вы нашли сундук с крупным замком. Открыть его с помощью отмычки ?" << endl;
		cout << "1)Да" << endl;
		cout << "2)Нет" << endl;
		cout << Hero.name << ": ";
		cin >> choice;
		if ((choice == "Да" || choice == "да" || choice == "1") && Hero.picklock > 0) //Варианты выпадения предметов и опасностей
		{
			while (choice == "1")
			{
				chance = rand() % 100; //Проверка на удачу при открытии сундука 40%
				if (chance < Hero.chest_unlock)
				{
					cout << "Сундук открыт !" << endl;
					system("pause");
					break;
				}

				else if (Hero.picklock <= 0)
				{
					cout << Hero.name << ": У меня кончились отмычки, придётся уйти." << endl;
					system("pause");
					choice = "0";
				}

				else
				{
					Hero.picklock--;
					system("cls");
					cout << "Отмычка сломалась" << endl;
					cout << "Попробовать ещё раз ?" << endl;
					cout << "1)Да" << endl;
					cout << "2)Нет" << endl;
					cout << Hero.name << ": ";
					cin >> choice;
					if (choice == "Нет" || choice == "нет" || choice == "2")
					{
						cout << Hero.name << ": Попробую в другой раз." << endl;
						choice = "0";
					}
				}
			}

			if (choice == "0")
			{
				break;
			}

			chance = rand() % 100; //Проверка выпадения лута

			if (chance < 35)//Улучшение оружия 35%
			{
				int type = rand() % 3 + 1; //1-2-3 . Оружие-броня-щит

				chance = Weapon_Armor_chance(Hero);
				while (1) {

					MyWeapon Weapon_Change(chance);
					Weapon_Change.Weapon_change(chance);
					system("cls");

					switch (type)
					{
					case 1: cout << "В сундуке находится : Оружие - "; Item_Check(chance, 1); break;
					case 2: cout << "В сундуке находится : "; Item_Check(chance, 2); break;
					case 3: cout << "В сундуке находится : "; Item_Check(chance, 3); break;
					}

					switch (type)
					{
					case 1: cout << "Урон : " << Weapon_Change.damage << "-" << Weapon_Change.damage + Weapon_Change.damage_dif - 1 << endl; break;
					case 2: cout << "Уровень защиты : "; Item_Check(chance, 22); break;
					case 3: cout << "Защита в блоке : "; Item_Check(chance, 33);; break;
					}

					switch (type)
					{
					case 1: cout << "Взять его ?" << endl; break;
					case 2: cout << "Надеть на себя ?" << endl; break;
					case 3: cout << "Взять его ?" << endl; break;
					}
					cout << "1)Да" << endl;
					cout << "2)Нет" << endl;
					cout << "3)Карманы" << endl;
					cout << Hero.name << ": ";
					cin >> choice;
					if (choice == "1" || choice == "Да" || choice == "да")
					{
						switch (type)
						{
						case 1: Weapon1 = Weapon_Change; break;
						case 2: Hero.Armor_change(chance); break;
						case 3: Hero.Shield_change(chance); break;
						}
						cout << Hero.name << " : Это может пригодиться !" << endl;
						system("pause");
						break;
					}
					if (choice == "2" || choice == "Нет" || choice == "нет")
					{
						cout << Hero.name << ": Мне это не к чему." << endl;
						system("pause");
						break;
					}
					if (choice == "3" || choice == "Карманы" || choice == "карманы")
					{
						ActPockets(Hero, Weapon1, Weapon2);
						continue;
					}

					cout << Hero.name << " : Надо бы уже что-то решить, не могу же я стоять тут вечно ?" << endl;
					system("pause");

				}

				break;
			}

			if (chance < 65)//Зелье 30%
			{
				int chance_potion = 1 + rand() % 5;
				Hero.poition += chance_potion;
				cout << "В сундуке находится: Зелье лечения (" << chance_potion << ")" << endl;
				system("pause");
				break;
			}
			if (chance < 95)//Золото 30%
			{
				int chance_gold = 10 + rand() % 51;
				Hero.gold += chance_gold;
				Hero.score += chance_gold;
				cout << "В сундуке находятся: Золотые монеты (" << chance_gold << ")" << endl;
				system("pause");
				break;
			}


			if (chance >= 95) //Мимик(Мгновення смерть) 5%
			{
				if (Hero.HP < 0.2*Hero.Max_HP)
				{
					cout << "Сундук оказался мимиком и мгновенно поглотил вас..." << endl;
					Hero.Change_HP(-Hero.Max_HP);
					_getch();
				}
				else
				{
					cout << "Сундук оказался мимиком, который мгновенно набросился на вас." << endl;
					cout << "Вам удалось вырваться, но монстр сильно вас потрепал." << endl;
					chance = Hero.Max_HP / 5 - rand() % Hero.Max_HP / 10;
					cout << "Вы потеряли " << Hero.HP - chance << " здоровья." << endl;
					_getch();
				}
				break;
			}
		}
		else
		{
			cout << Hero.name << " : У меня нечем его открыть, стоит поискать отмычки..." << endl;
			system("pause");
			break;
		}


		if (choice == "Нет" || choice == "нет" || choice == "2")
		{
			cout << Hero.name << ": Нужно двигаться дальше." << endl;
			system("pause");
			break;
		}


		cout << Hero.name << ": Здесь оставаться небезопастно. Пора уже что-то решить." << endl;
		choice = "0";
		system("pause");
		system("cls");



	}

}