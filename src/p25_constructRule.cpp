#include <iostream>
using namespace std;

//构造函数的调用规则
//1.创建一个类，c++编译器会给每个类都添加至少3个函数
// 默认构造函数 (空实现)
// 析构函数 (空实现)
// 拷贝构造函数 (值拷贝)

//2.用户写有参构造函数，编译器不再提供默认构造函数，保留拷贝构造函数
// 用户写拷贝构造函数，编译器不再提供其他

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

int main()
{
    

    system("pause");
    return 0;
}
