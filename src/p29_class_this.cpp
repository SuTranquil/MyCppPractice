#include <iostream>
using namespace std;

// 类中非静态成员函数不占实例空间，即非静态成员函数为所有实例服务，函数如何区分不同实例？
// this指针，它指向调用非静态成员函数的对象实例，无需定义，本质是指针常量，指向不可改变

// 用途
// 1.当形参与成员变量同名时，可用 this->成员变量 区分
// 2. 类的非静态方法需要返回对象本身时，可用 returm *this;

class Person
{
    public:
        int age;
        Person(int age)
        {
            this->age = age; //用途1：解决名称冲突
        }
        void personAddAge(Person& p)
        {
            this->age += p.age;
        }

        Person& personAddAgeByThis(Person& p) // 返回本体，用&引用！！！
        {
            this->age += p.age;
            return *this;
        }
        
};



int main()
{
    Person p1(10);
    Person p2(20);

    p2.personAddAge(p1);
    cout << "p2的年龄为：" << p2.age << endl;
    // p2.personAddAge(p1).personAddAge(p1).personAddAge(p1); 无法进行连续操作

    p2.personAddAgeByThis(p1);
    cout << "p2的年龄为：" << p2.age << endl;
    p2.personAddAgeByThis(p1).personAddAgeByThis(p1).personAddAgeByThis(p1); //链式编程思想，类似cout
    cout << "p2的年龄为：" << p2.age << endl;

    system("pause");
    return 0;
}
