#include "Header.h"

void quest_camp(MyHero& Hero, MyWeapon& Weapon1, MyWeapon& Weapon2)
{
	string choice;
	int chance;
	while (1)
	{
		system("cls");
		cout << "Вы обнаружили покинутый лагерь." << endl;
		cout << "Костёр в его центре совсем недавно потух, угли всё ещё испускают редкие искры." << endl;
		cout << Hero.name << ": Кто бы здесь ни был, место для отдыха было выбрано хорошо." << endl;
		cout << "1)Отдохнуть" << endl;
		cout << "2)Уйти" << endl;
		cout << Hero.name << " :";
		cin >> choice;
	
		if (choice == "1" || choice == "Отдохнуть" || choice == "отдохнуть")
		{
			cout << Hero.name << " : Мне действительно нужен отдых." << endl;
			cout << "Вы остановились, чтобы перевести дух и залатать раны." << endl;
			chance = 20 + rand() % 10;
			Hero.Change_HP(chance);
			cout << "Вы восстановили " << chance << " здоровья." << endl;
			_getch();
			chance = rand() % 100;
			if (chance < 25)
			{
				cout << "Кажется, кто-то приближается..." << endl;
				_getch();
				system("cls");
				chance = Weapon_Armor_chance(Hero);
				quest_enemy(Hero, Weapon1, Weapon2, chance);
				if (Hero.HP <= 0)
				{
					cout << Hero.name << " : Нужно убираться отсюда, он мог быть не один." << endl;
					_getch();
					break;
				}
				break;
			}
			else
			{
				continue;
			}

		}
		if (choice == "2" || choice == "Уйти" || choice == "уйти")
		{
			cout << Hero.name << " : У меня нет времени на отдых." << endl << endl;
			system("pause");
			break;
		}

		cout << Hero.name << " : Нужно решить, что делать." << endl;
		_getch();
	}
}