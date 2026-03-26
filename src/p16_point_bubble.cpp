#include <iostream>
using namespace std;

void mybubble(int *arr, int len);

void mybubble(int *arr, int len) //*(p+1)=p[1]
{
    int temp = 0;
    for (int i = 0; i < len - 1;i++)
    {
        for (int j = 0; j < len - 1 - i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// void mybubble(int *arr, int len)
// {
//     int temp = 0;
//     int *p = arr;
//     for (int i = 0; i < len - 1;i++)
//     {
//         p = arr;
//         for (int j = 0; j < len - 1 - i;j++)
//         {
//             if(*p>*(p+1))
//             {
//                 temp = *p;
//                 *p = *(p + 1);
//                 *(p + 1) = temp;
//             }
//             p++;
//         }
//     }
// }

int main()
{
    int array[8] = {28, 4, 18, 67, 33, 17, 87, 13};
    cout << "Before bubble:" << endl;
    for (int i = 0; i < 8;i++)
        cout << array[i] << "  ";
    cout << endl;

    mybubble(array, 8);

    cout << "After bubble:" << endl;
    for (int i = 0; i < 8;i++)
        cout << array[i] << "  ";
    cout << endl;

    system("pause");
    return 0;
}
