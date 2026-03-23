#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {300,350,200,400,250};
    int max = arr[0];
    for(int i=1;i<5;i++)
    {
        if(arr[i]>max)
            max = arr[i];
    }
    cout << "数组中的最大值为："<<max<<endl;

    // 元素逆置
    int arr2[6] = {300,350,200,400,250,150};
    int len = sizeof(arr2)/sizeof(arr2[0]);
    int temp = 0;
    for(int i = 0;i<len/2;i++)
    {
        temp = arr2[i];
        arr2[i] = arr2[len-1-i];
        arr2[len-1-i] = temp;
    }
    cout<<"arr2排序后："<<endl;
    for(int i=0;i<len;i++)
        cout<<arr2[i]<<endl;

    system("pause");
    return 0;
}
