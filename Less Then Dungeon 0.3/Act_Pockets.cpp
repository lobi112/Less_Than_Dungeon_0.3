#include "Header.h"

void ActPockets(MyHero& Hero, MyWeapon& Weapon1, MyWeapon& Weapon2)
{
	system("cls");
	cout << Hero.name << endl;
	cout << "����� : " << Hero.class_name << endl;
	cout << "�������� : " << Hero.HP << "/" << Hero.Max_HP << endl << endl;

	cout << "������ : "; Item_Check(Weapon1.name, 1); //����� �������� ������
	cout << "���� ������� : " << Weapon1.damage << "-" << Weapon1.damage + Weapon1.damage_dif - 1 << endl << endl;
	cout << "����� : "; Item_Check(Hero.armor_type , 2);
	cout << "������� ������ �����: " << Hero.armor << endl << endl;
	cout << "��� : "; Item_Check(Hero.shield_type, 3);
	cout << "������� ������ ���� : " << Hero.shield << endl << endl;
	//cout << "������ 2: "; Item_Check(Weapon2.name, 1); //����� �������� ������
	//cout << "���� ������� 2 :" << Weapon2.damage << "-" <<Weapon2.damage + Weapon2.damage_dif - 1 << endl;
	cout << "�������� : " << endl;
	if (Hero.rune_light == 1)
	{
		cout << "���� �����." << endl;
	}
	cout << "����� ������� : " << Hero.poition << endl;
	cout << "������� : " << Hero.picklock << endl;
	cout << "������ : " << Hero.gold << endl;
	cout << "���� : " << Hero.score << endl << endl;
	system("pause");
	system("cls");
}

void ShowEnemy(MyEnemy& Enemy)
{
	system("cls");
	cout << Enemy.name << endl;
	cout << "�������� : " << Enemy.HP << endl;
	cout << "���� : " << Enemy.damage << "-" << Enemy.damage + Enemy.damage_dif - 1 << endl;
	cout << "����� : "; Item_Check(Enemy.armor, 2);
	cout << "������� ������ �����: " << Enemy.armor << endl << endl;
	cout << "��� : "; Item_Check(Enemy.shield, 3);
	cout << "������� ������ ���� : " << Enemy.shield << endl << endl;
	system("pause");
	system("cls");
}