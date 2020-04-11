#include "Header.h"

void ScoreF(MyHero& Hero) {
	ofstream fout("leaderboard.txt", ios_base::app);
	fout << Hero.name << " " << Hero.score << endl;
	fout.close();
}