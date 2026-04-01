#include <iostream>
using namespace std;

class CPU
{
public:
    virtual void calculate() = 0;
    virtual ~CPU(){}
};
class VideoCard
{
public:
    virtual void display() = 0;
    virtual ~VideoCard(){}
};
class Memory
{
public:
    virtual void storage() = 0;
    virtual ~Memory(){}
};
class Intel:public CPU,public VideoCard
{
public:
    void calculate() override
    {
        cout << "Intel CPU正在计算..." << endl;
    }
    void display() override
    {
        cout << "Intel 显卡正在加速..." << endl;
    }
};
class AMD:public CPU,public VideoCard
{
public:
    void calculate() override
    {
        cout << "AMD CPU正在计算..." << endl;
    }
    void display() override
    {
        cout << "AMD 显卡正在加速..." << endl;
    }
};

class Nvidia:public VideoCard
{
    void display() override
    {
        cout << "Nvidia 显卡正在加速..." << endl;
    }
};
class Samsung:public Memory
{
    void storage() override
    {
        cout << "三星 内存正在存储..." << endl;
    }
};
class HaiLiShi:public Memory
{
    void storage() override
    {
        cout << "海力士 内存正在存储..." << endl;
    }
};

class Computer
{
private:
    CPU *m_Cpu;
    VideoCard *m_Videocard;
    Memory *m_Memory;
public:
    Computer(CPU *cpu,VideoCard *videocard,Memory *memory):
        m_Cpu(cpu),m_Videocard(videocard),m_Memory(memory){}
    ~Computer()
    {
        if(m_Cpu!=nullptr)
        {
            cout << "CPU已析构" << endl;
            delete m_Cpu;
            m_Cpu = nullptr;
        }
        if(m_Videocard!=nullptr)
        {
            cout << "显卡已析构" << endl;
            delete m_Videocard;
            m_Videocard = nullptr;
        }
        if(m_Memory!=nullptr)
        {
            cout << "内存已析构" << endl;
            delete m_Memory;
            m_Memory = nullptr;
        }
    }
    void Run()
    {
        m_Cpu->calculate();
        m_Videocard->display();
        m_Memory->storage();
    }
};

void test()
{
    Computer laptop(new AMD, new Nvidia, new Samsung);
    laptop.Run();
}

int main()
{
    test();

    system("pause");
    return 0;
}
