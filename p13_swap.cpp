#include "p13_swap.h"

// 值传递
void myswap(int num1, int num2)
{
    cout << "交换前：" << endl;
    cout << "num1=" << num1 << endl;
    cout << "num2=" << num2 << endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "交换后：" << endl;
    cout << "num1=" << num1 << endl;
    cout << "num2=" << num2 << endl;
}

// 引用传递(可以交换)
// void myswap(int& num1, int& num2)
// {
//     cout << "交换前：" << endl;
//     cout << "num1=" << num1 << endl;
//     cout << "num2=" << num2 << endl;

//     int temp = num1;
//     num1 = num2;
//     num2 = temp;

//     cout << "交换后：" << endl;
//     cout << "num1=" << num1 << endl;
//     cout << "num2=" << num2 << endl;
// }
