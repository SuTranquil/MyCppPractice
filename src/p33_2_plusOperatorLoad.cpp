#include <iostream>
using namespace std;

class MyInteger
{
    friend ostream &operator<<(ostream &out,const MyInteger &m);
private:
    int myint;
public:
    MyInteger():myint(0){}
    // 前置 ++b 运算符重载
    MyInteger& operator++()
    {
        myint++;
        return *this;
    }
    // 后置 b++ 运算符重载，使用int占位
    MyInteger operator++(int)
    {
        MyInteger temp = *this;
        myint++;
        return temp; // 返回临时变量，右值
    }
};
// const很重要，否则43行报错，不加const只能接受左值
ostream& operator<<(ostream& out,const MyInteger& m)
{
    return out << m.myint;
}

int main()
{
    MyInteger a;
    cout << a << endl;
    cout << ++a << endl;
    cout << a << endl;
    cout << ++(++a) << endl;
    cout << a << endl;

    cout << "********************" << endl;
    MyInteger b;
    cout << b << endl; //0
    cout << b++ << endl; 
    cout << b << endl; //1
    cout << (b++)++ << endl;
    cout << b << endl; //2


    system("pause");
    return 0;
}
