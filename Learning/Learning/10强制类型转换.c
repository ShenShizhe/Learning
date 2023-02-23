#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

int main_10(void)
{
    //强制类型转换
    //int a = 3.14;//error,从“double”转换到“int”，可能丢失数据
    int a = (int)3.14;//ok
    printf("%d\n", a);//运行结果：3
    return 0;

}