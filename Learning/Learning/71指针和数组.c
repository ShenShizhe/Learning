#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include "Function.h"
int main_71(void)
{
	//指针和数组
	int arr[10] = { 0 };

	printf("%d\n", arr);//首元素地址
	printf("%d\n", arr + 1);//+4

	printf("%d\n", &arr[0]);//首元素地址
	printf("%d\n", &arr[0] + 1);//+4

	printf("%d\n", &arr);//首元素地址
	printf("%d\n", &arr + 1);//+40

	/*
	1.&arr-&数组名-数组名不是首元素的地址，数组名表示整个数组-&数组名，取出的是整个数组的地址
	2.sizeof(arr)-sizeof(数组名)-数组名表示整个数组-sizeof(数组名)计算整个数组的大小
	*/

	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		//printf("%p\t=========\t%p\n", p + i, &arr[i]);
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", *(p + i));
	}
	return 0;
}