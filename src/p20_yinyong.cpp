#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int c = 20;
    // 引用(本质是一个指针常量)
    //！注意：引用必须初始化且不能改(常量指针的指针指向不能改)
    int &b = a;

    b = 30;
    b = c;// 这不是改引用，这是赋值操作

    cout << a << endl;

    system("pause");
    return 0;
}
