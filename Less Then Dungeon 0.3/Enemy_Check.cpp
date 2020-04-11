#include "Header.h"

void EnemyCheck(int enemy)
{
	switch (enemy)
	{
	case 0: cout << "Скелет" << endl; break;
	case 1: cout << "Скелет Воин" << endl; break;
	case 2: cout << "Скелет лучник" << endl; break;
	case 3: cout << "Гоблин" << endl; break;
	case 4: cout << "Тролль" << endl; break;
	case 5: cout << "Орк" << endl; break;
	case 6: cout << "Орк Воин" << endl; break;
	case 7: cout << "Циклоп" << endl; break;
	case 8: cout << "Дракон" << endl; break;
	}

}