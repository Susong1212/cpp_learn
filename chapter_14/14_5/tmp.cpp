#include<iostream>

using namespace std;

template<class T>//声明函数模板
void count();

template<class U>
void report(U &);

template<class V>
class HasFriend
{
    private:
        V item;
        static int ct;
    public:
        HasFriend(const V &i) : item(i){ct ++; }
        ~HasFriend(){ ct --; }
        friend void count<V>(); //dispaly ct
        friend void report<>(HasFriend<V> &); //具体化函数模板
};

template<class V>
int HasFriend<V>::ct = 0;

template<class T>
void count()
{
    cout << "count: " << HasFriend<T>::ct << endl;
}

template<class U>
void report(U &hf)
{
    cout << hf.item << endl;
}

int main(void)
{
    cout << "No object declared: ";
    count<int>();

    HasFriend<int> hfil(10);
    cout << "After hfil declared: ";
    count<int>();
    report(hfil);

    return 0;
}
