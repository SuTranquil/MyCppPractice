#include <iostream>
using namespace std;

class Father
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son1:public Father // public 继承
{
    void func()
    {
        m_A = 10; // public -> public
        m_B = 10; // protected -> protected
        // m_C = 10; // private不可访问
    }
};
void test01()
{
    Son1 s1;
    s1.m_A = 10; // public可访问
    // s1.m_B = 10; // protected不可访问
    // s1.m_C = 10; // private不可访问
}

class Son2:protected Father // public 继承
{
    void func()
    {
        m_A = 10; // public -> protected
        m_B = 10; // protected -> protected
        // m_C = 10; // private不可访问
    }
};

void test02()
{
    Son2 s2;
    // s2.m_A = 10; // protected不可访问
    // s2.m_B = 10; // protected不可访问
    // s2.m_C = 10; // private不可访问
}

class Son3:private Father // private 继承
{
    void func()
    {
        m_A = 10; // public -> private
        m_B = 10; // protected -> private
        // m_C = 10; // private不可访问
    }
};

void test03()
{
    Son3 s3;
    // s3.m_A = 10; // private不可访问
    // s3.m_B = 10; // private不可访问
    // s3.m_C = 10; // private不可访问
}


int main()
{
    

    system("pause");
    return 0;
}
