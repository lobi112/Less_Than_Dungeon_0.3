#include "Header.h"//�����

void quest_escape(MyHero& Hero)
{
	system("cls");
	string choice="0";
	int portal=0;
	while (1) 
	{
		cout << "����� ���� ��������� ������, ����� ����� ������ �����." << endl;
		cout << "1) ������." << endl;
		cout << "2) ���������� � �������." << endl;
		cout << "3) ����." << endl;
		cout << Hero.name << ": ";
		cin >> choice;

		if (choice == "1" || choice == "������" || choice == "������")
		{
			system("cls");
			while (1)
			{
				cout << "�� ������� � �������." << endl;
				cout << "1) �����." << endl;
				cout << "2) ��������." << endl;
				cout << "3) �����." << endl;
				cout << Hero.name << ": ";
				cin >> choice;

				if ((choice == "1" || choice == "������" || choice == "������") && portal == 1)
				{
					Hero.win = 1;
					cout << Hero.name << ": �� ��� ��, ���� �������." << endl;
					_getch();
					cout << "�� ������� � ������ � ����� ������� ���������� �� ����." << endl;
					cout << "����� �� ���� ����� ���������� �������� � �����." << endl << endl;
					system("pause");
					break;
				}
			    if ((choice == "1" || choice == "������" || choice == "������") && portal == 0)
				{
					cout << Hero.name << ": ������ �� ��� ���������, ����� �������� ��������." << endl << endl;
					system("pause");
					system("cls");
					continue;
				}

				if ((choice == "2" || choice == "��������" || choice == "��������") && Hero.charge_cristall == 1 && portal == 0)
				{
					portal++;
					cout << "�� ���������� �������� �� �����." << endl;
					cout << "���������� ����� ����� �������, ������ ��������� ��������� ����, ����� ���� ����������� ������." << endl;
					_getch();
					cout << Hero.name << ": �������, ���������." << endl;
					_getch();
					cout << "����� : ��� �� ��� ��������, � ���� ���������� !" << endl;
					cout << "����� : ������ ��� ������, � ����� �� �����." << endl << endl;
					system("pause");
					system("cls");
					continue;
				}
				else if ((choice == "2" || choice == "��������" || choice == "��������") && portal == 1)
				{
					cout << Hero.name << ": ������ ��� ��������, �� �����, ��� ��� ����� ���-�� ���." << endl << endl;
					system("pause");
					system("cls");
					continue;
				}
				else if ((choice == "2" || choice == "��������" || choice == "��������") && Hero.charge_cristall == 0)
				{
					cout << "�� ���������� �������� �� �����." << endl;
					cout << "���������� �������� �������, ����� ���� �� ������������ � ��������� ���������." << endl;
					_getch();
					cout << Hero.name << ": �������� ������������ ����, ������ �� ������." << endl;
					_getch();
					cout << "����� : � �����, ��� � ���� ���������� ���, ����� ����������." << endl << endl;
					system("pause");
					system("cls");
					continue;
				}
				if (choice == "3" || choice == "�����" || choice == "�����")
				{
					cout << Hero.name << " : �������, ������� ���� �����." << endl;
					_getch();
					system("cls");
					break;
				}
			}
			
			if ((choice == "1" || choice == "������" || choice == "������") && portal == 1)
			{
				break;
			}
			else continue;
		}

		
		if (choice == "2")
		{
			system("cls");
			while (1)
			{
				cout << "�� ������������ � ������." << endl;
				cout << "1) ��� �� �������� �������� ?" << endl;
				cout << "2) ��� ���� ����� ?" << endl;
				cout << "3) ����� ���-������ � ������ ?" << endl;
				cout << "4) �����." << endl;
				cout << Hero.name << ": ";
				cin >> choice;

				if (choice == "1")
				{
					cout << Hero.name << " �� ������ ����� �� ���� ������, ������� ����� ��������." << endl;
					cout << Hero.name << " ��� �� ����� �������� ?" << endl;
					_getch();
					cout << "����� : �� ����, �� ���� ��� � ����� ����, ���� ����� �� �������." << endl;
					_getch();
					system("cls");
					continue;
				}

				if (choice == "2")
				{
					cout << Hero.name << " : ��� ���� ����� ?" << endl;
					_getch();
					cout << "����� : �������." << endl;
					_getch();
					cout << "����� : ���� ������ �� ��������, � ���� ������� ������." << endl;
					_getch();
					system("cls");
					continue;
				}
				if (choice == "3")
				{
					cout << Hero.name << " : ����� ���-������, ���� �������� ������ ?" << endl;
					_getch();
					cout << "����� : �������, � ���� �����, � �� ����." << endl;
					_getch();
					cout << "����� : �� ������������� � ����� �� ������, ���� ���� �� ��������� ���������� ����." << endl;
					_getch();
					cout << "����� : � �����, � �� ����������� ���� ����������." << endl;
					_getch();
					system("cls");
					continue;
				}

				if (choice == "4" || choice == "�����" || choice == "�����")
				{
					cout << Hero.name << " : ��� ����� ����." << endl;
					_getch();
					system("cls");
					break;
				}

				cout << "���� ������ ���-�� �� ���� ������, �������� ������� ���������." << endl;
				_getch();
			}
			continue;
		}

		if (choice == "3" || choice == "����" || choice == "����")
		{
			cout << Hero.name << " : � �����, ������ �� ������." << endl;
			cout << "����� : � ������ � �� ���������." << endl;
			_getch();
			break;
		}
	}
}