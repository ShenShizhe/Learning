#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
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

//4.
int main__90__04(void)
{
	int a[2][3] = { (0,1),(2,3),(4,5) };
	int* p;
	p = a[0];
	printf("%d", p[0]);//1
	return 0;
}
//5.
int main__90__05(void)
{
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//FFFFFFFFFFFFFFFC,-4
	//p[4][2]��p[4]��==*(p+4)+2    p[4][2]==*(*(p+4)+2)
	return 0;
}
//6.
int main__90__06(void)
{
	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	int* ptr1 = (int*)(&aa + 1);
	int* ptr2 = (int*)(*(aa + 1));

	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10,5


	return 0;
}

//7.

int main__90__07(void)
{
	char* a[] = { "work","at","alibaba" };
	char** pa = a;
	pa++;
	printf("%s\n", *pa);//at

	return 0;
}
//8.

int main__90__08(void)
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;

	printf("%s\n", **++cpp);//POINT
	printf("%s\n", *-- * ++cpp + 3);//ER
	printf("%s\n", *cpp[-2] + 3);//ST
	printf("%s\n", cpp[-1][-1] + 1);//EW

	return 0;
}