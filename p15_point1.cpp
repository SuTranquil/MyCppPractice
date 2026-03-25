#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;

    //本机指针固定占用8个字节大小（64位系统x64）
    cout << "sizeof(int *)=" << sizeof(int *) << endl;
    cout << "sizeof(float *)=" << sizeof(float *) << endl;
    cout << "sizeof(double *)=" << sizeof(double *) << endl;
    cout << "sizeof(char *)=" << sizeof(char *) << endl;

    system("pause");
    return 0;
}
