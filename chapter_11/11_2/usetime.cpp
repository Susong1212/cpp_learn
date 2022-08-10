#include <iostream>
#include "mytime.h"

using namespace std;

int main(void)
{
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;

	cout << "coding time = ";
	coding.Show();

	cout << "fixing time = ";
	fixing.Show();

	total = coding + fixing;
	total.Show();

	return 0;
}

