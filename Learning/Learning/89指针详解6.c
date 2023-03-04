#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include "Function.h"


int main(void)
{
	//	/*
	//	一维数组
	//
	//	1.sizeof（数组名）--数组名表示整个数组
	//	2.&数组名-数组名表示整个数组
	//
	//	*/
	//	int a[] = { 1,2,3,4 };
	//	printf("%d\n", sizeof(a));//16【数组总大小，单位：字节】
	//	printf("%d\n", sizeof(a + 0));//8【数组名，表示首元素地址】【a+0还是首元素地址，地址大小就是4/8个字节】
	//	printf("%d\n", sizeof(*a));//4【数组名，表示首元素地址】【*a】就是首元素
	//	printf("%d\n", sizeof(a + 1));//8【数组名，表示首元素地址】【a+1还是第2个元素地址，地址大小就是4/8个字节】
	//	printf("%d\n", sizeof(a[1]));//4【第二个元素大小】
	//	printf("%d\n", sizeof(&a));//8【&a取出的是数组的地址，但是数组的地址也是地址，地址大小就是4/8个字节】
	//	printf("%d\n", sizeof(*&a));//16【&a是数组的地址，数组的地址解引用访问的数组,sizeof计算就是整个数组的大小】
	//	printf("%d\n", sizeof(&a + 1));//8【&a是数组的地址，&a+1跳过整个数组，但还是地址】
	//	printf("%d\n", sizeof(&a[0]));//8【第一个元素地址】
	//	printf("%d\n", sizeof(&a[0] + 1));//8【第二个元素地址】

	//字符数组
	//char  arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6【数组的大小】
	//printf("%d\n", sizeof(arr + 0));//8【首元素的地址，arr+0依然是首元素的地址】
	//printf("%d\n", sizeof(*arr));//1【arr是首元素地址，*arr就是首元素，首元素是字符，大小是一个字节】
	//printf("%d\n", sizeof(arr[1]));//1【第二个元素的大小】
	//printf("%d\n", sizeof(&arr));//8【数组地址】
	//printf("%d\n", sizeof(&arr + 1));//8【跳过整个数组的地址】
	//printf("%d\n", sizeof(&arr[0] + 1));//8【第二个元素的地址】

	char  arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr));//随机值，【'\0'的位置不确定】
	printf("%d\n", strlen(arr + 0));//同上
	//printf("%d\n", strlen(*arr));//error
	//printf("%d\n", strlen(arr[1]));//error
	printf("%d\n", strlen(&arr));//随机值
	printf("%d\n", strlen(&arr + 1));//随机值[-6]
	printf("%d\n", strlen(&arr[0] + 1));//随机值[-1]



	return 0;
}
