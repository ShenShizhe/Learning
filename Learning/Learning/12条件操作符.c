#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

int main_12(void)
{
    /*����������
            exp1 ? exp2 : exp3
            ���exp1���Ϊ�棬��exp2ִ�У�����ִ��exp3
    */
    int a = 10, b = 20, max = 0;
    max = (a > b ? a : b);//20


    return 0;

}