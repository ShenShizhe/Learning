#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include "Function.h"
int main_69(void)
{
	/*
	指针+-整数
	指针-指针
	指针的关系运算
	*/

	//指针 + -整数
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int* p = arr1;
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *p);
		p += 1;
	}
	printf("\n-------------------------------\n");
	//指针 - 指针(地址-地址)
	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", &arr2[9] - &arr2[0]);
	//指针的关系运算（比较大小）
	printf("\n-------------------------------\n");
	//#define N_VALUES 5
	//	float values[N_VALUES];
	//	float* vp;
	//	for (vp = &values[N_VALUES]; vp > &values[0];)
	//	{
	//		*--vp = 0;
	//	}

	/*
	标准规定：
	允许指向元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，
	但是不允许与指向第一个元素之前的那个内存位置的指针进行比较
	*/
	return 0;
}