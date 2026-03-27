#include <iostream>
using namespace std;

class Cube
{
private:
    float m_L, m_H, m_W;
public:
    void setSide(float o_L,float o_H,float o_W)
    {
        if(o_L>0 && o_H>0 && o_W>0)
        {
            m_L = o_L;
            m_H = o_H;
            m_W = o_W;
        }
        else
            cout << "数据非法，请重新输入！" << endl;
    }
    float get_L(void)
    {
        return m_L;
    }
    float get_H(void)
    {
        return m_H;
    }
    float get_W(void)
    {
        return m_W;
    }
    float getArea(void)
    {
        return 2 * (m_L * m_H + m_H * m_W + m_W * m_L);
    }
    float getVolume(void)
    {
        return m_L * m_H * m_W;
    }
    bool equal(Cube& c2)
    {
        return (m_L == c2.get_L() && m_H == c2.get_H() && m_W == c2.get_W());
    }

};

bool CubeEqual(Cube& c1,Cube& c2)
{
    return (c1.get_L() == c2.get_L() && c1.get_H() == c2.get_H() && c1.get_W() == c2.get_W());
}


int main()
{
    Cube cub1, cub2;
    cub1.setSide(3.5f,4.5f,5.5f);
    cub2.setSide(3.5f,4.5f,5.5f);
    cout << "cub1面积：" << cub1.getArea() << "  体积：" << cub1.getVolume() << endl;
    cout << "cub2面积：" << cub2.getArea() << "  体积：" << cub2.getVolume() << endl;
    cout << "1:cub1是否等于cub2？" << (cub1.equal(cub2) ? "True" : "False") << endl;
    cout << "2:cub1是否等于cub2？" << (CubeEqual(cub1,cub2)?"True":"False") << endl;


    system("pause");
    return 0;
}
