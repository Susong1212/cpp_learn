#include <iostream>
#include <string>
#include <new>

using namespace std;

class JustTesting
{
private:
    string words;
    int number;

public:
    JustTesting(const string &s = "Just testing", int n = 0)
    {
        words = s;
        number = n;
        cout << words << " constructed\n";
    }
    ~JustTesting() { cout << words << " destroyde\n"; }
    void Show() const { cout << words << " , " << number << endl; }
};

const int BUF = 512;
int main(void)
{
    char *buffer = new char[BUF];

    JustTesting *pc1, *pc2;

    pc1 = new (buffer) JustTesting;
    pc2 = new JustTesting("sxs", 24);

    cout << "buffer: " << (void *)buffer << endl;
    cout << "sxs: " << pc2 << endl;

    cout << pc1 << ": ";
    pc1->Show();
    cout << pc2 << ": ";
    pc2->Show();

    JustTesting *pc3, *pc4;
    pc3 = new (buffer + sizeof(JustTesting)) JustTesting("Bad Idea", 6);//与pc1创建的对象位置错开
    pc4 = new JustTesting("hjy", 10);

    cout << pc3 << ": ";
    pc3->Show();
    cout << pc4 << ": ";
    pc4->Show();

    delete pc2;
    delete pc4;
    // delete pc1;
    // delete pc3;//delete 不能与定位new运算符配合使用
    pc3->~JustTesting();
    pc1->~JustTesting();

    delete[] buffer;

    return 0;
}
