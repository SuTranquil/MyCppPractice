#include <iostream>
using namespace std;

// 常量
// 1.宏常量
#define Day 7
//2. const修饰的常量
const int Month = 12;

int main()
{

    cout << "一周共有" << Day << "天。"<< endl;
    cout << "一年共有" << Month << "个月。" << endl;

    system("pause");
    
    return 0;
}

