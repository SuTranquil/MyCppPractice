#include <iostream>
using namespace std;

// 运算符重载的两种方法：成员函数、全局函数

// 运算符重载也可以发生 函数重载

class Person
{
    friend ostream &operator<<(ostream &out, Person &p);

private:
    int m_Age;
    int m_tall;
public:
    Person(int age,int tall):m_Age(age),m_tall(tall){}
    Person(const Person& p)
    {
        m_Age = p.m_Age;
        m_tall = p.m_tall;
    }

    // 1.通过成员函数重载运算符
    Person operator+(Person& p)
    {
        return Person(m_Age + p.m_Age, m_tall + p.m_tall);
    }

    // 运算符的函数重载
    Person operator+(int tall)
    {
        return Person(m_Age, m_tall + tall);
    }


    void printInfo()
    {
        cout << "年龄：" << m_Age << "  身高：" << m_tall << endl;
    }

};

// 2. 通过全局函数重载运算符
// Person operator+(Person&p1,Person& p2)
// {
//     return Person(p1.m_Age + p2.m_Age, p1.m_tall + p2.m_tall);
// }

// Person operator+(Person&p1,int tall)
// {
//     return Person(p1.m_Age, p1.m_tall + tall);
// }


// 左移运算符的重载(只能全局函数)
ostream& operator<<(ostream& out,Person& p)
{
    return out << "年龄" << p.m_Age << ",身高" << p.m_tall;
}

int main()
{
    Person p1(21, 180);
    Person p2(20, 175);

    Person p3 = p1 + p2;
    Person p4 = p2 + 10; // 运算符的函数重载

    p3.printInfo();
    cout << p4 << endl;
    p4.printInfo();

    system("pause");
    return 0;
}
