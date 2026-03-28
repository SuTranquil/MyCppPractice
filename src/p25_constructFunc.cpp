#include <iostream>
using namespace std;

class Person
{
private:
    int m_age;
public:
    //构造函数，可以重载
    Person()
    {
        cout << "Person构造函数调用" << endl;
    }
    
    Person(int age)
    {
        m_age = age;
        cout << "2号Person构造函数调用" << endl;
    }
    //拷贝构造函数
    Person(const Person& p)
    {
        //拷贝p的所有参数
        m_age = p.m_age;
    }

    ~Person()
    {
        cout << "Person析构函数调用" << endl;
    }

};
void test1(void)
{
    //调用默认构造函数时不要加()!
    Person p1;
    //否则编译器会以为这是个 函数声明！
    // Person p1();

    Person p2(10);

    Person(20); //匿名对象，编译器创建后会立刻回收

    //隐式构造法
    Person p3 = 30; // 等价于 Person p3 = Person(30);
}

int main()
{

    test1();

    system("pause");
    return 0;
}
