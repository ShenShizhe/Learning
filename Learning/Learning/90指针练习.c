#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "Function.h"


/*
写代码的三种境界：
1.看代码是代码
2.看代码是内存
3.看代码是代码
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

已知：结构体Test类型的变量大小是20个字节

假设p的值为0x100000,如下表达式的值分别为多少？

*/
int main__90__02(void)
{
	p = (struct Test*)0x100000;
	printf("%p\n", p + 0x1);//0000000000100014//0000000000100020
	printf("%p\n", (unsigned long)p + 0x1);//0000000000100001
	printf("%p\n", (unsigned int*)p + 0x1);//0000000000100004
	return 0;
}
//指针加减整数的运算：取决于整数的类型

//3.

int main__90__03(void)
{
	int a[4] = { 1,2,3,4 };
	int* ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);
	printf("%x,%x\n", ptr1[-1], *ptr2);//4,2000000
	return 0;
}