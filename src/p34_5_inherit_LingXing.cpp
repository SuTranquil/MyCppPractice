#include <iostream>
using namespace std;

/*
菱形继承：Animal
        /      \
      Sheep    Tuo
        \       /
        SheepTuo
问题：基类Animal中的Age在Sheep和Tuo中各有一份，SheepTuo多继承时有两份Age，既不明确也浪费空间，
      st.m_Age报错“不明确”，只能通过st.父类名::m_Age用两份。一个SheepTuo占8字节
解决方案：Sheep和Tuo类使用虚继承，关键词virtual，Animal成为虚基类，底层通过虚基指针(vbptr)+虚基列表(vbtable)使得
         Sheep和Tuo中的m_Age都指向SheepTuo中的m_Age，只有一份，可用st.m_Age。一个SheepTuo占24字节
*/

class Animal
{
public:
    int m_Age;
};

class Sheep:virtual public Animal{
};
class Tuo:virtual public Animal{
};

class SheepTuo:public Sheep,public Tuo{
};

void test()
{
    SheepTuo st;
    st.Sheep::m_Age = 18;
    st.Tuo::m_Age = 28;

    cout << "size of SheepTuo:" << sizeof(st) << endl;
    cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
    cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
    cout << "st.m_Age = " << st.m_Age << endl; // 不用虚继承，会报错
}

int main()
{
    test();

    system("pause");
    return 0;
}
