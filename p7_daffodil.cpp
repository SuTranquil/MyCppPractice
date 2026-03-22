#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num = 100;
    int unit = 0; // 个位
    int tens = 0; // 十位 
    int hundreds = 0; // 百位
    while(num <1000)
    {
        unit = num % 10; // 个位
        tens = num / 10 % 10; // 十位
        hundreds = num / 100; // 百位

        if(pow(unit, 3) + pow(tens, 3) + pow(hundreds, 3) == num)
            cout << num << " 是水仙花数" << endl;

        num++;
    }

    system("pause");

    return 0;
}