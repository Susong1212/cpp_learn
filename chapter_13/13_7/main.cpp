#include <iostream>
#include "dma.h"

using namespace std;

int main(void)
{
    baseDMA shirt("Protabelly", 8);
    cout << "Displaying baseDMA object: " << endl;
    cout << shirt;
    cout << "----------------------------" << endl;

    lacksDMA ballon("Blimpo", 4, "red");
    cout << "Displaying lacksDMA object: " << endl;
    cout << ballon;
    cout << "----------------------------" << endl;

    lacksDMA ballon2(ballon);
    cout << "Result of lacksDMA copy: " << endl;
    cout << ballon2;
    cout << "----------------------------" << endl;

    hasDMA map("Keys", 5, "Mercator");
    cout << "Displaying hasDMA object: " << endl;
    cout << map << endl;
    cout << "----------------------------" << endl;

    hasDMA map3 = map;// call copy construct function
    cout << "Result of hasDMA copy: " << endl;
    cout << map3;
    	
    hasDMA map2;//call operator funciton:
    map2 = map;
    
    return 0;
}