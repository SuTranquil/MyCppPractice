#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {4, 8, 2, 9, 3, 0, 10, 5};
    cout << "排序前：" << endl;
    for (int i = 0; i < 8; i++)
        cout << arr[i] << "  ";
    cout << endl;

    int temp = 0;
    for (int i = 0; i < 8 - 1; i++)
        for (int j = 0; j < 8 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    cout << "排序后：" << endl;
    for (int i = 0; i < 8; i++)
        cout << arr[i] << "  ";
    cout << endl;

    system("pause");
    return 0;
}
