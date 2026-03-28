#include <iostream>
using namespace std;

// 初始化列表
// 构造函数():成员1(值1),成员1(值1),...{}

class Person
{
public:
    int mA,mB,mC;
    Person(int a, int b, int c) : mA(a), mB(b), mC(c) {}
};


int main()
{
    Person p1(30, 20, 10);

    cout << p1.mA << ",  " << p1.mB << ",  " << p1.mC << endl;

    system("pause");
    return 0;
}
