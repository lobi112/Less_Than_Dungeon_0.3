#include "Header.h"

void quest_rune_light(MyHero& Hero, MyWeapon& Weapon1, MyWeapon& Weapon2)
{
	string choice;
while (1)
{
	system("cls");
	cout << "На своём пути вы встречаете Тёмного Эльфа." << endl;
	cout << "Эльф : Эй, путник, не устал блуждать во тьме ?" << endl;
	cout << "Эльф : Если хочешь, можешь преобрести у меня Руну Света, если рассчитываешься выбраться отсюда живым, Ха-ха-ха." << endl << endl;
	cout << "1)Купить (150)" << endl;
	cout << "2)У меня нет столько денег." << endl;
	cout << "3)Карманы." << endl;
	cout << "4)Уйти." << endl;
	cout << Hero.name << " :";
	cin >> choice;

		if ((choice == "1" || choice == "Купить" || choice == "купить") && Hero.gold >= 80)
		{
			Hero.gold -= 80;
			Hero.rune_light++;
			cout << "Ваш собеседник достаёт из сумы камень, размером с небольшую ладонь." << endl;
			cout << "Даже в тусклом освещении подземелья, камень кажется ослепительно белым." << endl;
			_getch();
			cout << "Эльф : С тобой приятно было иметь дело, прощай !" << endl;
			cout << "Эльф забирает деньги и бесшумно исчезает во тьме." << endl;
			_getch();
			cout << "Вы внимательно осматриваете камень." << endl;
			cout << Hero.name << " : Это поможет мне найти путь назад, если я зайду слишком далеко." << endl;
			_getch();
			break;

		}
		if (Hero.gold == 0  && (choice == "1" || choice == "Купить" || choice == "купить"))
		{
			cout << "Эльф : Ха-ха, очень смешно, приходи, когда карманы будут не пусты." << endl;
		    _getch();
			continue;
		}
		if ((choice == "1" || choice == "Купить" || choice == "купить") && Hero.gold > 0 && Hero.gold < 150)
		{
			cout << "Эльф : Этого слишком мало, сделка не состоится." << endl;
			_getch();
			continue;
		}


		if (choice == "2" )
		{
			
			while (1)
			{
			 system("cls");
			 cout << Hero.name << " : У меня нет столько денег, может обменяемся на что-то ?" << endl;
			 cout << "Эльф : Вообще-то, мне бы пригодилось новое оружие... " << endl;
			 cout << "Эльф : Может мы сможем обменяться, только, разумеется, на что-то стоящее, согласен ?" << endl << endl;
			 cout << "1)Да (Отдать оружие в качестве обмена)" << endl;
			 cout << "2)Нет." << endl;
			 cout << "3)Карманы." << endl;
			 cout << Hero.name << " :";
			 cin >> choice;
			
				if ((choice == "1" || choice == "Да" || choice == "да") && Weapon1.name>=4)
				{
					Weapon1.Weapon_change(0);
					Hero.rune_light++;
					cout << "Эльф : По рукам !" << endl;
					_getch();
					cout << "Ваш собеседник достаёт из сумы камень, размером с небольшую ладонь." << endl;
					cout << "Даже в тусклом освещении подземелья, камень кажется ослепительно белым." << endl;
					_getch();
					cout << "Эльф : С тобой приятно было иметь дело, прощай !" << endl;
					cout << "Эльф бесшумно исчезает во тьме." << endl;
					_getch();
					cout << "Вы внимательно осматриваете камень." << endl;
					cout << Hero.name << " : Это поможет мне найти путь назад, если я зайду слишком далеко." << endl;
					_getch();
					break;
				}
				else if ((choice == "1" || choice == "Да" || choice == "да") && Weapon1.name < 4)
				{
					cout << "Эльф : Нет, на это я не согласен, это ничем не лучше моего барахла." << endl;
					_getch();
					continue;
				}
				if (choice == "2" || choice == "Нет" || choice == "нет")
				{
					cout << "Эльф : Ну, как знаешь." << endl;
					_getch();
					break;
				}
				if (choice == "3" || choice == "Карманы" || choice == "карманы")
				{
					ActPockets(Hero, Weapon1, Weapon2);
					continue;
				}

				cout << "Эльф : Охх, давай уже по делу, я теряю терпение." << endl;
				system("pause");
			}
			if (Hero.rune_light == 0) continue;
			else break;

		}
		if (choice == "3" || choice == "Карманы" || choice == "карманы")
		{
			ActPockets(Hero, Weapon1, Weapon2);
			continue;
		}
		if ((choice == "4" || choice == "Уйти" || choice == "уйти"))
		{
			cout<< Hero.name << " : Прощай." << endl;
			system("pause");
			break;
		}

		cout << "Не трать моё время впустую." << endl;
		_getch();

	}
}