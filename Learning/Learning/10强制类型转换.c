#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

int main_10(void)
{
    //ǿ������ת��
    //int a = 3.14;//error,�ӡ�double��ת������int�������ܶ�ʧ����
    int a = (int)3.14;//ok
    printf("%d\n", a);//���н����3
    return 0;

}