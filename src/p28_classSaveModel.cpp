#include <iostream>
using namespace std;

class Person01
{
};

class Person02
{
    public:
        int mA; //非静态成员，存储与类的对象同，实例总占用内存为 4


        static int mB; //静态成员，存储 不 与类的对象同，实例总占用内存还是 4
        void func(void){} //非静态成员函数，存储 不 与类的对象同，实例总占用内存还是 4
        static void func2(void){} //非静态成员函数，存储 不 与类的对象同，实例总占用内存还是 4
};

class Person03
{
    public:
        Person01 p;
};

void test01(void)
{
    Person01 p1;

    // 空对象占用内存字节：1
    // C++编译器会给每个空对象分配一个字节空间，用以区分空对象占用内存的位置
    // 标记了一处地点，每个空对象有独一无二的内存地址
    cout << "size of p1 = " << sizeof(p1) << endl; // 1
}

void test02(void)
{
    Person02 p2;

    // 占用内存字节：4
    cout << "size of p2 = " << sizeof(p2) << endl; // 4
}

int main()
{
    // test01();

    // test02();

    // 类中有个空类？
    Person03 p3;
    cout << "类中有个空类，占用字节：" << sizeof(p3) << endl; //还是 1

    system("pause");
    return 0;
}
