#include <iostream>
using namespace std;

// 函数重载注意事项
// 1.引用作为函数重载参数


void func(int& num)
{
    cout << "(int& num)调用" << endl;
}

void func(const int& num)
{
    cout << "(const int& num)调用" << endl;
}

// 2.函数重载遇到默认参数，编译器不能区分
// 避免在函数重载时写默认参数

void func2(int num)
{
    cout << "(int num)调用" << endl;
}
void func2(int num, int num2=10)
{
    cout << "(int num, int num2=10)调用" << endl;
}

int main()
{
    int a = 10;
    //(int& num)调用,原因:int& num = a;合法,int& num = 10; 10不是左值不合法
    func(a);
    func(10); //(const int& num)调用,原因:const int& num = 10;合法
    cout << "********************" << endl;

    // 两个重载都能用，编译器无法区分，报错
    // func2(5);

    system("pause");
    return 0;
}
