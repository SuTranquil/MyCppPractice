#include <iostream>
using namespace std;

// 因重载()操作符，使用方式类似于函数调用，又称仿函数

class MyPrint
{
public:
    void operator()(const string& str)
    {
        cout << str << endl;
    }
};

class MyAdd
{
public:
    int operator()(int a,int b)
    {
        return a + b;
    }
};

void test01()
{
    MyPrint mp1;
    mp1("Hello World!");
    //匿名函数对象，MyPrint()实际创造一个匿名对象，用后即焚
    MyPrint()("Hello World!");
}

void test02()
{
    MyAdd ma1;
    cout << ma1(100, 50) << endl;
    //匿名函数对象，MyAdd()实际创造一个匿名对象，用后即焚
    cout << MyAdd()(50, 50) << endl;
}

int main()
{
    // test01();

    test02();

    system("pause");
    return 0;
}
