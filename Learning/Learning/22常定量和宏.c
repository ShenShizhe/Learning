#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
//�������ͺ�
//#define MAX 1000//define�����ʶ������
//#define ADD(x, y) ((x)+(y))//define�����

//�����������ֵ����д����
//int Max(int x, int y)
//{
//    return (x >= y ? x : y);
//}
    

//�����������ֵ�궨��д����
#define MAX(x,y)(x>y?x:y)
//extern int Max(int, int);
int main_22()
{
    int max1 ,max2 , a = 2, b = 4;
    max1 = Max(a, b);
    max2 = MAX(a, b);
    printf("Max=%d\tMAX=%d\n", max1, max2);

    return 0;
}