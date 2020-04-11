#pragma once
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <locale>
#include <windows.h>
#pragma warning(disable : 4996)
using namespace std;

class MyHero
{
public:
	string name; //��� �����
	string class_name; //����� �����

	int Max_HP; //������������ ��������
	int HP; //������� ��������

	int gold; //���-�� �������
	int poition; //���-�� ����� �������	
	int picklock; //���-�� �������
	int chest_unlock; //���� �������� �������

	int armor_type; //��� ����� 
	int armor_cost; //���� ������
	int armor; //������ �����
	int shield_type; //��� ����
	int shield_cost; //���� ������
	int shield; //������ ��� �����
	int block; //������� ���� ���������
	int Dodge; //������� ���� �����
	int damage_plus; //���������� ���� (������� �� ������)
	int riddle_choice_1 = 16, riddle_choice_2 = 16;

	int score; //������� ����

	int points; //���� ���������(�� ��� ������� �������, ��� � ���� ��������� ����������� ������)

	//������ ���������� ��� ��������� ���������
	bool charge_cristall; //����������(1)/������������(0) ���������
	bool rune_air; //������ ���� �� ��������� :)
	bool rune_fire;
	bool rune_light;
	bool rune_water;
	bool rune_earth;
	bool rune_life;

	bool win;

	bool flag;



	MyHero(string p_name)
	{
		name = p_name;

		armor = 0;
		shield = 0;

		points = 0;
		score = 0;

		charge_cristall = 0;
		rune_air = 0;
		rune_fire = 0;
		rune_light = 0;
		rune_water = 0;
		rune_earth = 0;
		rune_life = 0;
		win = 0;
		flag = 0;
	}
	void Class_choice(int choice)
	{
		switch (choice)
		{
		case 1:
		{
			class_name = "��������";
			HP = 25;
			Max_HP = 100;
			chest_unlock = 30;
			gold = 0;
			poition = 0;
			picklock = 0;
			Dodge = 30;
			block = 60;
			damage_plus = 0;
			break;

		}
		case 2:
		{
			class_name = "����"; //���������: 
			HP = 40;
			Max_HP = 120;
			chest_unlock = 20;
			gold = 0;
			poition = 0;
			picklock = 0;
			Dodge = 20;
			block = 60;
			damage_plus = 2;
			break;
		}
		case 3:
		{
			class_name = "�������"; //���������: �� ���� �� ������� ����������
			HP = 60;
			Max_HP = 150;
			chest_unlock = 10;
			gold = 0;
			poition = 0;
			picklock = 0;
			Dodge = 5;
			block = 20;
			damage_plus = 4;
			break;
		}
		case 4:
		{
			class_name = "���"; //���������: 
			HP = 20;
			Max_HP = 80;
			chest_unlock = 50;
			gold = 10;
			poition = 0;
			picklock = 5;
			Dodge = 40;
			block = 50;
			damage_plus = 0;
			break;
		}
		case 5:
		{
			class_name = "��������"; // ���������: �� ������� �� 5 ������ ������ ��� ������ �� �����
			HP = 25;
			Max_HP = 100;
			chest_unlock = 15;
			gold = 100;
			poition = 5;
			picklock = 0;
			Dodge = 20;
			block = 40;
			damage_plus = 0;
			break;
		}
		case 6:
		{
			class_name = "�����"; //���������: � ��� ��� ���������, ��� � ��� ����� ���������
			HP = 20;
			Max_HP = 70;
			chest_unlock = 20;
			gold = 0;
			poition = 0;
			picklock = 0;
			Dodge = 25;
			block = 40;
			damage_plus = 0;
			break;
		}

		}

	}
	void Hurt(int p_damage)
	{
		if (p_damage < 0)
		{
			p_damage = 0;
		}
		HP -= p_damage;
		cout << "���������� ���� : " << p_damage << endl;
	}
	void Change_HP(int change)
	{
		HP += change;
		if (HP > Max_HP)
		{
			HP = Max_HP;
		}
	}
	void Max_HP_Increase(int change)
	{
		Max_HP += change;
	}

