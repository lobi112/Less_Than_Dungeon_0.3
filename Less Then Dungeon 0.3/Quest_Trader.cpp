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
		cout << "На пути вам попадается гном-торговец, его зовут "; DwarfName(chance); cout << "." << endl;
		DwarfName(chance); cout << ": Приветствую тебя, путник. Не хочешь взглянуть на мои товары ?" << endl;
		cout << "1)Купить" << endl;
		cout << "2)Продать" << endl;
		cout << "3)Карманы" << endl;
		cout << "4)Уйти" << endl;
		cout << Hero.name << ": "; cin >> choice;
		if (choice == "1" || choice == "Купить" || choice == "купить")
		{
			system("cls");
			DwarfName(chance); cout << ": Что ты хочешь купить ?" << endl;
			cout << "1)Зелье -" << cost1 << " Золота" << endl;
			cout << "2)Отмычка -" << cost2 << " Золота" << endl;
			cout << "3)Назад" << endl;
			cout << Hero.name << ": "; cin >> choice;
			if ((choice == "1" || choice == "Зелье" || choice == "зелье") && Hero.gold >= cost1)
			{
				Hero.gold -= cost1;
				Hero.poition++;
				cout << "Вы приобрели Лечебное Зелье." << endl;
				system("pause");
				continue;
			}
			if ((choice == "1" || choice == "Зелье" || choice == "зелье") && Hero.gold < cost1)
			{
				DwarfName(chance); cout << ": У тебя нет на это денег." << endl;
				system("pause");
				continue;
			}

			if ((choice == "2" || choice == "Отмычка" || choice == "отмычка") && Hero.gold >= cost2)
			{
				Hero.gold -= cost2;
				Hero.picklock++;
				cout << "Вы приобрели Отмычку" << endl;
				system("pause");
				continue;
			}

			if ((choice == "2" || choice == "Отмычка" || choice == "отмычка") && Hero.gold < cost2)
			{
				DwarfName(chance); cout << ": У тебя нет на это денег." << endl;
				system("pause");
				continue;
			}

			if (choice == "3" || choice == "Назад" || choice == "назад")
			{
				DwarfName(chance); cout << ": Может что-то ещё ?" << endl;
				system("pause");
				continue;
			}

		}

		if (choice == "2" || choice == "Продать" || choice == "продать")
		{
			system("cls");
			DwarfName(chance); cout << ": Что ты хочешь Продать ?" << endl;
			cout << "1)Зелье +" << cost1 - sell << " Золота" << endl;
			cout << "2)Отмычка +" << cost2 - sell << " Золота" << endl;
			cout << "3)Назад" << endl;
			cout << Hero.name << ": "; cin >> choice;
			if ((choice == "1" || choice == "Зелье" || choice == "зелье") && Hero.poition > 0)
			{
				Hero.gold += (cost1 - sell);
				Hero.poition--;
				cout << "Вы продали Лечебное Зелье." << endl;
				system("pause");
				continue;
			}

			if ((choice == "1" || choice == "Зелье" || choice == "зелье") && Hero.poition == 0)
			{
				DwarfName(chance); cout << ": У тебя нет Зелий Лечения ." << endl;
				system("pause");
				continue;
			}

			if ((choice == "2" || choice == "Отмычка" || choice == "отмычка") && Hero.picklock > 0)
			{
				Hero.gold += (cost2 - sell);
				Hero.picklock--;
				cout << "Вы продали Отмычку." << endl;
				system("pause");
				continue;
			}

			if ((choice == "2" || choice == "Отмычка" || choice == "отмычка") && Hero.picklock == 0)
			{
				DwarfName(chance); cout << ": У тебя нет Отмычек." << endl;
				system("pause");
				continue;
			}

			if (choice == "3" || choice == "Назад" || choice == "назад")
			{
				DwarfName(chance); cout << ": Может что-то ещё ?" << endl;
				system("pause");
				continue;
			}

		}

		if (choice == "3" || choice == "Карманы" || choice == "карманы")
		{
			ActPockets(Hero, Weapon1, Weapon2);
			continue;
		}



		if (choice == "4" || choice == "Уйти" || choice == "уйти")
		{
			DwarfName(chance); cout << ": Удачи тебе, путник !" << endl;
			system("pause");
			break;
		}


		DwarfName(chance); cout << ": Можешь повторить ? Я не разобрал. " << endl;
		system("pause");
		system("cls");
		continue;
	}

}