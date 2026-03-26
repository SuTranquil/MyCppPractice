#include <iostream>
using namespace std;

void printValue(const int& num)
{
    // num = 1000; //防止误修改
    cout << num << endl;
}

int main()
{
    // 引用相当于int *const p
    // 常量引用，相当于const int *const p
    // 使用场景：修饰形参，防止误操作

    int a = 10;

    printValue(a);
    cout << a << endl;

    system("pause");
    return 0;
}
