#include <iostream>
using namespace std;

// address of local variable 'a' returned [-Wreturn-local-addr]
// int* fun(void)
// {
//     int a = 10;

//     return &a;
// }

int main()
{
    // int *p = fun();
    // cout << *p << endl;

    system("pause");
    return 0;
}
