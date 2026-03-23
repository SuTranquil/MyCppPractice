# MyCppPractice
This is where my journey into C++ programming began.
## 260320
1. HelloWorld
2. 注释
3. 变量
4. 常量
5. c++关键字
## 260321
1. 标识符命名规则
2. 整型
3. sizeof关键字
4. 实型(小数)
5. 字符型
6. 转义字符
7. 字符串类型(string)
8. 布尔类型
9. 数据的输入(cin)
10. 算数运算符
## 260322
1. 取模%(余数不能为0,小数不能取余)
2. 递增递减
3. 赋值、比较运算符
4. 逻辑运算符
5. if语句
6. 三目运算符
7. while语句，水仙花数
## 260323
1. switch语句
2. for循环
3. break语句
4. continue语句
5. 数组及数组名,数组找最大，数组逆置
6. 算法:冒泡排序
    ```cpp
    for (int i = 0; i < N - 1; i++)
        for (int j = 0; j < N - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    ```
7. 二维数组
8. 函数的定义和调用
9. 值传递
10. 函数的声明
---
## Problem
VScode无法进行多文件的编译  
0324要配置并学习使用CMake工具管理项目
   