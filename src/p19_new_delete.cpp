#include <iostream>
using namespace std;

//堆区数据由程序员开辟释放，开辟：new，释放：delete

// 1.基本语法
// 数据类型 *指针名 = new 同数据类型(值);
// delete 指针名;

int main()
{
    // 2.创建数组和删除(delete[] 数组名)
    int *arr = new int[10]{1,2,3,4,5,6,7,8,9,10};
    // for (int i = 0; i < 10;i++)
    //     arr[i] = i + 1;

    for (int i = 0; i < 10;i++)
        cout << arr[i] << endl;
    
    delete[] arr;

    
    system("pause");
    return 0;
}
