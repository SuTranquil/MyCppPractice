#include <iostream>
using namespace std;

//重载关系运算符
class Person
{
private:
    string m_Name;
    int m_Age;
public:
    Person(string name,int age):m_Name(name),m_Age(age){}

    // 重载判断关系运算符
    bool operator==(const Person& p)
    {
        return (m_Name == p.m_Name && m_Age == p.m_Age);
    }
    bool operator!=(const Person& p)
    {
        return !(*this == p);
    }


    void printInfo()
    {
        cout << "姓名：" << m_Name << "  年龄：" << m_Age << endl;
    }
};

void test01()
{
    Person p1("Jerry", 18);
    Person p2("Tom", 20);
    Person p3("Jerry", 18);


    if(p1==p3)
        cout << "为同一人" << endl;
    else
        cout << "不为同一人" << endl;
}

int main()
{
    test01();

    system("pause");
    return 0;
}
