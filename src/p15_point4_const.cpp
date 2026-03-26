#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 10;

    // 1.常量指针 const int *p
    // 用法：指针指向可以改，指针指向的值不能改
    const int *p1 = &a;
    p1 = &b;//允许
    // *p1 = 20;//禁止

    // 2.指针常量 int* const p
    // 用法：指针指向不可以改，指针指向的值可以改
    int *const p2 = &a;
    // p2 = &b;//禁止
    // *p2 = 20;//允许

    // 3.既修饰指针又修饰常量 const int* const p
    // 用法：指针指向不可以改，指针指向的值可以改
    const int *const p3 = &a;
    // p3 = &b;//禁止
    // *p3 = 20;//禁止

    system("pause");
    return 0;
}
