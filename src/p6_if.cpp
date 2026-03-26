#include <iostream>
using namespace std;

int main()
{
    int weight1 = 0;
    int weight2 = 0;
    int weight3 = 0;

    cout << "请输入第一只小猪的体重:" << endl;
    cin >> weight1;
    cout << "请输入第二只小猪的体重:" << endl;
    cin >> weight2;
    cout << "请输入第三只小猪的体重:" << endl;
    cin >> weight3;

    if(weight1 > weight2)
    {
        if(weight1 > weight3)
            cout << "第一只小猪最重，体重为:" << weight1 << endl;
        else
            cout << "第三只小猪最重，体重为:" << weight3 << endl;
    }
    else
    {
        if(weight2 > weight3)
            cout << "第二只小猪最重，体重为:" << weight2 << endl;
        else
            cout << "第三只小猪最重，体重为:" << weight3 << endl;
    }

    system("pause");
    return 0;

}