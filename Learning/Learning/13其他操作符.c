#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

int Add(int x, int y)
{
    return x + y;
}


int main_13(void)
{
    /* []:�±����ò�����       ():�������ò�����   */
    int arr[10] = { 0 };
    arr[4];//[]:�±����ò�����
    int a = 10, b = 20;
    int sum = Add(a, b);//():�������ò�����
    printf("%d\n", sum);
    return 0;

}