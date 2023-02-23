#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include "Function.h"

//将数组A与数组B进行数组元素交换(数组大小相同)


int main_75(void)
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,10 };
	//int temp[5] = { 0 };
	int temp = 0, sz = sizeof(arr1) / sizeof(arr1[0]);
	for (int i = 0; i < sz; i++)
	{
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}

	for (int i = 0; i < sz; i++)
		printf("%d ", arr1[i]);
	printf("\n");
	for (int i = 0; i < sz; i++)
		printf("%d ", arr2[i]);
	printf("\n");

	return 0;
}

//求代码运行后的值
//int main(void)
//{
//	/*int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;*/
//
//	//0 0 3 4 5
//
//
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//
//	//11223300
//}
