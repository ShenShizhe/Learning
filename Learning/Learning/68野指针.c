#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include "Function.h"
//test()
//{
//	int a = 10;
//	return &a;
//}
int main_68(void)
{

	//野指针的成因

	//1.未初始化的指针变量
	//int* p;//局部变量未初始化，默认放随机值
	//*p = 20;//error,p未初始化


	//2.指针越界访问
	//int a[10] = { 0 };
	//int* P = a;
	//for (int i = 0; i <= 12; i++)
	//{
	//	//*p = i;
	//	//p++;
	//	*p++ = i;
	//}


	//3.指针指向的空间已经被释放

	//int* p = test();
	//printf("%d\n", *p);


	//如何，避免空指针
	/*
	1.指针初始化
	2.小心指针越界
	3.指针指向空间释放即置为NULL
	4.指针使用之前检查有效性
	*/

	return 0;
}