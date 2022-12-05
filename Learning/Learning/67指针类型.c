#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include "Function.h"
int main_67(void)
{
	//指针
	int a = 0X11223344;
	int* pa = &a;
	char* pc = &a;
	printf("%p\n", pa);
	printf("%p\n", pa + 1);
	printf("%p\n", pc);
	printf("%p\n", pc + 1);
	//int a = 10;
	//int* p = &a;//指针变量

	////指针和指针类型
	//printf("%d\n", sizeof(char*));//8
	//printf("%d\n", sizeof(short*));//8
	//printf("%d\n", sizeof(int*));//8
	//printf("%d\n", sizeof(double*));//8
	//printf("%d\n", sizeof(float*));//8

	//int a = 0X11223344;
	//int* pa = &a;

	//*pa = 0;

	//int* pc = &a;
	//printf("%p\n", pa);
	//printf("%p\n", pc);

	//指针类型决定指针进行解引用操作时，能够访问的空间的大小
	/*
	 int*---4个字节
	 char*---1个字节
	 double*---8个字节
	*/

	//指针类型决定了指针的指针的步长
	/*
	int* +1-->4
	char* +1-->+1
	double* +1-->+8
	*/











	return 0;
}