	void Armor_change(int choice)
	{
		armor_type = choice;
		switch (choice)
		{
		case 0: armor = 0; armor_cost = 0;  break;
		case 1: armor = 1; armor_cost = 15;  break;
		case 2: armor = 2; armor_cost = 30;  break;
		case 3: armor = 3; armor_cost = 45;  break;
		case 4: armor = 5; armor_cost = 60;  break;
		case 5: armor = 6; armor_cost = 80;  break;
		case 6: armor = 7; armor_cost = 100;  break;
		case 7: armor = 8; armor_cost = 120;  break;
		case 8: armor = 10; armor_cost = 150;  break;
		}
	}
	void Shield_change(int choice)
	{
		shield_type = choice;
		switch (choice)
		{
		case 0: shield = 1; shield_cost = 0; break;
		case 1: shield = 2; shield_cost = 15; break;
		case 2: shield = 4; shield_cost = 30; break;
		case 3: shield = 6; shield_cost = 45; break;
		case 4: shield = 8; shield_cost = 60; break;
		case 5: shield = 9; shield_cost = 80; break;
		case 6: shield = 10; shield_cost = 100; break;
		case 7: shield = 12; shield_cost = 120; break;
		case 8: shield = 15; shield_cost = 150; break;
		}
	}
};

class MyEnemy
{
public:
	string name; //�� ���� ��������
	int Enemy_type; //
	string Sub_Enemy_Type;
	int Sub_Enemy_Type_chance;
	int HP; //������� ��������(������� �������� ��� ������������)
	int damage; // ������� ����
	int damage_dif; //������� �����
	int loot;//������� �����

	int Dodge; //���� ��������
	int block; //���� �����
	int speed; // ������� ��������� � ���� ��� �����

	int shield;
	int armor;

	int success;
	int score; // +score ��� ������
	int points; // +points ��� ������
	int count;
	int tactic; // �� ���� �����, �� ����� �� ������ ������

	int pay_off; //���� ������
	int pay_off_cost; //���� ������

	void Hurt(int p_damage)
	{
		if (p_damage < 0)
		{
			p_damage = 0;
		}
		HP -= p_damage;
		cout << "��������� ���� : " << p_damage <<  endl;
	}

