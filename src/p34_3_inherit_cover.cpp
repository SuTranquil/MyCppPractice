#include <iostream>
using namespace std;

class Father
{
public:
    int m_A;
    static int m_C;
    Father():m_A(100)
    {
        cout << "Father 构造函数" << endl;
    }
    ~Father()
    {
        cout << "Father 析构函数" << endl;
    }
    void func()
    {
        cout << "Father func 调用" << endl;
    }

    void func(int a)
    {
        cout << "Father func 调用(int a)" << endl;
    }

    static void funcStatic()
    {
        cout << "Father static func 调用" << endl;
    }
    static void funcStatic(int a)
    {
        cout << "Father static func 调用(int a)" << endl;
    }
};

int Father::m_C = 100;

class Son:public Father
{
public:
    int m_A;
    int m_B;
    static int m_C;
    Son():m_A(200),m_B(200)
    {
        cout << "Son 构造函数" << endl;
    }
    ~Son()
    {
        cout << "Son 析构函数" << endl;
    }
    void func()
    {
        cout << "Son func 调用" << endl;
    }

    static void funcStatic()
    {
        cout << "Son static func 调用" << endl;
    }
};
int Son::m_C = 200;
void test()
{
    Son s1;

    cout << "子类中重名项会将父类所有重名的东西覆盖，包括属性、方法、重载的方法等" << endl;
    cout << s1.m_A << endl;
    cout << s1.Father::m_A << endl; // 若要使用父类的所有东西（无论静态和非静态），要用s1.Father::  

    cout << s1.m_C << endl;
    cout << s1.Father::m_C << endl;

    cout << Son::m_C << endl;
    cout << Son::Father::m_C << endl;

    s1.func();
    s1.Father::func();
    // s1.func(100); // 报错：子类覆盖了父类所有同名函数，包括重载函数
    s1.Father::func(100);

    s1.funcStatic();
    s1.Father::funcStatic();
    Son::funcStatic();
    // Son::funcStatic(100);// 报错：子类覆盖了父类所有同名函数，包括重载函数
    Son::Father::funcStatic(100);
}

int main()
{
    test();

    system("pause");
    return 0;
}
