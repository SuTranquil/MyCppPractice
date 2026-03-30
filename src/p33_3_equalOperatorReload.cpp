#include <iostream>
using namespace std;

// 系统为一个类自动生成4个函数：构造（空）、析构（空）、拷贝构造（值传递）、赋值运算符=（值传递，浅拷贝)

class Person
{
private:
    int *m_Age;
public:
    Person(int age)
    {
        m_Age = new int(age);
    }
    ~Person()
    {
        if(m_Age != NULL)
        {
            delete m_Age;
            cout << "已释放" << endl;
            m_Age == NULL;
        }
    }
    Person& operator=(const Person& p)
    {
        // 编译器浅拷贝：m_Age = p.m_Age;

        // 自定义深拷贝
        *m_Age = *p.m_Age;
        return *this;
    }

    int getAge()
    {
        return *m_Age;
    }
};

void test()
{
    Person p1(18);
    Person p2(20);
    Person p3(22);
     //类中涉及在堆区创建数据，浅拷贝时容易引发重复释放内存问题，重载=以实现深拷贝
    p3 = p2 = p1;

    cout << "p1 = " << p1.getAge() << endl;
    cout << "p2 = " << p2.getAge() << endl;
    cout << "p3 = " << p3.getAge() << endl;
}

int main()
{
    test();

    system("pause");
    return 0;
}
