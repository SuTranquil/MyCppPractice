#include <iostream>
using namespace std;

void myswap(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{
    int a = 10;
    int b = 30;

    myswap(a, b);
    cout << "After swap:" << endl;
    cout << "a=" << a << ", " << "b=" << b << endl;

    system("pause");
    return 0;
}
