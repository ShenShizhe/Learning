#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//选择语句
int main_14(void)
{
    int coding = 0;
    printf("你会去敲代码吗？（选择1 or 0）:>");
    scanf("%d", &coding);
    if (coding == 1)
    {
        printf("坚持，你会有好offer\n");
    }
    else
    {
        printf("放弃，回家卖红薯\n");
    }
    return 0;
}