#include <iostream>
#include <fstream>
using namespace std;

void test()
{
    ofstream ofs;
    ofs.open("p36_test.txt", ios::out);
    ofs << "Hello World!" << endl;
    ofs << "姓名：张三" << endl;
    ofs << "年龄：18" << endl;
    ofs.close();
}

int main()
{
    test();

    system("pause");
    return 0;
}
