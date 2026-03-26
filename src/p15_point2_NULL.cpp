#include <iostream>
using namespace std;

int main()
{
    int *p = NULL;

    //访问空指针会报错
    //内存编号为0-255位系统占用内存，不允许用户访问

    //error: Segmentation fault(段错误)
    cout << *p << endl;

    system("pause");
    return 0;
}
