#include <iostream>
using namespace std;

// 占位参数
// 返回值类型 函数名（数据类型）

void func(int a, int)
{
    cout << "a = " << a << endl;
}

// 占位参数还能有默认参数
void func2(int a, int = 1)
{
    cout << "a = " << a << endl;
}

int main()
{
    int b=20;
    func(b,1);
    func2(b);

    system("pause");
    return 0;
}
