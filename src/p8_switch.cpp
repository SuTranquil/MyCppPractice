#include <iostream>
using namespace std;

int main()
{
    cout << "请输入打分：" << endl;
    int score = 0;
    cin >> score;
    switch(score)
    {
        case 10:
            cout << "经典" << endl;
            break;
        case 9:
            cout << "优秀" << endl;
            break;
        default:
            cout << "还行" << endl;

    }
    system("pause");
    return 0;
}
