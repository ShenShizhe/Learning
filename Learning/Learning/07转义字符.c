#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <string.h>
int main_07(void)
{
    //求字符串"c:\test\32\test.c"的长度
    printf("%d\n", strlen("c:\test\32\test.c"));//运行结果：13 \t：转义字符  \32：一个八进制数字
    /*  /32作为八进制代表的那个十进制数字，作为ASCII码的值，对应的字符
        /32-->表示十进制数字26--->作为ASCII值代表的字符（向右的箭头）

    */
    //printf("%c\n",'\132');//Z
    printf("%c\n", '\x61');//a
    return 0;

}