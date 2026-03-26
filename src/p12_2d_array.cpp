#include <iostream>
using namespace std;

int main()
{
    // 二维数组定义方式
    /*
    1. 数据类型 数组名[行][列];
    2. 数据类型 数组名[行][列] = {
        {数1, 数2},
        {数3, 数4}
    };
    3.数据类型 数组名[行][列] = {数1, 数2, 数3, 数4};
    4.数据类型 数组名[ ][列] = {数1, 数2, 数3, 数4};
    */
    int arr1[2][3];
    int arr2[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};
    int arr3[2][3] = {1, 2, 3, 4, 5, 6};
    int arr4[][3] = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << arr2[i][j] << "  ";
        cout << endl;
    }

    system("pause");
    return 0;
}
