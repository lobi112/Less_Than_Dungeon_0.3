#include "Header.h"

void Item_Check(int item, int section)
{
	if (section == 1)
	{
		switch (item)
		{
		case 0: cout << "Кулаки" << endl; break;
		case 1: cout << "Дубина" << endl; break;
		case 2: cout << "Топорик" << endl; break;
		case 3: cout << "Сабля" << endl; break;
		case 4: cout << "Железный Меч" << endl; break;
		case 5: cout << "Стальной Меч" << endl; break;
		case 6: cout << "Стальной двуручный Меч" << endl; break;
		case 7: cout << "Зачарованный Меч" << endl; break;
		default: cout << "Легендарный зачарованный Меч" << endl;
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
		case 0: cout << "Рубаха" << endl; break;
		case 1: cout << "Кожаная куртка" << endl; break;
		case 2: cout << "Дублёная куртка" << endl; break;
		case 3: cout << "Кожаный доспех" << endl; break;
		case 4: cout << "Кальчуга" << endl; break;
		case 5: cout << "Железый доспех" << endl; break;
		case 6: cout << "Пластинчатый доспех" << endl; break;
		case 7: cout << "Панцерный доспех" << endl; break;
		default: cout << "Зачарованная броня" << endl;
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
		case 0: cout << "Без шита" << endl; break;
		case 1: cout << "Деревянный баклер" << endl; break;
		case 2: cout << "Бронзовый Баклер" << endl; break;
		case 3: cout << "Железный баклер" << endl; break;
		case 4: cout << "Деревянный щит" << endl; break;
		case 5: cout << "Скутум" << endl; break;
		case 6: cout << "Тяжёлый мендалевидный щит" << endl; break;
		case 7: cout << "Магический щит" << endl; break;
		default: cout << "Щит небесной защиты" << endl;
		}
	}



}