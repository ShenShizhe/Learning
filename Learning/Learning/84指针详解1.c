#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "Function.h"

/*
指针：

1.指针就是个变量，用来存放地址，地址唯一标识一块内存空间
2.指针是大小是固定的4/8个字节
3.指针是有类型的，指针的类型决定了指针的+-整数的步长，指针解引用操作的时候的权限
4.指针的运算
*/

//segmentfault.com---段错误
//www.stackoverflow.com
//int main(void)
//{
//	//char* p = "abcdef";//"abcdef是常量字符串"
//
//	const char* p = "abcdef";//"abcdef是常量字符串"
//	//*p = 'W';
//
//	printf("%s\n", p);
//
//
//	return 0;
//}

//int main(void)
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";//常量字符串
//	const char* p2 = "abcdef";
//	//if (arr1 == arr2)
//	if (p1 == p2)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//
//	return 0;
//}


//指针数组--本质为数组，用来存放指针
//int main(void)
//{
//	//int arr[10] = { 0 };//整形数组
//	//char ch[5] = { 0 };//字符数组
//
//	//int* parr[4];//存放整形指针的数组--简称：指针数组
//	//char* pch[5];//存放字符的指针数组--简称：指针数组
//
//
//	int a = 10, b = 20, c = 30, d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//
//	int i = 0;
//	for (i = 0; i < 4; i++)
//		printf("%d ", *(arr[i]));
//	return 0;
//}

int main_84(void)
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };


	int* parr[] = { arr1,arr2,arr3 };

	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", *(parr[i] + j));
		}
		printf("\n");
	}
	return 0;
}