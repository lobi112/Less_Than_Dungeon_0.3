#include "Header.h"

void Item_Check(int item, int section)
{
	if (section == 1)
	{
		switch (item)
		{
		case 0: cout << "������" << endl; break;
		case 1: cout << "������" << endl; break;
		case 2: cout << "�������" << endl; break;
		case 3: cout << "�����" << endl; break;
		case 4: cout << "�������� ���" << endl; break;
		case 5: cout << "�������� ���" << endl; break;
		case 6: cout << "�������� ��������� ���" << endl; break;
		case 7: cout << "������������ ���" << endl; break;
		default: cout << "����������� ������������ ���" << endl;
		}
	}

	if (section == 22)
	{
		switch (item)
		{
		case 0: cout << "0" << endl; break;
		case 1: cout << "1" << endl; break;
		case 2: cout << "2" << endl; break;
		case 3: cout << "3" << endl; break;
		case 4: cout << "5" << endl; break;
		case 5: cout << "6" << endl; break;
		case 6: cout << "7" << endl; break;
		case 7: cout << "8" << endl; break;
		default: cout << "10" << endl;
		}
	}

	if (section == 2)
	{
		switch (item)
		{
		case 0: cout << "������" << endl; break;
		case 1: cout << "������� ������" << endl; break;
		case 2: cout << "������� ������" << endl; break;
		case 3: cout << "������� ������" << endl; break;
		case 4: cout << "��������" << endl; break;
		case 5: cout << "������� ������" << endl; break;
		case 6: cout << "������������ ������" << endl; break;
		case 7: cout << "��������� ������" << endl; break;
		default: cout << "������������ �����" << endl;
		}
	}

	if (section == 33)
	{
		switch (item)
		{
		case 0: cout << "1" << endl; break;
		case 1: cout << "2" << endl; break;
		case 2: cout << "4" << endl; break;
		case 3: cout << "6" << endl; break;
		case 4: cout << "8" << endl; break;
		case 5: cout << "9" << endl; break;
		case 6: cout << "10" << endl; break;
		case 7: cout << "12" << endl; break;
		default: cout << "15" << endl;
		}
	}

	if (section == 3)
	{
		switch (item)
		{
		case 0: cout << "��� ����" << endl; break;
		case 1: cout << "���������� ������" << endl; break;
		case 2: cout << "��������� ������" << endl; break;
		case 3: cout << "�������� ������" << endl; break;
		case 4: cout << "���������� ���" << endl; break;
		case 5: cout << "������" << endl; break;
		case 6: cout << "������ ������������� ���" << endl; break;
		case 7: cout << "���������� ���" << endl; break;
		default: cout << "��� �������� ������" << endl;
		}
	}



}