	void CreateEnemy(int p_Enemy_type) {
		Enemy_type = p_Enemy_type;
		if (Enemy_type == 1) {
			Sub_Enemy_Type_chance = rand() % 100;
			if (Sub_Enemy_Type_chance < 50) {
				Sub_Enemy_Type = "������";
				name = "������";
				HP = 8 + rand() % 7;
				damage = 1 + rand() % 3;
				damage_dif = 3;
				shield = 1;
				armor = 0;
				pay_off = 0;
				pay_off_cost = 3 + rand() % 5;
				Dodge = 10;
				block = 0;
				score = 3;
				points = 1;
			}
			else if (Sub_Enemy_Type_chance < 75) {
				Sub_Enemy_Type = "������ ����";
				name = "������ ����";
				HP = 15 + rand() % 8;
				damage = 2 + rand() % 3;
				damage_dif = 3;
				shield = 3;
				armor = 1;
				pay_off = 0;
				pay_off_cost = 5 + rand() % 4;
				Dodge = 10;
				block = 30;
				score = 5;
				points = 1;
			}
			else if (Sub_Enemy_Type_chance < 100) {
				Sub_Enemy_Type = "������ ������";
				name = "������ ������";
				HP = 10 + rand() % 5;
				damage = 3 + rand() % 3;
				damage_dif = 2;
				shield = 1;
				armor = 1;
				pay_off = 0;
				pay_off_cost = 5 + rand() % 4;
				Dodge = 20;
				block = 0;
				score = 7;
				points = 1;
			}
		}
		if (Enemy_type == 2) {
			Sub_Enemy_Type_chance = rand() % 100;
			if (Sub_Enemy_Type_chance < 50) {
				Sub_Enemy_Type = "������";
				name = "������";
				HP = 15 + rand() % 8;
				damage = 1 + rand() % 5;
				damage_dif = 4;
				shield = 1;
				armor = 0;
				pay_off = 80;
				pay_off_cost = 5 + rand() % 4;
				Dodge = 30;
				block = 30;
				score = 10;
				points = 1;
			}
			else if (Sub_Enemy_Type_chance < 75) {
				Sub_Enemy_Type = "������ ���";
				name = "������ ���";
				HP = 18 + rand() % 5;
				damage = 7 + rand() % 5;
				damage_dif = 3;
				shield = 1;
				armor = 1;
				pay_off = 60;
				pay_off_cost = 6 + rand() % 5;
				Dodge = 20;
				block = 30;
				score = 12;
				points = 1;
			}
			else if (Sub_Enemy_Type_chance < 100) {
				Sub_Enemy_Type = "������ ����";
				name = "������ ����";
				HP = 24 + rand() % 6;
				damage = 4 + rand() % 5;
				damage_dif = 2;
				shield = 3+2*rand()%2;
				armor = 1+rand()%3;
				pay_off = 60;
				pay_off_cost = 5 + rand() % 5;
				Dodge = 35;
				block = 20;
				score = 15;
				points = 1;
			}

		}
		if (Enemy_type == 3) {
			Sub_Enemy_Type = "���";
			name = "���";
			HP = 40 + rand() % 20;
			damage = 4 + rand() % 5;
			damage_dif = 4;
			shield = 3 + 2 * rand() % 3;
			armor = 2 + rand() % 3;
			pay_off = 60;
			pay_off_cost = 6 + rand() % 4;
			Dodge = 15;
			block = 50;
			score = 20;
			points = 1;
		}
		if (Enemy_type == 4) {
			Sub_Enemy_Type_chance = rand() % 100;
			if (Sub_Enemy_Type_chance < 80) {
				Sub_Enemy_Type = "������";
				name = "������";
				HP = 100 + rand() % 20;
				damage = 15 + rand() % 5;
				damage_dif = 8;
				shield = 3;
				armor = 2;
				pay_off = 50;
				pay_off_cost = 5 + rand() % 4;
				Dodge = 0;
				block = 20;
				score = 40;
				points = 2;
			}
			else if (Sub_Enemy_Type_chance < 100) {
				Sub_Enemy_Type = "��������� ������";
				name = "��������� ������";
				HP = 80 + rand() % 20;
				damage = 30 + rand() % 5;
				damage_dif = 10;
				shield = 3;
				armor = 3;
				pay_off = 20;
				pay_off_cost = 6 + rand() % 5;
				Dodge = 0;
				block = 20;
				score = 50;
				points = 2;
			}
		}
		if (Enemy_type == 5) {
			Sub_Enemy_Type = "������";
			name = "������";
			Sub_Enemy_Type_chance = rand() % 100;
			if (Sub_Enemy_Type_chance < 75) {
				HP = 100 + rand() % 20;
				damage = 14 + rand() % 7;
				damage_dif = 4;
				shield = 3 + 2 * rand() % 2;
				armor = 0 + rand() % 3;
				pay_off = 40;
				pay_off_cost = 7 + rand() % 4;
				Dodge = 20;
				block = 40;
				score = 45;
				points = 2;
			}
			else if (Sub_Enemy_Type_chance < 100) {
				Sub_Enemy_Type = "������ � ��������";
				name = "������ � ��������";
				HP = 100 + rand() % 20;
				damage = 20 + rand() % 6;
				damage_dif = 2;
				shield = 3 + 2 * rand() % 2;
				armor = 0 + rand() % 3;
				pay_off = 40;
				pay_off_cost = 8 + rand() % 5;
				Dodge = 20;
				block = 40;
				score = 55;
				points = 2;
			}
		}
		if (Enemy_type == 6) {
			Sub_Enemy_Type = "������";
			name = "������";
			HP = 200 + rand() % 60;
			damage = 20 + rand() % 10;
			damage_dif = 10;
			shield = 5 + 2 * rand() % 3;
			armor = 4;
			pay_off = 90;
			pay_off_cost = 40 + rand() % 30;
			Dodge = 30;
			block = 40;
			score = 100;
			points = 4;
		}
		if (Enemy_type == 7) {
			Sub_Enemy_Type = "�������� �����"; //��������� !
			name = "�������� �����";
			HP = 90 + rand() % 20;
			damage = 8 + rand() % 5;
			damage_dif = 5;
			shield = 5 + 2 * rand() % 3;
			armor = 3;
			pay_off = 90;
			pay_off_cost = 40 + rand() % 30;
			Dodge = 0;
			block = 60;
			score = 30;
			points = 1;
		}

		if (Enemy_type == 8) {
			Sub_Enemy_Type = "�������";
			Dodge = 50;
			score = 1;
		}
	}//�������
};

