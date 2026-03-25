#include <iostream>
using namespace std;

int main()
{
    //野指针:指针指向非法的内存空间（不是我们申请的）
    int *p = (int *)0x1100;

    cout << *p << endl;

    system("pause");
    return 0;
}
