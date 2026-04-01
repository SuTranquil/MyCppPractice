#include <iostream>
using namespace std;

class Animal
{
public:
    //dospeak函数会静态绑定Animal的speak，导致传入子类时，仍然调用父类speak
    //解决：加关键词virtual，动态绑定（动态多态），子类重写speak即可
    virtual void speak() = 0; //纯虚函数，要求子类必须实现（否则子类也是抽象类），且Animal变为抽象类，不可实例化
};
class Cat:public Animal
{
public:
    void speak()
    {
        cout << "喵喵喵喵喵" << endl;
    }
};

class Dog:public Animal
{
public:
    void speak()
    {
        cout << "汪汪汪汪汪" << endl;
    }
};

void dospeak(Animal& animal)
{
    animal.speak();
}
void test()
{

    // 无virtual为1（空类）
    // 有virtual为8（x64系统，包含一个虚函数指针vfptr，指向一个虚函数表vftable，实现多态）
    cout << "size of animal:" << sizeof(Animal) << endl; 

    Cat cat;
    dospeak(cat);

    Dog dog;
    dospeak(dog);
}

int main() 
{
    test();

    system("pause");
    return 0;
}
