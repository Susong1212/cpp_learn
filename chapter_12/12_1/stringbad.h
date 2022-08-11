#ifndef _STRINGBAD_H_
#define _STRINGBAD_H_

#include <iostream>

using namespace std;

class StringBad
{
private:
    char *str;
    int len;
    static int num_strings;//不能在类声明中初始化静态成员变量

public:
    StringBad(const char *s);
    StringBad();
    ~StringBad();
    friend ostream &operator<<(ostream &os, const StringBad &st);
};

#endif
