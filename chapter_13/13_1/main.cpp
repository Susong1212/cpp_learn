#include <iostream>
#include "tabten.h"

using namespace std;

int main(void)
{
	// TableTennisPlayer player1{"Chuck", "Blizzard", true};
	// TableTennisPlayer player2{"Tara", "Boomdea", false};
	
	// player1.Name();
	// if(player1.HasTable())
	// 	cout << ": has a table." << endl;
	// else
	// 	cout << ": hasn't a table." << endl;
		
	// player2.Name();
	// if(player2.HasTable())
	// 	cout << ": has a table." << endl;
	// else
	// 	cout << ": hasn't a table." << endl;
	
	RatedPlayer rplayer1(1140, "Mallory", "Duck", false);
	rplayer1.Name();
	if(rplayer1.HasTable())
		cout << "Has a table" << endl;
	else
		cout << ":has not a table" << endl;
	rplayer1.Name();
	cout << ": Rating: " << rplayer1.Rating() << endl;
	return 0;
}