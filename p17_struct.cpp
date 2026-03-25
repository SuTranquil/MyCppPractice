#include <iostream>
using namespace std;

// 定义结构体
struct Student
{
    string name;
    int age;
    float scores;
}s3={"王五",20,98.0f},s4={"赵六",18,95.5f};

// 嵌套结构体
struct Teacher
{
    int id;
    string name;
    int age;
    Student stu;
};

void printstu(const Student* stup)
{
    //stup->age = 200; //加入const修饰可防止对原数据的误修改
    cout << "姓名:" << stup->name << "  年龄:" << stup->age << "  分数:" << stup->scores << endl;
}

void bubble(Student stu[],int len)
{
    
}

int main()
{
    // 2.创建结构体变量3种方式，创建时struct可忽略
    
    //2.1 创建结构体变量方式1
    Student s1;
    s1.name = "张三";
    s1.age = 19;
    s1.scores = 89.5f;
    cout << "姓名:" << s1.name << "  年龄:" << s1.age << "  分数:" << s1.scores << endl;

    //2.2 创建结构体变量方式2
    Student s2 = {"李四", 21, 91.8};
    cout << "姓名:" << s2.name << "  年龄:" << s2.age << "  分数:" << s2.scores << endl;

    //2.3 创建结构体变量方式3，定义结构体时创建
    cout << "姓名:" << s3.name << "  年龄:" << s3.age << "  分数:" << s3.scores << endl;
    cout << "姓名:" << s4.name << "  年龄:" << s4.age << "  分数:" << s4.scores << endl;

    //3.结构体数组
    Student s[3] = {
        {"StuA", 23, 80.0f},
        {"StuB", 22, 85.4f},
        {"StuC", 21, 89.0f}};
    //如何使用
    for (int i = 0; i < 3;i++)
        cout << "姓名:" << s[i].name << "  年龄:" << s[i].age << "  分数:" << s[i].scores << endl;

    // 4.结构体指针
    Student StuP = {"StuP", 25, 92.0f};
    Student *p = &StuP;
    cout << ("(*p).访问:") << endl;
    cout << "姓名:" << (*p).name << "  年龄:" << (*p).age << "  分数:" << (*p).scores << endl;
    cout << ("p->访问:") << endl;
    cout << "姓名:" << p->name << "  年龄:" << p->age << "  分数:" << p->scores << endl;

    // 5.嵌套结构体使用
    Teacher tcher1 = {3124, "梁老师", 37, {"StuT", 18, 97.0f}};
    Teacher tcher2 = {3132, "吕老师", 41, StuP};
    cout << "id:" << tcher1.id << "  姓名:" << tcher1.name << "  年龄:" << tcher1.age << endl;
    cout << "学生姓名:" << tcher1.stu.name << "  年龄:" << tcher1.stu.age << "  分数:" << tcher1.stu.scores << endl;
    cout << "id:" << tcher2.id << "  姓名:" << tcher2.name << "  年龄:" << tcher2.age << endl;
    cout << "学生姓名:" << tcher2.stu.name << "  年龄:" << tcher2.stu.age << "  分数:" << tcher2.stu.scores << endl;

    system("pause");
    return 0;
}
