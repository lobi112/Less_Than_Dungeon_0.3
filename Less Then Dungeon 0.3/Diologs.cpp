#include "Header.h"

void Battle_Diologs(MyEnemy& Enemy, int _success) {
	int chance = 0;
	if (Enemy.name == "������") {
		chance = rand() % 2;
		switch (chance) {
		case 0: {
			cout << "�� ��������� ������ " << Enemy.pay_off_cost << " ������� ����� � �������" << endl;
			cout << "������ ��������� ������ ����, ������� �� ��� ������ ���������	" << endl;
			break;
			}
		case 1: {
			cout << "������: *������ ������ �������*" << endl;
			cout << "������� ���-�� ����� �� ���..." << endl;
			break;
		}
		}
	}
	if (Enemy.name == "������ ����") {
		chance = rand() % 3;
		switch (chance) {
		case 0: {
			cout << "�� ��������� ������ " << Enemy.pay_off_cost << " ������� ����� � �������" << endl;
			cout << "������ ��������� ������ ����, ������� �� ��� ������ ���������	" << endl;
			break;
		}
		case 1: {
			cout << "������: *������ ������ �������*" << endl;
			cout << "������� ���-�� ����� �� ���..." << endl;
			break;
		}
		case 2: {
			cout << "������ ���� �� �������� ������ ����� �� �������" << endl;
			cout << "������ �� ��� ���� ����� �� ���" << endl;
			break;
		}
		}
	}
	if (Enemy.name == "������ ������") {
		chance = rand() % 3;
		switch (chance) {
		case 0: {
			cout << "�� ��������� ������ " << Enemy.pay_off_cost << " ������� ����� � �������" << endl;
			cout << "������ ��������� ������ ����, ������� �� ��� ������ ���������	" << endl;
			break;
		}
		case 1: {
			cout << "������: *������ ������ �������*" << endl;
			cout << "������� ���-�� ����� �� ���..." << endl;
			break;
		}
		case 2: {
			cout << "������ ������ ����� ������� ������, ������� �� ���� �� �����, ��� �� �������� ��� ���������" << endl;
			cout << "� �������, ��� ������� � ��� ����� �� ����� � �������" << endl;
			break;
		}
		}
	}
	if (Enemy.name == "������") {
		if (_success == 1) { 
			switch (chance) {
			case 0: {
				cout << "������ ������ ������, ���� �� ��������� �������� �������, �� �������� ��������� ����" << endl;
				cout << "�� ����������" << endl;
				break;
			}
		}
		}
		else { 
			switch (chance) {
			case 0: cout << "������� � ������� ������ ����. ��� �� �� �������..." << endl;
				break;
			}
		}
	}
	if (Enemy.name == "������ ���") {
		if (_success == 1) {
			switch (chance) {
			case 0: {
				cout << "��� �������, ��� ������ ��� ��������. ������ �� ���������� ���������� ���� �� ���� ������" << endl;
				cout << "����� �� ���-�� � �����" << endl;
				cout << "�� ����������" << endl;
				break;
			}
			}
		}
		else {
			switch (chance) {
			case 0: {
				cout << "������ ��� �� ����� ������. ���� ������� �� ����� �������� � ������, ���������������� � �����," << endl;
				cout << "�� ����� ������� �� ��� �������" << endl;
				break;
			}
			}
		}
	}
	if (Enemy.name == "������ ����") {
		if (_success == 1) {
			switch (chance) {
			case 0: {
				cout << "������ ���� ��� ��� ����� �� ����� �����" << endl;
				cout << "�� ����������" << endl;
				break;
			}
			}
		}
		else {
			switch (chance) {
			case 0: cout << "������ ���� ������� ����� ���������" << endl;
				break;
			}
		}
	}
	if (Enemy.name == "�����") {
		if (_success == 1) {
			switch (chance) {
			case 0: {
				cout << "����� ������� �� �����, ��� �� ����� ������ � ���� �������" << endl;
				cout << "�� " << Enemy.pay_off_cost << " ������� �����, ��� - " << Enemy.pay_off_cost << " ������� �����" << endl;
				cout << "�� ����������" << endl;
				break;
			}
			}
		}
		else {
			switch (chance) {
			case 0: {
				cout << "��� �� �����, ��� �� ������?!" << endl;
				break;
			}
			}
		}
	}
	if (Enemy.name == "��������� �����") {
		chance = rand() % 2;
		switch (chance) {
			case 0: {
				cout << "��������� �����: *������ �����*" << endl;
				break;
			}
			case 1: {
				cout << "��������� ����� �������� ������� ��������� ������ ������" << endl;
				cout << "��������� ����� �������� ������������ ������ � �������� ������, �� ��� �����" << endl;
				cout << "��������� ����� ���������." << endl;
				cout << "��������� ����� ����� �������� � ���� �������" << endl;
				break;
			}
		}
		
	}
	if (Enemy.name == "���") {
		if (_success == 1) {
			switch (chance) {
			case 0: {
				cout << "��� ��������� ����� ���� ����� ��� ����� ����� ������, ��� ��������" << endl;
				cout << "�� ����������" << endl;
				break;
			}
			}
		}
		else {
			switch (chance) {
			case 0: {
				cout << "��� �������� ������� ��������� ������ ������" << endl;
				cout << "��� �������� ������������ ������ � �������� ������, �� ��� �����" << endl;
				cout << "��� ���������." << endl;
				cout << "��� ����� �������� � ���� �������" << endl;
				break;
			}
			}
		}
	}
	if (Enemy.name == "������") {
		if (_success == 1) {
			switch (chance) {
			case 0: {
				cout << "������ ������� �� ������" << endl;
				cout << "������ ������� �� ���" << endl;
				cout << "������ ������, ��� ������ ��� ������������ �� �������" << endl;
				cout << "�� ����������" << endl;
				break;
			}
			}
		}
		else {
			switch (chance) {
			case 0: {
				cout << "������ ��������� �� ���������. � ��?" << endl;
				break;
			}
			}
		}
	}
	if (Enemy.name == "������ � ��������") {
		if (_success == 1) {
			switch (chance) {
			case 0: {
				cout << "������ �������, ��� ��� �����" << endl;
				cout << "������� ����������� ��������� �����" << endl;
				cout << "�� ����������" << endl;
				break;
			}
			}
		}
		else {
			switch (chance) {
			case 0: {
				cout << "������ � ��������: *������ ������ ��������*" << endl;
				break;
			}
			}
		}
	}
	if (Enemy.name == "������") {
		if (_success == 1) {
			switch (chance) {
			case 0: {
				cout << "�� ������� ����� � ������� �������" << endl;
				cout << "������� ������ �� ����� ���� ������" << endl;
				cout << "�� � ���� ���� ���� ��������" << endl;
				cout << "�� ����������" << endl;
				break;
			}
			}
		}
		else {
			switch (chance) {
			case 0: {
				cout << "�� �������� ������� �� ���� ������" << endl;
				cout << "������ �� �������������" << endl;
				break;
			}
			}
		}
	}
}