#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    float b = 3.14f;
    float c = 3e-2f;

    cout << "short类型占用的字节数为：" << sizeof(short) << endl;
    cout << "int类型占用的字节数为：" << sizeof(int) << endl;
    cout << "int类型占用的字节数为：" << sizeof(a) << endl;
    cout << "float类型占用的字节数为：" << sizeof(float) << endl;
    cout << "double类型占用的字节数为：" << sizeof(double) << endl;
    cout << "long类型占用的字节数为：" << sizeof(long) << endl;
    cout << "long long类型占用的字节数为：" << sizeof(long long) << endl;

    system("pause");
    
    return 0;
}
