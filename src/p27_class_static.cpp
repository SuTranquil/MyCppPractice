#include <iostream>
using namespace std;

// static成员要求：类内声明，类外初始化

class Person
{
public:
    static int m_A; // 对象实例共享数据
private:
    static int m_B;
public:
    static int get_mB(void)
    {
        return m_B;
    }
};

int Person::m_A = 100;
int Person::m_B = 200;// 私有也可类外初始化

int main()
{
    // Person p1;
    // cout << p1.m_A << endl;

    cout << Person::m_A << endl;

    cout << Person::get_mB() << endl;

    system("pause");
    return 0;
}
