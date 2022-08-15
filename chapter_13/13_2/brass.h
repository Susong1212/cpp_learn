#ifndef __BRASS_H__
#define __BRASS_H__

#include <iostream>
#include <string>

using namespace std;

class Brass
{
private:
    string fullName;
    long acctNum;
    double balance;

public:
    Brass(const string &s = "Nullbody", long an = -1, double bal = 0.0);
    void Deposit(double amt);
    virtual void Withdraw(double amt);//虚函数，程序将根据引用或指针指向的对象类型来选择方法
    double Balance() const;
    virtual void ViewAcct() const;
    virtual ~Brass() {} //析构函数一定要定义为虚函数，可以确保正确的析构函数序列被调用
};

class BrassPlus : public Brass
{
private:
    double maxLoan;
    double rate;
    double owesBank;

public:
    BrassPlus(const string &s = "Nullbody", long an = -1, double bal = 0.0, double ml = 500.0, double rate = 0.11125);
    BrassPlus(const Brass &ba, double ml = 500.0, double rate = 0.11125);
    virtual void ViewAcct() const;
    virtual void Withdraw(double amt);
    void ResetMax(double m) { maxLoan = m; }
    void ResetRate(double r) { rate = r; }
    void ResetOwes() { owesBank = 0.0; }
};

#endif