#include <iostream>
using namespace std;

void myswap(int *p1, int *p2);

void myswap(int* p1,int* p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    cout << "交换前：" << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    myswap(&a, &b);

    cout << "交换后：" << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    system("pause");
    return 0;
}
