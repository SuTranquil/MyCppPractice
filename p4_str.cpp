#include <iostream>
using namespace std;

int main()
{

    //1、C风格字符串
    //注意[],以及" "
    char str1[] = "Hello C++!";
    cout << str1 <<endl;
    //2、C++风格字符串
    //建议包含<string>头文件
    string str2 = "Hello C++!";
    cout << str2 << endl;

    system("pause");
    
    return 0;
}
