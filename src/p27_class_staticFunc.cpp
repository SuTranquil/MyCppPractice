#include <iostream>
using namespace std;

//静态成员函数
//所有对象实例共享
//静态成员函数只能访问静态成员变量 ！！！

class Person
{
public:
    static int mA;
    int mB;
    static void func(void)
    {
        mA = 100;
        // mB = 200; 不能访问非静态成员变量
        cout << "静态成员函数func调用" << endl;
        cout << Person::mA << endl;
        
    }
};

int Person::mA;


int main()
{
    cout << Person::mA << endl;
    // Person p1;
    // p1.func();

    Person::func();

    system("pause");
    return 0;
}
