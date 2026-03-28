#include <iostream>
using namespace std;

// 友元3：类的成员方法作友元

class Building;

class FriendClass
{
public:
    string m_name;
    int m_age;
    FriendClass(string name,int age);
    void visitGoodTime(Building &building);
    void visitBadTime(Building &building);

};
class Building
{
    // 只有FriendClass的visitGoodTime成员方法作为Building的友元可以访问私有变量
    friend void FriendClass::visitGoodTime(Building &building); 

public:
    string m_SittingRoom;
    Building(); // 函数声明
private:
    string m_BedRoom;
};
// 类外用 类名::函数名 实现函数定义
Building::Building():m_SittingRoom("客厅"),m_BedRoom("卧室"){}

FriendClass::FriendClass(string name,int age):m_name(name),m_age(age){}
void FriendClass::visitGoodTime(Building &building)
{
    cout << "朋友玩的好的时候可以访问：" << building.m_SittingRoom << endl;
    cout << "朋友玩的好的时候可以访问：" << building.m_BedRoom << endl;
}
void FriendClass::visitBadTime(Building &building)
{
    cout << "朋友玩的不好的时候可以访问：" << building.m_SittingRoom << endl;
    // cout << "朋友玩的不好的时候可以访问：" << building.m_BedRoom << endl;
}

int main()
{
    Building b1;
    FriendClass f1("Zhang San", 21);

    f1.visitGoodTime(b1);
    cout << endl;
    f1.visitBadTime(b1);

    system("pause");
    return 0;
}
