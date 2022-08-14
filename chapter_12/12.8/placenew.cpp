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

    cout << "buffer: " << (char*)buffer << endl;
    cout << "sxs: " << pc2 << endl;

    return 0;
}
