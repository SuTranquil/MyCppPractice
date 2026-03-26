#include <iostream>
using namespace std;

// 函数声明和函数实现不能同时有默认值!
// int myadd(int a, int b = 20, int c = 30);
int myadd(int a, int b, int c);

int myadd(int a,int b=20,int c=30)
{
    return a + b + c;
}

int main()
{
    cout << myadd(10) << endl;
    cout << myadd(10,10) << endl;
    cout << myadd(10,10,10) << endl;

    system("pause");
    return 0;
}
