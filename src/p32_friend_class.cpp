#include <iostream>
using namespace std;

// 友元2：类作友元

class Building
{
    friend class GoodFriendClass; // GoodFriendClass作为Building的友元访问私有变量

public:
    string m_SittingRoom;
    Building(); // 函数声明
private:
    string m_BedRoom;
};
// 类外用 类名::函数名 实现函数定义
Building::Building()
{
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
}

class GoodFriendClass
{
public:
    string m_name;
    int m_age;
    GoodFriendClass(string name,int age);
    void visit(Building &building);
};
// 类外定义函数
GoodFriendClass::GoodFriendClass(string name,int age):m_name(name),m_age(age){}
void GoodFriendClass::visit(Building &building)
{
    cout << "好朋友可以访问：" << building.m_SittingRoom << endl;
    cout << "好朋友可以访问：" << building.m_BedRoom << endl;
}

int main()
{
    Building b1;
    GoodFriendClass f1("Zhang San", 21);

    f1.visit(b1);

    system("pause");
    return 0;
}
