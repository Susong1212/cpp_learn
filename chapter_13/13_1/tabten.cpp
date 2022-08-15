#include "tabten.h"

TableTennisPlayer::TableTennisPlayer(const string &fn, const string &ln, bool ht)
{
	firstname = fn;
	lastname = ln;
	hasTable = ht;
}

void TableTennisPlayer::Name() const
{
	cout << lastname << ", " << firstname;
}

RatedPlayer::RatedPlayer(unsigned int r, const string &fn, const string &ln, bool ht)
    :TableTennisPlayer(fn, ln, ht)   //即使不用成员初始化列表，也会先调用TableTnnisPlayer的默认构造函数
{
    rating = r;
}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer &tp):TableTennisPlayer(tp), rating(r)
{
}