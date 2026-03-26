#include <iostream>
using namespace std;

// 函数重载：函数名相同，提高代码复用率

/* 要求
1、同一作用域下
2、函数名称相同、
3、函数参数类型不同or个数不同or顺序不同
4、注意返回值类型相同
*/

void func()
{
    cout << "无参数调用" << endl;
}
void func(int a)
{
    cout << "(int a)调用" << endl;
}
void func(int a, int b)
{
    cout << "(int a, int b)调用" << endl;
}
void func(double a)
{
    cout << "(double a)调用" << endl;
}
void func(double a,int b)
{
    cout << "(double a,int b)调用" << endl;
}
void func(int a,double b)
{
    cout << "(int a,double b)调用" << endl;
}

int main()
{
    func();
    func(1);
    func(1,2);
    func(3.14);
    func(3.14,1);
    func(1,3.14);
    
    system("pause");
    return 0;
}
