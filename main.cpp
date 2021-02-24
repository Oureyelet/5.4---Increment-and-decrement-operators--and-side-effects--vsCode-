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

    /*
    Here is another example showing the difference between the prefix and postfix versions:
    */

    int z { 5 };
    int v { 5 };
    cout << z << ' ' << v << '\n';
    cout << ++z << ' ' << --v << '\n'; // prefix
    cout << z << ' ' << v << '\n';
    cout << z++ << ' ' << v-- << '\n'; // postfix
    cout << z << ' ' << v << '\n' << endl;


    /*
    Side effects
    */
    int x1 = 5;
     ++x1;
    cout << x1 << '\n' << endl;
    //The assignment operator in the above example has the side effect of changing the value of x permanently.

    //side effects can also lead to unexpected results:
    int x2{ 5 };
    int value = add(x2, ++x2); // is this 5 + 6, or 6 + 6?
    // It depends on what order your compiler evaluates the function arguments in
    cout << value << '\n' << endl; // value could be 11 or 12, depending on how the above line evaluates!

    return 0;
}