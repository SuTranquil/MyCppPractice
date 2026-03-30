#include <iostream>
using namespace std;

class Person
{
public:
    string m_Name;
    int m_Age;
    // Person(string name,int age):m_Name(name),m_Age(age){}
    void printIdentity()
    {
        cout << "姓名：" << m_Name << "  年龄：" << m_Age << endl;
    }
};

class Teachar:public Person
{
public:
    string m_tID;
    void printTeacharInfo()
    {
        cout << "Teachar ID：" << m_tID << endl;
    }
};

class Student:public Person
{
public:
    string m_sID;
    void printStudentInfo()
    {
        cout << "Student ID：" << m_sID << endl;
    }
};

int main()
{
    Teachar t1;
    Student s1;
    t1.printIdentity();
    t1.printTeacharInfo();
    cout << "-------------------------" << endl;
    s1.printIdentity();
    s1.printStudentInfo();

    system("pause");
    return 0;
}
