#include <iostream>
#include "first.h"

using namespace std;

int main()
{
    int x { 6 };
    int y = ++x; // x is incremented to 6, x is evaluated to the value 6, and 6 is assigned to y.
    /*
    int y = x++; // x is incremented to 6, copy of original x is evaluated to the value 5, 
                    and 5 is assigned to y
    */

    cout << x << ' ' << y << '\n' << endl;

    return 0;
}