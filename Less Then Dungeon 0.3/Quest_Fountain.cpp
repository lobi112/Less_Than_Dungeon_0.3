#include "Header.h"

void quest_fountain(MyHero& Hero, MyWeapon& Weapon1, MyWeapon& Weapon2)
{
	string choice;
	while (1) 
	{
		system("cls");
		cout << "Вы входите в хорошо освещённую круглую пещеру, в центре которой располагается фонтан. " << endl;
		cout << "Каменная основа фонтана усеяна довольно знакомыми рунами." << endl;
		cout << "Вода в фонтане прозрачная и испускает приятный голубой свет." << endl;
		cout << "Перед фонтаном расположен каменный пьедестал с небольшим углублением." << endl;
		_getch();
		cout << Hero.name << " : Источник магии! Может с его помощью я смогу зарядить кристалл." << endl;
		cout << Hero.name << " : Правда лучше здесь не задерживаться, у меня плохое предчувствие." << endl;
		cout << "1)Кристалл (Положить на пьедестал)" << endl;
		cout << "2)Уйти." << endl;
		cout << Hero.name << " : ";
		cin >> choice;
		if (choice == "1" || choice == "Кристалл " || choice == "кристалл")
		{
			cout << Hero.name << " : Ладно, попробуем." << endl << endl;
			_getch();
			system("cls");
			cout << "Вы кладёте кристалл в каменное углубление." << endl;
			cout << "Руны на фонтане начинают светиться, неподалёку от него в воздух поднимаются мелкие камни." << endl;
			cout << "Вы слышати скрежет позади себя." << endl;
			cout << Hero.name << " : Похоже, что-то приближается." << endl << endl;
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
			cout << Hero.name << " : Фух, этот, кажется, последий, да и кристалл, кажется, уже готов." << endl;
			cout << Hero.name << " : Пора убираться отсюда." << endl;
			_getch();
			system("cls");
			break;
		}
		if (choice == "2" || choice == "Уйти" || choice == "уйти")
		{
			cout << Hero.name << " : Нужно уходить, кажется, здесь небезопасно" << endl << endl;;
			system("pause");
			break;
		}
		
	}
}