#include <iostream>
using namespace std;

// 类中的常函数与类的常对象实例
class Person
{
public:
    int m_A;
    mutable int m_B; // 特殊，可变的变量

    Person(int a, int b) : m_A(a), m_B(b) {}

    // const修饰函数本质上是修饰指针常量 this，使得this->属性不能再被修改
    void showPerson() const
    {
        // m_A = 100; // error：常函数不可修改属性
        m_B = 100; // mutable修饰，可被常函数修改
        cout << "A = " << m_A << "  B = " << m_B << endl;
    }

    void func() // 普通方法
    {}
};

int main()
{
    const Person p(1, 3); // 常对象

    // p.m_A = 100; // 不能修改普通属性
    p.m_B = 200; // 可以修改mutable属性

    // p.func(); //不能调用普通方法
    p.showPerson(); //只能调用常函数

    system("pause");
    return 0;
}
