#include <iostream>
using namespace std;

// 不建议使用多继承，容易引发二义性，使用::作用域可解决

class Father1
{
public:
    int m_A;
    int m_B;
    Father1():m_A(100),m_B(1000){}
};

class Father2
{
public:
    int m_A;
    int m_B;
    Father2():m_A(200),m_B(2000){}
};

class Son:public Father1,public Father2
{
public:
    int m_A;
    int m_B;
    int m_C;
    int m_D;
    Son():m_A(400),m_B(4000),m_C(300),m_D(3000){}
};

int main()
{
    Son s1;
    cout << sizeof(s1) << endl;

    cout << "Son:" << s1.m_A << endl;
    cout << "Father1:" << s1.Father1::m_A << endl;
    cout << "Father2:" << s1.Father2::m_A << endl;

    system("pause");
    return 0;
}
