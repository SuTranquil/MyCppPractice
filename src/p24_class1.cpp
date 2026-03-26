#include <iostream>
using namespace std;

class Student
{
    public:
        string name;
        int age;

        void setName(string name2)
        {
            name = name2;
        }

        void setAge(int age2)
        {
            age = age2;
        }

        void printInfo(void)
        {
            cout << "name = " << name << endl;
            cout << "age = " << age << endl;
        }
};

int main()
{
    Student stu1;
    // stu1.name = "Zhang San";
    // stu1.age = 21;
    stu1.setName("Zhang San");
    stu1.setAge(21);

    stu1.printInfo();

    system("pause");
    return 0;
}
