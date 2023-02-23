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
int main(void)
{
	//导致野指针出现的原因：
	int a;//局部变量不初始化，默认是随机值

	//1、指针未初始化
	int* p1;//随机值


	//2、指针越界访问
	int arr[10] = { 0 };
	int* p1 = arr;
	for (int i = 1; i <= 11; i++)
	{
		*(p1++) = 1;
	}


	//3、指针指向的空间的已经被释放
	//int* p2 = test();
	//*p2 = 20;



	return 0;
}