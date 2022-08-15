#include <iostream>
#include "tabten.h"

using namespace std;

int main(void)
{
	RatedPlayer rplayer1(1140, "Mallory", "Duck", false);
	TableTennisPlayer player1("sxs", "hjy", false);

	rplayer1.Name();
	if (rplayer1.HasTable())
		cout << "Has a table" << endl;
	else
		cout << ":has not a table" << endl;
	rplayer1.Name();
	cout << ": Rating: " << rplayer1.Rating() << endl;

	RatedPlayer rplayer2(1212, player1);
	cout << "name: " ;
	rplayer2.Name();
	cout << "; Rating: " << rplayer2.Rating() << endl;

	return 0;
}