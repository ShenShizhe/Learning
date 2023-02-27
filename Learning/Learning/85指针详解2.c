#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "Function.h"


//数组指针--实质为指针【指向数组的指针--可以存放数组的地址】
//int main(void)
//{
//	//int* p = NULL;//整形指针--指向整形的指针--可以存放整形的地址
//	//char* pc = NULL;//pc是字符指针--指向字符的指针--可以存放字符的地址
//
//	int arr[10] = { 0 };
//	/*
//	arr--首元素地址
//	&arr[0]--首元素地址
//	&arr--数组地址
//	*/
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//数组的地址要存起来[p就是一个数组指针]
//
//	return 0;
//}


//int main(void)
//{
//	/*char* arr[5];
//	char* (*pa)[5] = &arr;*/
//	/*
//	pa、【指针变量的名字】
//	*【说明pa是指针】
//	[5]【pa指向的数组是5个元素】
//	char*【pa指向的数组的元素类型是char*】
//	*/
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int(*pa)[10] = &arr;
//	int i = 0;
//
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//
//	}*/
//
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(*pa + i));//*pa==arr
//
//	//}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


void printsz1(int arr[3][5], int x, int y)
{
	int i = 0, j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
}
void printsz2(int(*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{

		int j = 0;
		for (j = 0; j < y; j++)
		{
			//printf("%d ", p[i][j]);
			//printf("%d ", *(p[i] + j));
			//printf("%d ", *(*((p + i) + j)));
			printf("%d ", (*p + i)[j]);
		}
		printf("\n");
	}
}
int main_85(void)
{

	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	//printf("%d", (arr, 3, 5));
	printsz1(arr, 3, 5);
	printsz2(arr, 3, 5);

	return 0;
}
/*
int arr[5];------------------arr是一个5个元素的整形数组
int *parr1[10];--------------parr1 是一个数组，数组有10个元素，每个元素的类型是int*,所有parr1是一个指针的数组
int (*parr2)[10];------------parr2 是一个指针，该指针指向了一个数组，数组有10个元素，每个元素的类型为int,所以parr2是数组指针
int (*parr3[10])[5];---------parr3是一个数组，该数组的有10个元素，每个元素是一个数组指针，该数组的指针指向的数组有5个元素，每个元素的int类型

*/




