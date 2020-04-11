#include "Header.h"//Выход

void quest_escape(MyHero& Hero)
{
	system("cls");
	string choice="0";
	int portal=0;
	while (1) 
	{
		cout << "Перед вами находится портал, рядом сидит чёрный ворон." << endl;
		cout << "1) Портал." << endl;
		cout << "2) Поговорить с вороном." << endl;
		cout << "3) Уйти." << endl;
		cout << Hero.name << ": ";
		cin >> choice;

		if (choice == "1" || choice == "Портал" || choice == "портал")
		{
			system("cls");
			while (1)
			{
				cout << "Вы подошли к порталу." << endl;
				cout << "1) Войти." << endl;
				cout << "2) Починить." << endl;
				cout << "3) Назад." << endl;
				cout << Hero.name << ": ";
				cin >> choice;

				if ((choice == "1" || choice == "Портал" || choice == "портал") && portal == 1)
				{
					Hero.win = 1;
					cout << Hero.name << ": Ну что же, пора уходить." << endl;
					_getch();
					cout << "Вы входите в портал и через секунду пропадаете из виду." << endl;
					cout << "Вслед за вами тёмное подземелье покидает и ворон." << endl << endl;
					system("pause");
					break;
				}
			    if ((choice == "1" || choice == "Портал" || choice == "портал") && portal == 0)
				{
					cout << Hero.name << ": Портал всё ещё неактивен, нужно вставить кристалл." << endl << endl;
					system("pause");
					system("cls");
					continue;
				}

				if ((choice == "2" || choice == "Починить" || choice == "починить") && Hero.charge_cristall == 1 && portal == 0)
				{
					portal++;
					cout << "Вы возващаете кристалл на место." << endl;
					cout << "Происходит яркая синяя вспышка, портал испускает свистящий звук, после чего открывается проход." << endl;
					_getch();
					cout << Hero.name << ": Кажется, сработало." << endl;
					_getch();
					cout << "Ворон : Кто бы мог подумать, у тебя получилось !" << endl;
					cout << "Ворон : Только иди первым, я сразу за тобой." << endl << endl;
					system("pause");
					system("cls");
					continue;
				}
				else if ((choice == "2" || choice == "Починить" || choice == "починить") && portal == 1)
				{
					cout << Hero.name << ": Портал уже работает, не думаю, что ему нужно что-то ещё." << endl << endl;
					system("pause");
					system("cls");
					continue;
				}
				else if ((choice == "2" || choice == "Починить" || choice == "починить") && Hero.charge_cristall == 0)
				{
					cout << "Вы возващаете кристалл на место." << endl;
					cout << "Происходит короткая вспышка, после чего всё возвращается к прежднему состоянию." << endl;
					_getch();
					cout << Hero.name << ": Кристалл недостаточно силён, ничего не выйдет." << endl;
					_getch();
					cout << "Ворон : Я думал, что у тебя достаточно ума, чтобы догадаться." << endl << endl;
					system("pause");
					system("cls");
					continue;
				}
				if (choice == "3" || choice == "Назад" || choice == "назад")
				{
					cout << Hero.name << " : Пожалуй, вернусь сюда позже." << endl;
					_getch();
					system("cls");
					break;
				}
			}
			
			if ((choice == "1" || choice == "Портал" || choice == "портал") && portal == 1)
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
				cout << "Вы наклоняетесь к ворону." << endl;
				cout << "1) Как ты научился говорить ?" << endl;
				cout << "2) Как тебя зовут ?" << endl;
				cout << "3) Видел что-нибудь в округе ?" << endl;
				cout << "4) Назад." << endl;
				cout << Hero.name << ": ";
				cin >> choice;

				if (choice == "1")
				{
					cout << Hero.name << " Ты первый ворон на моей памяти, который умеет говорить." << endl;
					cout << Hero.name << " Как ты этому научился ?" << endl;
					_getch();
					cout << "Ворон : Не знаю, до того как я попал сюда, меня никто не понимал." << endl;
					_getch();
					system("cls");
					continue;
				}

				if (choice == "2")
				{
					cout << Hero.name << " : Как тебя зовут ?" << endl;
					_getch();
					cout << "Ворон : Альберт." << endl;
					_getch();
					cout << "Ворон : Себя можешь не называть, у меня хорошая память." << endl;
					_getch();
					system("cls");
					continue;
				}
				if (choice == "3")
				{
					cout << Hero.name << " : Видел что-нибудь, пока пролетал округу ?" << endl;
					_getch();
					cout << "Ворон : Немного, я ведь ворон, а не сова." << endl;
					_getch();
					cout << "Ворон : Но остановившись в одной из комнат, меня чуть не проглотил деревянный ящик." << endl;
					_getch();
					cout << "Ворон : В общем, я бы посоветовал быть осторожней." << endl;
					_getch();
					system("cls");
					continue;
				}

				if (choice == "4" || choice == "Назад" || choice == "назад")
				{
					cout << Hero.name << " : Мне нужно идти." << endl;
					_getch();
					system("cls");
					break;
				}

				cout << "Если хочешь что-то от меня узнать, подбирай вопросы правильно." << endl;
				_getch();
			}
			continue;
		}

		if (choice == "3" || choice == "Уйти" || choice == "уйти")
		{
			cout << Hero.name << " : Я пойду, никуда не улетай." << endl;
			cout << "Ворон : Я никуда и не собирался." << endl;
			_getch();
			break;
		}
	}
}