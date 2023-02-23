#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

int main_09(void)
{
    //单目操作符

    int a = 0;
    int b = ~a;// ~:按位取反(二进制位) 此时的b是有符号整形
    /*

        原码、反码(原码符号不变，其他位置取反)、补码(反码加1)

        负数在内存中存储的时候，存储的是二进制的补码，首位为符号位(1表示该数为一个负数)

        int a = 0------------------>0000000000|0000000000|0000000000|00
        int b = ~a-------补码------>1111111111|1111111111|1111111111|11
        补码减1得到反码------------->1111111111|1111111111|1111111111|10
        符号不变，其他位置按位取反--->1000000000|0000000000|0000000000|01

    */
    printf("%d\n", b);//-1
    return 0;

}