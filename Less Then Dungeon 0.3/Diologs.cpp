#include "Header.h"

void Battle_Diologs(MyEnemy& Enemy, int _success) {
	int chance = 0;
	if (Enemy.name == "Скелет") {
		chance = rand() % 2;
		switch (chance) {
		case 0: {
			cout << "Вы пытаетесь кинуть " << Enemy.pay_off_cost << " золотых монет в скелета" << endl;
			cout << "Монеты пролетают сквозь него, кажется вы его сильно разозлили	" << endl;
			break;
			}
		case 1: {
			cout << "Скелет: *Злобно стучит костями*" << endl;
			cout << "Кажется что-то пошло не так..." << endl;
			break;
		}
		}
	}
	if (Enemy.name == "Скелет Воин") {
		chance = rand() % 3;
		switch (chance) {
		case 0: {
			cout << "Вы пытаетесь кинуть " << Enemy.pay_off_cost << " золотых монет в скелета" << endl;
			cout << "Монеты пролетают сквозь него, кажется вы его сильно разозлили	" << endl;
			break;
		}
		case 1: {
			cout << "Скелет: *Злобно стучит костями*" << endl;
			cout << "Кажется что-то пошло не так..." << endl;
			break;
		}
		case 2: {
			cout << "Скелет Воин по привычке ударил мечом по монетам" << endl;
			cout << "Теперь он идёт бить мечом по вам" << endl;
			break;
		}
		}
	}
	if (Enemy.name == "Скелет Лучник") {
		chance = rand() % 3;
		switch (chance) {
		case 0: {
			cout << "Вы пытаетесь кинуть " << Enemy.pay_off_cost << " золотых монет в скелета" << endl;
			cout << "Монеты пролетают сквозь него, кажется вы его сильно разозлили	" << endl;
			break;
		}
		case 1: {
			cout << "Скелет: *Злобно стучит костями*" << endl;
			cout << "Кажется что-то пошло не так..." << endl;
			break;
		}
		case 2: {
			cout << "Скелет Лучник стоит слишком далеко, поэтому он даже не понял, что вы пытались его подкупить" << endl;
			cout << "И кажется, что обратно в вас летит не мешок с золотом" << endl;
			break;
		}
		}
	}
	if (Enemy.name == "Гоблин") {
		if (_success == 1) { 
			switch (chance) {
			case 0: {
				cout << "Гоблин увидел золото, пока он радостный собирает монетки, вы спокойно проходите мимо" << endl;
				cout << "Вы откупились" << endl;
				break;
			}
		}
		}
		else { 
			switch (chance) {
			case 0: cout << "Сегодня у Гоблина плохой день. Как же вы вовремя..." << endl;
				break;
			}
		}
	}
	if (Enemy.name == "Гоблин Маг") {
		if (_success == 1) {
			switch (chance) {
			case 0: {
				cout << "Все считают, что Гоблин Маг странный. Сейчас он практикует омоложение кожи за счёт золота" << endl;
				cout << "Может он что-то и знает" << endl;
				cout << "Вы откупились" << endl;
				break;
			}
			}
		}
		else {
			switch (chance) {
			case 0: {
				cout << "Гоблин Маг не хочет взяток. Ведь сегодня он хотел покушать и убивая, попрактиковаться в магии," << endl;
				cout << "Но перед выходом он уже покушал" << endl;
				break;
			}
			}
		}
	}
	if (Enemy.name == "Гоблин Воин") {
		if (_success == 1) {
			switch (chance) {
			case 0: {
				cout << "Гоблин Воин как раз копит на новую броню" << endl;
				cout << "Вы откупились" << endl;
				break;
			}
			}
		}
		else {
			switch (chance) {
			case 0: cout << "Гоблин Воин слишком хочет размяться" << endl;
				break;
			}
		}
	}
	if (Enemy.name == "Троль") {
		if (_success == 1) {
			switch (chance) {
			case 0: {
				cout << "Троль понятие не имеет, что он будет делать с этим золотом" << endl;
				cout << "Но " << Enemy.pay_off_cost << " золотых монет, это - " << Enemy.pay_off_cost << " золотых монет" << endl;
				cout << "Вы откупились" << endl;
				break;
			}
			}
		}
		else {
			switch (chance) {
			case 0: {
				cout << "Это же Троль, что вы хотели?!" << endl;
				break;
			}
			}
		}
	}
	if (Enemy.name == "Неистовый Троль") {
		chance = rand() % 2;
		switch (chance) {
			case 0: {
				cout << "Неистовый Троль: *Злобно рычит*" << endl;
				break;
			}
			case 1: {
				cout << "Неистовый Троль пытается поднять блестящий мягкий металл" << endl;
				cout << "Неистовый Троль пытается использовать монету в качестве оружия, но оно гнётся" << endl;
				cout << "Неистовый Троль недоволен." << endl;
				cout << "Неистовый Троль начал смотреть в вашу сторону" << endl;
				break;
			}
		}
		
	}
	if (Enemy.name == "Орк") {
		if (_success == 1) {
			switch (chance) {
			case 0: {
				cout << "При появлении между вами денег орк исчез также быстро, как появился" << endl;
				cout << "Вы откупились" << endl;
				break;
			}
			}
		}
		else {
			switch (chance) {
			case 0: {
				cout << "Орк пытается поднять блестящий мягкий металл" << endl;
				cout << "Орк пытается использовать монету в качестве оружия, но оно гнётся" << endl;
				cout << "Орк недоволен." << endl;
				cout << "Орк начал смотреть в вашу сторону" << endl;
				break;
			}
			}
		}
	}
	if (Enemy.name == "Циклоп") {
		if (_success == 1) {
			switch (chance) {
			case 0: {
				cout << "Циклоп смотрит на золото" << endl;
				cout << "Циклоп смотрит на вас" << endl;
				cout << "Циклоп решает, что съесть вас экономически не выгодно" << endl;
				cout << "Вы откупились" << endl;
				break;
			}
			}
		}
		else {
			switch (chance) {
			case 0: {
				cout << "Золото оказалось не съедобным. А вы?" << endl;
				break;
			}
			}
		}
	}
	if (Enemy.name == "Циклоп с дубинкой") {
		if (_success == 1) {
			switch (chance) {
			case 0: {
				cout << "Циклоп подумал, что это пшено" << endl;
				cout << "Циклопу понравилось блестящее пшено" << endl;
				cout << "Вы откупились" << endl;
				break;
			}
			}
		}
		else {
			switch (chance) {
			case 0: {
				cout << "Циклоп с дубинкой: *злобно стучит дубинкой*" << endl;
				break;
			}
			}
		}
	}
	if (Enemy.name == "Дракон") {
		if (_success == 1) {
			switch (chance) {
			case 0: {
				cout << "Вы кидаете мешок с золотом Дракону" << endl;
				cout << "Дракону вообще не нужно ваше золото" << endl;
				cout << "Но у него есть дела поважнее" << endl;
				cout << "Вы откупились" << endl;
				break;
			}
			}
		}
		else {
			switch (chance) {
			case 0: {
				cout << "Вы показали Дракону на ваше золото" << endl;
				cout << "Дракон не заинтересован" << endl;
				break;
			}
			}
		}
	}
}