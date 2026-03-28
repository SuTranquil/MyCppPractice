#include <iostream>
using namespace std;

class Person
{
    public:
        int m_Age;
        void printInfo(void)
        {
            cout << "This is a class info." << endl;
        }
        void printAge(void)
        {
            // 防止传入空指针，提高程序鲁棒性
            if(this==NULL)
                return;
            
            cout << m_Age << endl;
        }
};

int main()
{
    Person *p = NULL;

    p->printInfo(); // 空的类指针可以调用不涉及属性的简单方法

    p->printAge(); 
    // 因为 m_Age 默认为 this->m_Age ，而this指向为NULL

    system("pause");
    return 0;
}
