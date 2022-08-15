#include<iostream>
#include<string>
#include<new>

using namespace std;

class JustTesting
{
    private:
        string words;
        int number;
    public:
        JustTesting(const string &s = "Just testing", int n = 0)
        {words = s; number = n; cout << words << " constructed\n"; }
        ~JustTesting(){cout << words << "destroyde\n";}
        void Show() const {cout << words << " , " << number << endl;}
};

const int BUF = 512;
int main(void)
{
    char* buffer = new char[BUF];

    JustTesting* pc1, * pc2;

    pc1 = new(buffer) JustTesting;
    pc2 = new JustTesting("sxs", 24);

    cout << "buffer: " << (void*)buffer << endl;
    cout << "sxs: " << pc2 << endl;

    cout << pc1 << ": " ;
    pc1 -> Show();
    cout << pc2 << ": ";
    pc2 -> Show();

    JustTesting* pc3, * pc4;
    pc3 = new(buffer) JustTesting("Bad Idea", 6);
    pc4 = new JustTesting("Head2", 10);

    cout << pc3 << ": ";
    pc3 -> Show();
    cout << pc4 << ": ";
    pc4 -> Show();

    return 0;
}
