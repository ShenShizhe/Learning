#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "Function.h"


/*
д��������־��磺
1.�������Ǵ���
2.���������ڴ�
3.�������Ǵ���
*/

//1.
int main__90__01(void)
{
	int a[5] = { 1,2,3,4,5 };
	int* ptr = (int*){ &a + 1 };
	printf("%d,%d\n", *(a + 1), *(ptr - 1));//2,5
	return 0;
}

//2.


struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
/*

��֪���ṹ��Test���͵ı�����С��20���ֽ�

����p��ֵΪ0x100000,���±��ʽ��ֵ�ֱ�Ϊ���٣�

*/
int main__90__02(void)
{
	p = (struct Test*)0x100000;
	printf("%p\n", p + 0x1);//0000000000100014//0000000000100020
	printf("%p\n", (unsigned long)p + 0x1);//0000000000100001
	printf("%p\n", (unsigned int*)p + 0x1);//0000000000100004
	return 0;
}
//ָ��Ӽ����������㣺ȡ��������������

//3.

int main__90__03(void)
{
	int a[4] = { 1,2,3,4 };
	int* ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);
	printf("%x,%x\n", ptr1[-1], *ptr2);//4,2000000
	return 0;
}