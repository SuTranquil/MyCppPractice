#include "p13_swap.h"

// 引用传递(可以交换)
void myswap(int& num1, int& num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;

}
