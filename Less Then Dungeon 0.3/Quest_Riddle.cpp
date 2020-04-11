#include "Header.h"

void quest_riddle(MyHero& Hero)
{
	string choice;
	int chance = rand() % 10;
	cout << "�� ������� � �������, ������� ��� �� ����������� �� ����� ������." << endl;
	cout << "� ������ ��� ��������� �������� ������." << endl;
	cout << "������: �� ������� �� ���� �������, ������ ���� ��������� �������� �� ��� �������" << endl;
	while (chance == Hero.riddle_choice_1 || chance == Hero.riddle_choice_2)
	{
		chance = rand() % 10;
	}

		switch (chance) {
		case 0: {
			cout << "������: �������� ����� �����" << endl;
			cout << "	 �� ���� ������� ������ -" << endl;
			cout << "	 ����������, ��������" << endl;
			cout << "	 � ����� �������� ��������." << endl;
			cout << endl << "� ���, ���� �����: ";
			Hero.riddle_choice_2 = Hero.riddle_choice_1;
			Hero.riddle_choice_1 = chance;
			cin >> choice;
			if (choice == "����" || choice == "����") {
				cout << endl << "����� �����������" << endl;
				cout << "������: ����� ������. �� ���� ���..." << endl;
				system("pause");
			}
			else {
				cout << "������: �� ����� �� ��� ����������" << endl;
				Hero.Change_HP(-(Hero.Max_HP));
				system("pause");
			}break;
		}//����
		case 1: {
			cout << "������: Ÿ �� �������, � ����� �� ���������," << endl;
			cout << "	 �� �������� ����, �� ������� �����. " << endl;
			cout << "	 ����� ��� ��������, ������ � ������ ���. " << endl;
			cout << "	 ��� ���� � ������ � ����� ����� ����. " << endl;
			cout << "	 ����� ����� ������� � ������� ����. " << endl;
			cout << endl << "� ���, ���� �����: ";
			Hero.riddle_choice_2 = Hero.riddle_choice_1;
			Hero.riddle_choice_1 = chance;
			cin >> choice;
			if (choice == "����" || choice == "����") {
				cout << endl << "����� �����������." << endl;
				cout << "������: ����� ������. �� ���� ���..." << endl;
				system("pause");
			}
			else {
				cout << "������: �� ����� �� ��� ����������." << endl;
				Hero.Change_HP(-(Hero.Max_HP));
				system("pause");
			}break;
		}//����
		case 2: {
			cout << "������: �������� �� ������: " << endl;
			cout << "	 �����, �����, ��� � ���. " << endl;
			cout << "	 ����� ������, ������ �������, " << endl;
			cout << "	 ������� ������ ���������, " << endl;
			cout << "	 ������ ��� ����� �������, " << endl;
			cout << "	 ���� ������ �������. " << endl;
			cout << endl << "� ���, ���� �����: ";
			Hero.riddle_choice_2 = Hero.riddle_choice_1;
			Hero.riddle_choice_1 = chance;
			cin >> choice;
			if (choice == "�����" || choice == "�����") {
				cout << endl << "����� �����������." << endl;
				cout << "������: ����� ������. �� ���� ���..." << endl;
				system("pause");
			}
			else {
				cout << "������: �� ����� �� ��� ����������." << endl;
				Hero.Change_HP(-(Hero.Max_HP));
				system("pause");
			}break;
		}//�����
		case 3: {
			cout << "������: �� �����, �� ���� ���, " << endl;
			cout << "	 ��� ������, ���� � �������; " << endl;
			cout << "	 �� ����, ���� � ���� �����, " << endl;
			cout << "	 � ��������, ���� � �� ������. " << endl;
			cout << endl << "� ���, ���� �����: ";
			Hero.riddle_choice_2 = Hero.riddle_choice_1;
			Hero.riddle_choice_1 = chance;
			cin >> choice;
			if (choice == "����" || choice == "����") {
				cout << endl << "����� �����������." << endl;
				cout << "������: ����� ������. �� ���� ���..." << endl;
				system("pause");
			}
			else {
				cout << "������: �� ����� �� ��� ����������." << endl;
				Hero.Change_HP(-(Hero.Max_HP));
				system("pause");
			}	break;
		}//����
		case 4: {
			cout << "������: ��� ���� �����, ��� ������. " << endl;
			cout << "	 � �����, � ��������� �����. " << endl;
			cout << "	 �� ��� ���� ���� ���������� " << endl;
			cout << "	 �� ������ ������." << endl;
			cout << endl << "� ���, ���� �����: ";
			Hero.riddle_choice_2 = Hero.riddle_choice_1;
			Hero.riddle_choice_1 = chance;
			cin >> choice;
			if (choice == "�������" || choice == "�������") {
				cout << endl << "����� �����������." << endl;
				cout << "������: ����� ������. �� ���� ���..." << endl;
				system("pause");
			}
			else {
				cout << "������: �� ����� �� ��� ����������." << endl;
				Hero.Change_HP(-(Hero.Max_HP));
				system("pause");
			}break;
		}//�������
		case 5: {
			cout << "������: �� ������� ����� �� �����, " << endl;
			cout << "	 �� ��� ���� ������ �� �������, " << endl;
			cout << "	 �� ������ ����� �������, " << endl;
			cout << "	 ��� ���� �������� � ������." << endl;
			cout << endl << "� ���, ���� �����: ";
			Hero.riddle_choice_2 = Hero.riddle_choice_1;
			Hero.riddle_choice_1 = chance;
			cin >> choice;
			if (choice == "���" || choice == "���") {
				cout << endl << "����� �����������" << endl;
				cout << "������: ����� ������. �� ���� ���..." << endl;
				system("pause");
			}
			else {
				cout << "������: �� ����� �� ��� ����������." << endl;
				Hero.Change_HP(-(Hero.Max_HP));
				system("pause");
			}break;
		}//���
		case 6: {
			cout << "������: ��� ����� ����������, " << endl;
			cout << "	 � ����� ���������? " << endl;
			cout << "	 ����� ����� ���, �� �� ��� ����, " << endl;
			cout << "	 � ����� ��� ����, �� ������ �� � ������." << endl;
			cout << endl << "� ���, ���� �����: ";
			Hero.riddle_choice_2 = Hero.riddle_choice_1;
			Hero.riddle_choice_1 = chance;
			cin >> choice;
			if (choice == "������" || choice == "������") {
				cout << endl << "����� �����������" << endl;
				cout << "������: ����� ������. �� ���� ���..." << endl;
				system("pause");
			}
			else {
				cout << "������: �� ����� �� ��� ����������" << endl;
				Hero.Change_HP(-(Hero.Max_HP));
				system("pause");
			}break;
		}//������
		case 7: {
			cout << "������: ������ �����, ��������� ����, " << endl;
			cout << "	 � ����� ��������� ������ ��������, " << endl;
			cout << "	 � ����� ���� ��������� ������ " << endl;
			cout << "	 �� ����� � �� �����, � ����� � �������." << endl;
			cout << endl << "� ���, ���� �����: ";
			Hero.riddle_choice_2 = Hero.riddle_choice_1;
			Hero.riddle_choice_1 = chance;
			cin >> choice;
			if (choice == "�" || choice == "�") {
				cout << endl << "����� �����������" << endl;
				cout << "������: ����� ������. �� ���� ���..." << endl;
				system("pause");
			}
			else {
				cout << "������: �� ����� �� ��� ����������" << endl;
				Hero.Change_HP(-(Hero.Max_HP));
				system("pause");
			}break;
		}//'�'
		case 8: {
			cout << "������: �������, ����� � ����, " << endl;
			cout << "	 ��� �������� �������� ������������ " << endl;
			cout << "	 ������ ������ �����." << endl;
			cout << "	 ��� �� � ��� ���������?" << endl;
			cout << endl << "� ���, ���� �����: ";
			Hero.riddle_choice_2 = Hero.riddle_choice_1;
			Hero.riddle_choice_1 = chance;
			cin >> choice;
			if (choice == "����" || choice == "����") {
				cout << endl << "����� �����������" << endl;
				cout << "������: ����� ������. �� ���� ���..." << endl;
				system("pause");
			}
			else {
				cout << "������: �� ����� �� ��� ����������" << endl;
				Hero.Change_HP(-(Hero.Max_HP));
				system("pause");
			}break;
		}//����
		case 9: {cout << "������: ����� ���, ��� ����� ����� �� ������ �����," << endl;
			cout << "	 ��� � �� ����, � ������� � �� ���?" << endl;
			cout << "	 ����� �� ���� �������, ������� �� �����," << endl;
			cout << "	 �� ���������� ���, ��� ��." << endl;
			cout << "	 ����� ����� �� �� ������ �����," << endl;
			cout << "	 ����� ������ � ���� ��� � ��������� ��������� ��," << endl;
			cout << "	 ��� � ������ �����." << endl;
			cout << endl << "� ���, ���� �����: ";
			Hero.riddle_choice_2 = Hero.riddle_choice_1;
			Hero.riddle_choice_1 = chance;
			cin >> choice;
			if (choice == "�������" || choice == "�������") {
				cout << endl << "����� �����������" << endl;
				cout << "������: ����� ������. �� ���� ���..." << endl;
				system("pause");
			}
			else {
				cout << "������: �� ����� �� ��� ����������" << endl;
				Hero.Change_HP(-(Hero.Max_HP));
				system("pause");
			}break;
		}//�������
		default:
			break;
		}

	if (Hero.HP > 0)
	{
		Hero.score += 20;
	}
}