/*Есть:
1. Загадки
2. Сундук
3. Сундук с замком
4. Торговец. (Зелья и отмычки)
5. Создание персонажа
6. Система выпадения комнат
7. Система инвентарь(можно доделать)
8. Таблица лидеров
Доработать:
1. Лор
2. Настроить шансы выпадения комнат
Нету :
1. Система боя
2. Система победы
3. Система очков*/
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <locale>
#include <windows.h>
#include "Header.h"
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
using namespace std;

int main()
{

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_FONT_INFOEX fontInfo;

	fontInfo.cbSize = sizeof(fontInfo);

	GetCurrentConsoleFontEx(hConsole, TRUE, &fontInfo);


	wcscpy(fontInfo.FaceName, L"Lucida Console");

	fontInfo.dwFontSize.Y = 22;
	SetCurrentConsoleFontEx(hConsole, TRUE, &fontInfo);

	SetConsoleCP(1251); //Поддежка русских символов в консоле
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");

	srand(time(NULL)); //Генератор случайных чисел

	int controller_menu = 1; // Для ввода операции в меню
	int score = 0; // Подсчёт очков с каждой игры ??



	while (controller_menu != 0)
	{
		cout << "Меню" << endl; //Главное меню
		cout << "1 - Новая игра" << endl;
		cout << "2 - Таблица лидеров" << endl;
		cout << "3 - Обновления" << endl;
		cout << "0 - Выход из игры" << endl << endl;
		cout << "Ввод :";
		cin >> controller_menu;

		if (controller_menu == 1) //Начало игры
		{
			system("cls");
			Begin();
		}
		if (controller_menu == 2) //Таблица лидеров
		{
			system("cls");
			LeaderboardF();
			system("pause");
			system("cls");
		}
		if (controller_menu == 3) //Список обновлений
		{
			system("cls");
			cout << "Версия 0.2:" << endl;
			cout << "Добавлены отмычки. Их можно найти в сундуках." << endl;
			cout << "Добавлен торговец зельями и отмычками." << endl;
			cout << "Добавлен сундук с замком, открывающийся с помощью отмычек. Лут в нём 100% и лучше, чем в обычном." << endl;
			cout << "Добавлен класс Оружия с характеристиками." << endl;
			cout << "Добавлен класс Врага с характеристиками." << endl;
			cout << "13.11.19" << endl << endl;
			cout << "Версия 0.3:" << endl;
			cout << "Добавлено событие - враг, обработана система боя." << endl;
			cout << "Добавлено событие - лагер." << endl;
			cout << "Добавлено событие - загадка сфинкса." << endl;
			cout << "Добавлен квест - портал, как начальная и конечная локация." << endl;
			cout << "Добавлен основной квест - фонтан энергии." << endl;
			cout << "Добавлены броня и щиты разных уровней, настроено выпадение лута из сундуков." << endl;
			cout << "Обновлена система выпадения лута и комнат." << endl;
			cout << "Добавлен предмет Руна Света и квест для её приобретения." << endl;
			cout << "07.12.19" << endl;
			cout << "" << endl;
			system("pause");
			system("cls");

		}

		if (controller_menu == 0) //Выход из программы
		{
			cout << "Удачи в дороге, путник ! " << endl;
			system("pause");
			return 0;
	
		}

	}
}