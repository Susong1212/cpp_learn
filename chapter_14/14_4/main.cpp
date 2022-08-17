#include<iostream>
#include"stacktp.h"
#include<cctype>
#include<string>

using namespace std;

int main(void)
{
    char ch;
    string po;
    Stack<string> st;
    
    cout << "enter A to push to stack,\n"
        << "P to pop from stack, Q to quit." << endl;

    while(cin >> ch && toupper(ch) != 'Q')
    {
        while(cin.get() != '\n')
            continue;
        switch(ch)
        {
            case 'A':
            case 'a':
                cout << "enter a string you want to push to stack:\n";
                cin >> po;
                if(st.isfull())
                    cout << "Stack already full" << endl;
                else
                    st.push(po);
                break;
            case 'P':
            case 'p':
                if(st.isempty())
                    cout << "Stack is empty" << endl;
                else
                {
                    st.pop(po);
                    cout << po << " is poped " << endl;
                }
                break;
        }
        cout << "enter A to push to stack,\n"
            << "P to pop from stack, Q to quit." << endl;
    }
    return 0;
}
