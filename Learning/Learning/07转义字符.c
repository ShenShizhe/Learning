#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <string.h>
int main_07(void)
{
    //���ַ���"c:\test\32\test.c"�ĳ���
    printf("%d\n", strlen("c:\test\32\test.c"));//���н����13 \t��ת���ַ�  \32��һ���˽�������
    /*  /32��Ϊ�˽��ƴ�����Ǹ�ʮ�������֣���ΪASCII���ֵ����Ӧ���ַ�
        /32-->��ʾʮ��������26--->��ΪASCIIֵ������ַ������ҵļ�ͷ��

    */
    //printf("%c\n",'\132');//Z
    printf("%c\n", '\x61');//a
    return 0;

}