#ifndef _MYTIME_H_
#define _MYTIME_H_

#include<iostream>

using namespace std;

class Time
{
    private:
        int hours;
        int minutes;
    public:
        Time();
        Time(int h, int m = 0);
};
#endif
