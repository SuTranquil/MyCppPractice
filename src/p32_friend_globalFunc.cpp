#include <iostream>
using namespace std;

// 友元1：全局函数作友元

class Building
{
    friend void goodfriendFunc(Building &building); // 友元：使全局函数可以访问私有变量

public:
    string m_SittingRoom;
    Building()
    {
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
    }
private:
    string m_BedRoom;
};

void goodfriendFunc(Building& building)
{
    cout << "好朋友可以访问：" << building.m_SittingRoom << endl;
    cout << "好朋友可以访问：" << building.m_BedRoom << endl;
}

int main()
{
    Building b1;

    goodfriendFunc(b1);

    system("pause");
    return 0;
}
