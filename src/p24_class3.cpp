#include <iostream>
#include <cmath>
using namespace std;

class Point
{
private:
    int m_x, m_y;
public:
    void setPoint(int x,int y)
    {
        m_x = x;
        m_y = y;
    }
    int getCenterX(void)
    {
        return m_x;
    }
    int getCenterY(void)
    {
        return m_y;
    }
};

class Circle
{
private:
    int m_x, m_y, m_r;
public:
    void setCenter(int x,int y)
    {
        m_x = x;
        m_y = y;
    }
    void setR(int r)
    {
        if(r>0)
            m_r = r;
        else
            cout << "数据非法，请重新输入！" << endl;
    }
    int getCenterX(void)
    {
        return m_x;
    }
    int getCenterY(void)
    {
        return m_y;
    }
    int getR(void)
    {
        return m_r;
    }
    string judgePoint(Point& pt)
    {
        int dtce = pow(pt.getCenterX() - m_x, 2) + pow(pt.getCenterY() - m_y, 2);
        if(dtce>m_r*m_r)
            return "点在圆外";
        else if(dtce==m_r*m_r)
            return "点在圆上";
        else
            return "点在圆内";
    }
};


int main()
{
    Circle c1;
    Point pt1, pt2, pt3;
    c1.setCenter(1, 1);
    c1.setR(1);
    pt1.setPoint(0, 0);
    pt2.setPoint(0, 1);
    pt3.setPoint(1, 1);

    cout << "Point1与Circle的关系：" << c1.judgePoint(pt1) << endl;
    cout << "Point2与Circle的关系：" << c1.judgePoint(pt2) << endl;
    cout << "Point3与Circle的关系：" << c1.judgePoint(pt3) << endl;

    system("pause");
    return 0;
}
