#include"stringbad.h"
#include<cstring>

int StringBad::num_strings = 0;//静态数据成员在类声明中声明，在包含类方法的文件中初始化
                               //如果静态成员是const成员或枚举类型，则可以在类声明中初始化
StringBad::StringBad(const char *s)
{
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    num_strings ++ ;
    cout << num_strings << ": \"" << str << ". \"" << endl;
}

StringBad::StringBad()
{
    len = 4;
    str = new char[4];
    strcpy(str, "C++");
    num_strings ++ ;
    cout << num_strings << ": \"" << str << ". \"" << endl;
}

StringBad::~StringBad()
{
    cout << "\"" << str << "\" object deleted." << endl;
    --num_strings;
    cout << num_strings << " left" << endl;
    delete [] str;
}

ostream &operator<<(ostream &os, const StringBad &st)
{
    os << st.str;
    return os;
}
