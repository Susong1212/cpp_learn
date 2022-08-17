#include <iostream>

using namespace std;

template <class T>
class ManyFriend
{
private:
    T item;

public:
    ManyFriend(const T &i) : item(i) {}
    template <class C, class D>
    friend void show(C &, D &);
};

template <class C, class D>
void show(C &c, D &d)
{
    cout << c.item << ", " << d.item << endl;
}

int main(void)
{
    ManyFriend<int> sxs(1);
    ManyFriend<double> hjy(2.1);
    show(sxs, hjy);
    return 0;
}