class MyWeapon
{

public:
	int name; //��� ������
	int damage; //���� �������
	int damage_plus; //���������� ����(�� Hero)
	int damage_dif; //������� �����
	int cost; //���� ������
	MyWeapon(int p_damage_plus)
	{
		damage_plus = p_damage_plus;
	}

	void Weapon_change(int choice)
	{
		name = choice;
		switch (choice)
		{
		case 0: damage = 1; damage_dif = 4; cost = 0; break;
		case 1: damage = 3; damage_dif = 4; cost = 15; break;
		case 2: damage = 6; damage_dif = 4; cost = 30; break;
		case 3: damage = 9; damage_dif = 4; cost = 45; break;
		case 4: damage = 11; damage_dif = 4; cost = 60; break;
		case 5: damage = 13; damage_dif = 6; cost = 80; break;
		case 6: damage = 16; damage_dif = 6; cost = 100; break;
		case 7: damage = 18; damage_dif = 7; cost = 120; break;
		case 8: damage = 22; damage_dif = 7; cost = 150; break;
		}
		damage += damage_plus;

	}

	~MyWeapon()
	{

	}
};

struct Leaderboard {
	string name;
	int score;
};

int Begin();

void Item_Check(int item, int section);
void DwarfName(int enemy);

void ActPockets(MyHero& Hero, MyWeapon& Weapon1, MyWeapon& Weapon2);
void ShowEnemy(MyEnemy& Enemy);
void ActUsePotion(MyHero& Hero);
void Tacktics(MyEnemy& Enemy, MyHero& Hero, MyWeapon& Weapon1, MyWeapon& Weapon2);
int Weapon_Armor_chance(MyHero& Hero);

void quest_enemy(MyHero& Hero, MyWeapon& Weapon1, MyWeapon& Weapon2, int Enemy_type);
void quest_chest(MyHero& Hero, MyWeapon& Weapon1, MyWeapon& Weapon2);
void quest_trader_1(MyHero& Hero, MyWeapon& Weapon1, MyWeapon& Weapon2);
void quest_camp(MyHero& Hero, MyWeapon& Weapon1, MyWeapon& Weapon2);
void quest_chest_lock(MyHero& Hero, MyWeapon& Weapon1, MyWeapon& Weapon2);
void quest_riddle(MyHero& Hero);
void quest_escape(MyHero& Hero);
void quest_rune_light(MyHero& Hero, MyWeapon& Weapon1, MyWeapon& Weapon2);
void quest_fountain(MyHero& Hero, MyWeapon& Weapon1, MyWeapon& Weapon2);
void Battle_Diologs(MyEnemy& Enemy, int _success);
void RiddleQ(int chance);

void ScoreF(MyHero& Hero);
void LeaderboardF();


void Hero_Protection(MyEnemy& Enemy, MyHero& Hero, MyWeapon& Weapon1, MyWeapon& Weapon2, double mod);
void Hero_Attack(MyEnemy& Enemy, MyHero& Hero, MyWeapon& Weapon1, MyWeapon& Weapon2, double mod);
void Battle_Info(MyEnemy& Enemy, MyHero& Hero, MyWeapon& Weapon1, MyWeapon& Weapon2);