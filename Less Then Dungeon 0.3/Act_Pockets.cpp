#include "Header.h"

void ActPockets(MyHero& Hero, MyWeapon& Weapon1, MyWeapon& Weapon2)
{
	system("cls");
	cout << Hero.name << endl;
	cout << "Класс : " << Hero.class_name << endl;
	cout << "Здоровье : " << Hero.HP << "/" << Hero.Max_HP << endl << endl;

	cout << "Оружие : "; Item_Check(Weapon1.name, 1); //Вывод названия оружия
	cout << "Урон оружием : " << Weapon1.damage << "-" << Weapon1.damage + Weapon1.damage_dif - 1 << endl << endl;
	cout << "Броня : "; Item_Check(Hero.armor_type , 2);
	cout << "Уровень защиты брони: " << Hero.armor << endl << endl;
	cout << "Щит : "; Item_Check(Hero.shield_type, 3);
	cout << "Уровень защиты щита : " << Hero.shield << endl << endl;
	//cout << "Оружие 2: "; Item_Check(Weapon2.name, 1); //Вывод названия оружия
	//cout << "Урон оружием 2 :" << Weapon2.damage << "-" <<Weapon2.damage + Weapon2.damage_dif - 1 << endl;
	cout << "Предметы : " << endl;
	if (Hero.rune_light == 1)
	{
		cout << "Руна света." << endl;
	}
	cout << "Зелья лечения : " << Hero.poition << endl;
	cout << "Отмычки : " << Hero.picklock << endl;
	cout << "Золото : " << Hero.gold << endl;
	cout << "Счёт : " << Hero.score << endl << endl;
	system("pause");
	system("cls");
}

void ShowEnemy(MyEnemy& Enemy)
{
	system("cls");
	cout << Enemy.name << endl;
	cout << "Здоровье : " << Enemy.HP << endl;
	cout << "Урон : " << Enemy.damage << "-" << Enemy.damage + Enemy.damage_dif - 1 << endl;
	cout << "Броня : "; Item_Check(Enemy.armor, 2);
	cout << "Уровень защиты брони: " << Enemy.armor << endl << endl;
	cout << "Щит : "; Item_Check(Enemy.shield, 3);
	cout << "Уровень защиты щита : " << Enemy.shield << endl << endl;
	system("pause");
	system("cls");
}