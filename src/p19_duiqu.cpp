#include <iostream>
using namespace std;

// 利用new在堆区创建数据
int* fun(void)
{
    int *p1 = new int(10);

    return p1;
}

int main()
{
    //p1本身还是局部变量，但死之前把堆变量地址传递给了p2
    int *p2 = fun();
    cout << *p2 << endl;
    cout << *p2 << endl;
    cout << *p2 << endl;
    cout << *p2 << endl;

    system("pause");
    return 0;
}
