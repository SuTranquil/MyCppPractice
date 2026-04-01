#include <iostream>
#include <fstream>
using namespace std;

void test()
{
    ifstream ifs;
    ifs.open("p36_test.txt",ios::in);
    if(!ifs.is_open())
    {
        cout << "读取文件有误" << endl;
        return;
    }

    // 第一种读取方式
    // char buf[1024] = {0};
    // while(ifs>>buf)
    // {
    //     cout << buf << endl;
    // }
    cout << "----------------------" << endl;
    //第二种读取方式
    string buffer;
    while(getline(ifs,buffer))
    {
        cout << buffer << endl;
    }
    ifs.close();
}

int main()
{
    test();

    system("pause");
    return 0;
}
