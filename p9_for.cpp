#include <iostream>
using namespace std;

int main()
{
    cout << "拍桌子游戏" << endl;

    // string str_i = "0";
    // for(int i = 1;i < 101 ;i++)
    // {
    //     str_i = to_string(i);
    //     if(str_i.find('7') != string::npos || i % 7 == 0)
    //         cout << "拍桌子：" << i << endl;

    // }

    for(int i = 1;i < 101 ;i++)
    {
        if(i % 10 == 7 || i % 7 == 0 || i / 10 == 7)
            cout << "拍桌子：" << i << endl;
        else
            cout << i << endl;

    }

    system("pause");
    return 0;
}
