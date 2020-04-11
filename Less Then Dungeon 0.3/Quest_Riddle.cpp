#include "Header.h"

void quest_riddle(MyHero& Hero)
{
	string choice;
	int chance = rand() % 10;
	cout << "Вы входите в комнату, которая тут же закрывается за вашей спиной." << endl;
	cout << "В центре вас встречает каменный сфинкс." << endl;
	cout << "Сфинкс: Ты выйдешь из этой комнаты, только если правильно ответишь на мою загадку" << endl;
	while (chance == Hero.riddle_choice_1 || chance == Hero.riddle_choice_2)
	{
		chance = rand() % 10;
	}

		switch (chance) {
		case 0: {
			cout << "Сфинкс: Тридцать белых коней" << endl;
			cout << "	 На двух красных холмах -" << endl;
			cout << "	 Разбегутся, сшибутся" << endl;
			cout << "	 И снова затихнут впотьмах." << endl;
			cout << endl << "И так, твой ответ: ";
			Hero.riddle_choice_2 = Hero.riddle_choice_1;
			Hero.riddle_choice_1 = chance;
			cin >> choice;
			if (choice == "Зубы" || choice == "зубы") {
				cout << endl << "Двери открываются" << endl;
				cout << "Сфинкс: Ответ верный. На этот раз..." << endl;
				system("pause");
			}
			else {
				cout << "Сфинкс: Ты умрёшь за своё невежество" << endl;
				Hero.Change_HP(-(Hero.Max_HP));
				system("pause");
			}break;
		}//Зубы
		case 1: {
			cout << "Сфинкс: Её не увидать, в руках не подержать," << endl;
			cout << "	 Не услышать ухом, не почуять нюхом. " << endl;
			cout << "	 Царит над небесами, таится в каждой яме. " << endl;
			cout << "	 Она была в начале и будет после всех. " << endl;
			cout << "	 Любую жизнь кончает и убивает смех. " << endl;
			cout << endl << "И так, твой ответ: ";
			Hero.riddle_choice_2 = Hero.riddle_choice_1;
			Hero.riddle_choice_1 = chance;
			cin >> choice;
			if (choice == "Тьма" || choice == "тьма") {
				cout << endl << "Двери открываются." << endl;
				cout << "Сфинкс: Ответ верный. На этот раз..." << endl;
				system("pause");
			}
			else {
				cout << "Сфинкс: Ты умрёшь за своё невежество." << endl;
				Hero.Change_HP(-(Hero.Max_HP));
				system("pause");
			}break;
		}//Тьма
		case 2: {
			cout << "Сфинкс: Пожирает всё кругом: " << endl;
			cout << "	 Зверя, птицу, лес и дом. " << endl;
			cout << "	 Сталь сгрызёт, железо сгложет, " << endl;
			cout << "	 Крепкий камень уничтожит, " << endl;
			cout << "	 Власть его всего сильней, " << endl;
			cout << "	 Даже власти королей. " << endl;
			cout << endl << "И так, твой ответ: ";
			Hero.riddle_choice_2 = Hero.riddle_choice_1;
			Hero.riddle_choice_1 = chance;
			cin >> choice;
			if (choice == "Время" || choice == "время") {
				cout << endl << "Двери открываются." << endl;
				cout << "Сфинкс: Ответ верный. На этот раз..." << endl;
				system("pause");
			}
			else {
				cout << "Сфинкс: Ты умрёшь за своё невежество." << endl;
				Hero.Change_HP(-(Hero.Max_HP));
				system("pause");
			}break;
		}//Время
		case 3: {
			cout << "Сфинкс: Не дышит, но живёт она, " << endl;
			cout << "	 Как смерть, нема и холодна; " << endl;
			cout << "	 Не пьёт, хотя в воде сидит, " << endl;
			cout << "	 В кольчуге, хоть и не звенит. " << endl;
			cout << endl << "И так, твой ответ: ";
			Hero.riddle_choice_2 = Hero.riddle_choice_1;
			Hero.riddle_choice_1 = chance;
			cin >> choice;
			if (choice == "Рыба" || choice == "рыба") {
				cout << endl << "Двери открываются." << endl;
				cout << "Сфинкс: Ответ верный. На этот раз..." << endl;
				system("pause");
			}
			else {
				cout << "Сфинкс: Ты умрёшь за своё невежество." << endl;
				Hero.Change_HP(-(Hero.Max_HP));
				system("pause");
			}	break;
		}//Рыба
		case 4: {
			cout << "Сфинкс: Оно было вчера, иль прежде. " << endl;
			cout << "	 А может, в древности самой. " << endl;
			cout << "	 Но без него день завтрашний " << endl;
			cout << "	 Не значит ничего." << endl;
			cout << endl << "И так, твой ответ: ";
			Hero.riddle_choice_2 = Hero.riddle_choice_1;
			Hero.riddle_choice_1 = chance;
			cin >> choice;
			if (choice == "Прошлое" || choice == "прошлое") {
				cout << endl << "Двери открываются." << endl;
				cout << "Сфинкс: Ответ верный. На этот раз..." << endl;
				system("pause");
			}
			else {
				cout << "Сфинкс: Ты умрёшь за своё невежество." << endl;
				Hero.Change_HP(-(Hero.Max_HP));
				system("pause");
			}break;
		}//Прошлое
		case 5: {
			cout << "Сфинкс: Он наводит слезу на глаза, " << endl;
			cout << "	 Мы при этом совсем не грустим, " << endl;
			cout << "	 Он уходит своею дорогой, " << endl;
			cout << "	 Что ведёт прямиком в небеса." << endl;
			cout << endl << "И так, твой ответ: ";
			Hero.riddle_choice_2 = Hero.riddle_choice_1;
			Hero.riddle_choice_1 = chance;
			cin >> choice;
			if (choice == "Дым" || choice == "дым") {
				cout << endl << "Двери открываются" << endl;
				cout << "Сфинкс: Ответ верный. На этот раз..." << endl;
				system("pause");
			}
			else {
				cout << "Сфинкс: Ты умрёшь за своё невежество." << endl;
				Hero.Change_HP(-(Hero.Max_HP));
				system("pause");
			}break;
		}//Дым
		case 6: {
			cout << "Сфинкс: Что можно прекратить, " << endl;
			cout << "	 А можно сохранить? " << endl;
			cout << "	 Когда этого нет, то ее все ищут, " << endl;
			cout << "	 А когда она есть, то только ее и слышно." << endl;
			cout << endl << "И так, твой ответ: ";
			Hero.riddle_choice_2 = Hero.riddle_choice_1;
			Hero.riddle_choice_1 = chance;
			cin >> choice;
			if (choice == "Тишина" || choice == "тишина") {
				cout << endl << "Двери открываются" << endl;
				cout << "Сфинкс: Ответ верный. На этот раз..." << endl;
				system("pause");
			}
			else {
				cout << "Сфинкс: Ты умрёшь за своё невежество" << endl;
				Hero.Change_HP(-(Hero.Max_HP));
				system("pause");
			}break;
		}//Тишина
		case 7: {
			cout << "Сфинкс: Начало конца, окончание века, " << endl;
			cout << "	 И самый последний предел человека, " << endl;
			cout << "	 Я вечно стою посредине закона " << endl;
			cout << "	 Не пасть и не хвост, а живот у дракона." << endl;
			cout << endl << "И так, твой ответ: ";
			Hero.riddle_choice_2 = Hero.riddle_choice_1;
			Hero.riddle_choice_1 = chance;
			cin >> choice;
			if (choice == "К" || choice == "к") {
				cout << endl << "Двери открываются" << endl;
				cout << "Сфинкс: Ответ верный. На этот раз..." << endl;
				system("pause");
			}
			else {
				cout << "Сфинкс: Ты умрёшь за своё невежество" << endl;
				Hero.Change_HP(-(Hero.Max_HP));
				system("pause");
			}break;
		}//'К'
		case 8: {
			cout << "Сфинкс: Однажды, гуляя в саду, " << endl;
			cout << "	 Тим встретил свекровь единственной " << endl;
			cout << "	 Дочери своего тестя." << endl;
			cout << "	 Как он к ней обратился?" << endl;
			cout << endl << "И так, твой ответ: ";
			Hero.riddle_choice_2 = Hero.riddle_choice_1;
			Hero.riddle_choice_1 = chance;
			cin >> choice;
			if (choice == "Мама" || choice == "мама") {
				cout << endl << "Двери открываются" << endl;
				cout << "Сфинкс: Ответ верный. На этот раз..." << endl;
				system("pause");
			}
			else {
				cout << "Сфинкс: Ты умрёшь за своё невежество" << endl;
				Hero.Change_HP(-(Hero.Max_HP));
				system("pause");
			}break;
		}//Мама
		case 9: {cout << "Сфинкс: Скажи мне, кто ходит утром на четырёх ногах," << endl;
			cout << "	 Днём — на двух, а вечером — на трёх?" << endl;
			cout << "	 Никто из всех существ, живущих на земле," << endl;
			cout << "	 Не изменяется так, как он." << endl;
			cout << "	 Когда ходит он на четырёх ногах," << endl;
			cout << "	 Тогда меньше у него сил и медленнее двигается он," << endl;
			cout << "	 Чем в другое время." << endl;
			cout << endl << "И так, твой ответ: ";
			Hero.riddle_choice_2 = Hero.riddle_choice_1;
			Hero.riddle_choice_1 = chance;
			cin >> choice;
			if (choice == "Человек" || choice == "человек") {
				cout << endl << "Двери открываются" << endl;
				cout << "Сфинкс: Ответ верный. На этот раз..." << endl;
				system("pause");
			}
			else {
				cout << "Сфинкс: Ты умрёшь за своё невежество" << endl;
				Hero.Change_HP(-(Hero.Max_HP));
				system("pause");
			}break;
		}//Человек
		default:
			break;
		}

	if (Hero.HP > 0)
	{
		Hero.score += 20;
	}
}