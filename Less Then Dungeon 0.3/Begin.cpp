#include "Header.h"

int Begin()
{
	int score = 0; //Ведение счёта игры
	string choice;
	int chance;

	cout << "Голос: Эй !" << endl;
	_getch();
	cout << "...: Оох..." << endl;
	_getch();
	cout << "Голос: Проснись !" << endl;
	_getch();
	cout << "...: Что ? Кто это говорит ?" << endl;
	_getch();
	cout << "Вы открывате глаза и видите чёрного ворона." << endl;
	cout << "Ворон: Как ты себя чувствуешь, путник ?" << endl;
	_getch();
	cout << "...: Всё тело болит." << endl;
	cout << "...: Что произошло, где я ?" << endl;
	_getch();
	cout << "Ворон: Добро пожаловать в подземелье, было бы неплохо, если бы ты уже наконец встал." << endl;
	cout << "Ворон: Как тебя зовут ?" << endl;
	cout << "Введите имя героя: ";
	cin >> choice;
	system("cls");
	MyHero Hero(choice);	 //Начальные настройки персонажа

	while (1)
	{
		system("cls");
		cout << "Выберите класс героя: " << endl;
		cout << "1)Странник " << endl;
		cout << "2)Воин " << endl;
		cout << "3)Берсерк " << endl;
		cout << "4)Вор " << endl;
		cout << "5)Дворянин " << endl;
		cout << "6)Нищий " << endl;
		cout << "Выбор: ";
		cin >> choice;
		if (choice == "1" || choice == "Странник" || choice == "странник")
		{
			Hero.Class_choice(1);
			break;
		}
		if (choice == "2" || choice == "Воин" || choice == "воин")
		{
			Hero.Class_choice(2);
			break;
		}
		if (choice == "3" || choice == "Берсерк" || choice == "берсерк")
		{
			Hero.Class_choice(3);
			break;
		}
		if (choice == "4" || choice == "Вор" || choice == "вор")
		{
			Hero.Class_choice(4);
			break;
		}
		if (choice == "5" || choice == "Дворянин" || choice == "дворянин")
		{
			Hero.Class_choice(5);
			break;
		}
		if (choice == "6" || choice == "Нищий" || choice == "Нищий")
		{
			Hero.Class_choice(6);
			cout << "Хотите быть нищим ? Пожалуйста !" << endl;
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

	cout << Hero.name << ": Как я тут очутился ?" << endl;
	cout << "Ворон: Не знаю, ты появился здесь недавно, из портала, что сзади тебя." << endl;
	_getch();
	cout << "Вы оборачиваетесь и видите каменную арку, усеянную рунами на неизвестном вам языке." << endl;
	cout << Hero.name << ": Портал..." << endl;
	cout << "В центре арку украшает кристалл ярко-голубого цвета." << endl;
	cout << "Кристалл испускает слабый свет, но его хватает, чтобы осветить ближайшие каменные своды." << endl;
	_getch();
	cout << Hero.name << " : Кажется он работает только в одну сторону..." << endl;
	cout << Hero.name << " : Стоит поикать, чем можно зарядить кристалл." << endl;
	_getch();
	cout << "Ворон: Я тебя здесь подожду." << endl;
	cout << "Ворон: И будь осторожен, кажется подземелье меняется. " << endl;
	cout << "Ворон: Я с большим трудом сюда вернулся. " << endl;
	_getch();
	cout << Hero.name << ": Ладно, посмотрим." << endl;
	system("pause");
	quest_escape(Hero);

	int counter = 0; //Переменная для подсчёта пройденных комнат.
	int rune_time = 10; //откат руны света
	while (1)
	{
		if (Hero.HP <= 0 && (choice != "Хватит" || choice != "xватит" || choice != "4"))
		{
			system("cls");
			cout << "Погибель настигла вас, вы ушли во тьму..." << endl;
			cout << "Счёт: " << Hero.score << endl;
			system("pause");
			system("cls");
			cout << "ИГРА ОКОНЧЕНА " << endl;
			system("pause");
			system("cls");
			break;
		}

		if (Hero.HP > 0 && Hero.win == 1)
		{
			system("cls");
			cout << "Вы справились с ужасами подземелья и выбрались на свободу !" << endl;
			cout << "Счёт: " << Hero.score << endl;
			system("pause");
			system("cls");
			cout << "ВЫ ПОБЕДИЛИ " << endl;
			system("pause");
			system("cls");
			break;
		}

		
		if (Hero.HP <= 0 && (choice != "Хватит" || choice != "xватит" || choice != "4"))
		{
			system("cls");
			cout << "Погибель настигла вас, вы ушли во тьму..." << endl;
			cout << "Счёт: " << Hero.score << endl;
			system("pause");
			system("cls");
			cout << "ИГРА ОКОНЧЕНА " << endl;
			system("pause");
			system("cls");
			break;
		}

		
		system("cls");
		cout << Hero.name << ": Что теперь ?" << endl;
		cout << "1)Дальше" << endl;
		cout << "2)Карманы" << endl;
		cout << "3)Зелье (Пополнить здоровье)" << endl;
		cout << "4)Хватит" << endl;
		if (Hero.rune_light == 1 )
		{
			cout << "5)Использовать руну света (До использования - "<< rune_time <<" )" << endl;
		}
		cout << Hero.name << ": ";
		cin >> choice;
		/*22% - враг
		30% - сундук
		9% - сундук с замком
		13% - загадка
		3% - выход
		8% - торговец
		15% - пустая */
		if (choice == "Дальше" || choice == "дальше" || choice == "1")
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
				quest_fountain(Hero,Weapon1,Weapon2); //Выход 5% шанс и условие кол-ва очков

				continue;
			}

			if (chance < 10 && Hero.points>3 && counter > 20 && Hero.rune_light == 0)
			{
				quest_rune_light(Hero, Weapon1, Weapon2); 

				continue;
			}

		    if (chance >15 && chance < 45)
			{
				quest_chest(Hero, Weapon1, Weapon2); //Cундук 30% шанс
				continue;
			}			
			
			if (chance > 15 && chance < 55)
			{
				quest_chest_lock(Hero, Weapon1, Weapon2); //Cундук с замком 8% шанс

				continue;
			}

			if (chance > 15 && chance < 60)
			{
				quest_trader_1(Hero, Weapon1, Weapon2); //торговец шанс 5%

				continue;
			}

			if (chance > 15 && chance < 65)
			{
				quest_riddle(Hero); //Загадка 5% шанс

				continue;
			}
			if (chance > 15 && chance < 70)
			{
				quest_camp(Hero, Weapon1, Weapon2);

				continue;
			}

			if (chance > 15 && chance < 72)
			{
				quest_escape(Hero); //Выход 5% шанс и условие кол-ва очков

				continue;
			}



			if (chance > 15 && chance < 87 + Hero.points / 2)
			{
				chance = Weapon_Armor_chance(Hero);
				quest_enemy(Hero, Weapon1, Weapon2, chance); //Враг 15-25% шанс

				continue;
			}

			cout << "Перед вами абсолютно пустая команата с голыми стенами." << endl; //Пустая комната
			cout << Hero.name << ": Хмм,кажется здесь ничего. " << endl;
			system("pause");
			continue;
		}

		if (choice == "Карманы" || choice == "карманы" || choice == "2")
		{
			ActPockets(Hero, Weapon1, Weapon2); //Показать все показатели героя
			continue;
		}

		if (choice == "Зелье" || choice == "зелье" || choice == "3")
		{
			ActUsePotion(Hero); //Использовать зелье здоровья
			continue;
		}

		if (choice == "Хватит" || choice == "xватит" || choice == "4")
		{
			Hero.Change_HP(-(Hero.Max_HP));
			system("cls");
			cout << "Вы сдались и ушли во тьму..." << endl;;
			cout << "Счёт: " << Hero.score << endl;
			system("pause");
			system("cls");
			cout << "ИГРА ОКОНЧЕНА " << endl;
			system("pause");
			system("cls");
			break;
		}
		if (choice == "5" && rune_time != 0)
		{
			cout << Hero.name << " : Нужно время, руна ещё не накопила энергию." << endl;
			system("pause");
			continue;
		}

		if (choice == "5" && rune_time == 0)
		{
			system("cls");
			cout << "Вы поднимаете руну над головой и мягкий луч света длинной появляется перед вами, пробивая перед собой тьму." << endl;
			cout << "Куда вы хотите направиться ? :" << endl;
			cout << "1)Портал" << endl;
			cout << "2)Торговец" << endl;
			cout << "3)Лагерь" << endl;
			cout << "4)Назад" << endl;
			cout << Hero.name << ": ";
			cin >> choice;
			while(1) 
			{
				if (choice == "1" || choice == "Портал" || choice == "портал")
				{
					rune_time = 10;
					quest_escape(Hero);
					break;
				}
				if (choice == "2" || choice == "Торговец" || choice == "торговец")
				{
					rune_time = 10;
					quest_trader_1(Hero, Weapon1, Weapon2);
					break;
				}
				if (choice == "3" || choice == "Лагерь" || choice == "лагерь")
				{
					rune_time = 10;
					quest_camp(Hero, Weapon1, Weapon2);
					break;
				}
				if (choice == "4" || choice == "Назад" || choice == "назад")
				{
					cout << Hero.name << " : Нет, пожалуй, использую его позже" << endl;
					break;
				}
				cout << Hero.name << ": Надо что-то решить!" << endl;
				system("pause");
			}
			continue;
		}



		cout << Hero.name << ": Надо что-то решить!" << endl; //При неверном вводе
		system("pause"); 


	}

	ScoreF(Hero); //Запись имени и  счёта в файл
	return 0;
}