#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include "Function.h"
int main_73(void)
{
	//指针数组

	//指针数组(数组)--存放指针的数组、数组指针(指针)
	int a = 10, b = 20, c = 30;
	//int* pa = &a, pb = &b, pc = &c;
	/*
	整形数组--存放整形
	字符数组--存放字符
	指针数组--存放指针
	*/
	int* arr[3] = { &a,&b,&c };
	for (int i = 0; i < 3; i++)
	{

		printf("%d\n", *arr[i]);
	}


	return 0;
}