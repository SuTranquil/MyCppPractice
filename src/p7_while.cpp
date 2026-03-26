#include <iostream>
using namespace std;

int main()
{
    srand((unsigned int)time(NULL));
    int right_num = rand() % 100 + 1;

    int guess_num = 101;

    int count = 0;
    while(1)
    {
        cout << "请输入你猜的数字:" << endl;
        cin >> guess_num;

        if(guess_num > right_num)
            cout << "你猜的数字太大了!" << endl;
        else if(guess_num < right_num)
            cout << "你猜的数字太小了!" << endl;
        else
        {
            cout << "恭喜你，猜对了!" << endl;
            break;
        }
        count++;
    }

    cout << "程序结束," << "你总共猜了 " << count << " 次!" << endl;
    system("pause");

    return 0;
}