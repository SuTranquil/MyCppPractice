#include <iostream>
using namespace std;

int main()
{
    // 部分初始化，则自动初始化为0
    int arr[5] = {10,20,30};

    // 不填总数，自动计算长度
    int arr2[] = {10,20,30,40,50,60,70,80,90}; 
    int len =  sizeof(arr2)/sizeof(int);
    for(int i=0;i<len;i++)
        cout << arr2[i] << endl;

    system("pause");
    return 0;
}
