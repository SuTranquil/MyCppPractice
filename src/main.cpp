#include <iostream>
#include "p13_swap.h"
using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    cout << "Before swap:" << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    myswap(a, b);

    cout << "After swap:" << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    system("pause");
    return 0;
}
