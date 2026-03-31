#include <iostream>
using namespace std;

class AbstractDrinking
{
public:
    virtual void Boil() = 0;
    virtual void Brew() = 0;
    virtual void PourInCup() = 0;
    virtual void PutSomething() = 0;
    void makedrinking()
    {
        Boil();
        Brew();
        PourInCup();
        PutSomething();
    }
};

class Coffer:public AbstractDrinking
{
public:
    void Boil() 
    {
        cout << "煮水到90度" << endl;
    }
    void Brew()
    {
        cout << "分两次冲泡" << endl;
    }
    void PourInCup()
    {
        cout << "将咖啡倒入马克杯中" << endl;
    }
    void PutSomething()
    {
        cout << "放入牛奶和糖" << endl;
    }
};

class Tea:public AbstractDrinking
{
public:
    void Boil() 
    {
        cout << "煮水到100度" << endl;
    }
    void Brew()
    {
        cout << "分三次冲泡" << endl;
    }
    void PourInCup()
    {
        cout << "将水倒入茶杯中" << endl;
    }
    void PutSomething()
    {
        cout << "放入枸杞" << endl;
    }
};

void dodrinking(AbstractDrinking& abd)
{
    abd.makedrinking();
}

void test()
{
    Coffer *cff = new Coffer;
    dodrinking(*cff);
    delete cff;
    cout << "----------" << endl;
    Tea *tea = new Tea;
    dodrinking(*tea);
    delete tea;

}

int main()
{
    test();

    system("pause");
    return 0;
}
