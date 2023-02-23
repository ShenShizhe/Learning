#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

int main_12(void)
{
    /*条件操作符
            exp1 ? exp2 : exp3
            如果exp1结果为真，则exp2执行，否则执行exp3
    */
    int a = 10, b = 20, max = 0;
    max = (a > b ? a : b);//20


    return 0;

}