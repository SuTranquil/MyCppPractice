#include <iostream>
#include <fstream>
using namespace std;

class Person
{
public:
    char m_Name[64];
    int m_Age;
};

void test01()
{
    Person p1 = {"张三", 18};
    ofstream ofs;
    ofs.open("p36_person.txt", ios::out | ios::binary);
    ofs.write((const char *)&p1, sizeof(p1));
    ofs.close();
}

void test02()
{
    Person p2 = {"", 0};
    ifstream ifs;
    ifs.open("p36_person.txt", ios::in | ios::binary);
    if(!ifs.is_open())
    {
        cout << "读取文件有误" << endl;
        return;
    }
    ifs.read((char *)&p2, sizeof(p2));
    ifs.close();

    cout << "姓名：" << p2.m_Name << endl;
    cout << "年龄：" << p2.m_Age << endl;
}

int main()
{
    // test01();
    test02();

    system("pause");
    return 0;
}
