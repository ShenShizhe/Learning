#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include "Function.h"


int main_89(void)
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

	//char  arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", strlen(arr));//随机值，【'\0'的位置不确定】
	//printf("%d\n", strlen(arr + 0));//同上
	////printf("%d\n", strlen(*arr));//error
	////printf("%d\n", strlen(arr[1]));//error
	//printf("%d\n", strlen(&arr));//随机值
	//printf("%d\n", strlen(&arr + 1));//随机值[-6]
	//printf("%d\n", strlen(&arr[0] + 1));//随机值[-1]


	//char arr[] = "abcded";
	//printf("%d\n", sizeof(arr));//7【计算数组的大小】
	//printf("%d\n", sizeof(arr + 0));//8【数组的首元素地址，地址的大小】
	//printf("%d\n", sizeof(*arr));//1【首元素的大小】
	//printf("%d\n", sizeof(arr[1]));//1【第二个元素的大小】
	//printf("%d\n", sizeof(&arr));//8【数组的地址】
	//printf("%d\n", sizeof(&arr + 1));//8【跳过整个数组后的地址】
	//printf("%d\n", sizeof(&arr[0] + 1));//8【第二个元素的地址】


	//char arr[] = "abcded";
	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr + 0));//6
	////printf("%d\n", strlen(*arr));//error【非法访问内存】
	////printf("%d\n", strlen(arr[1]));//error【同上】
	//printf("%d\n", strlen(&arr));//6
	//printf("%d\n", strlen(&arr + 1));//随机值
	//printf("%d\n", strlen(&arr[0] + 1));//5


	//char* p = "abcdef";
	//printf("%d\n", sizeof(p));//8【指针p的大小】
	//printf("%d\n", sizeof(p + 1));//8【计算字符‘b’的地址】
	//printf("%d\n", sizeof(*p));//1【第一个字符'a'】
	//printf("%d\n", sizeof(p[0]));//1【int arr[10];arr[0]==*(arr+0)-->p[0]==*(p+0)=='a'】
	//printf("%d\n", sizeof(&p));//8【p的地址】
	//printf("%d\n", sizeof(&p + 1));//8【p的地址+1】
	//printf("%d\n", sizeof(&p[0] + 1));//8【‘b’的地址】


	//char* p = "abcdef";
	//printf("%d\n", strlen(p));//6【实际上是a的地址】
	//printf("%d\n", strlen(p + 1));//5【同上】
	////printf("%d\n", strlen(*p));//error【非法的内存访问】
	////printf("%d\n", strlen(p[0]));//同上
	//printf("%d\n", strlen(&p));//随机值
	//printf("%d\n", strlen(&p + 1));//随机值
	//printf("%d\n", strlen(&p[0] + 1));//5【第一个元素+1】


	//二维数组
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48【3*4*4】
	printf("%d\n", sizeof(a[0][0]));//4【一个整形元素的大小】
	printf("%d\n", sizeof(a[0]));//16【第一行的大小】
	printf("%d\n", sizeof(a[0] + 1));//8【第一行第二个元素的地址】
	printf("%d\n", sizeof(*(a[0] + 1)));//4【第一行第二个元素的大小】
	printf("%d\n", sizeof(a + 1));//8【第二行地址】
	printf("%d\n", sizeof(*(a + 1)));//16【计算第二行的大小】
	printf("%d\n", sizeof(&a[0] + 1));//8【第二行地址】
	printf("%d\n", sizeof(*(&a[0] + 1)));//16【第二行的大小】
	printf("%d\n", sizeof(*a));//16【a是首元素地址，计算第一行的大小】
	printf("%d\n", sizeof(a[3]));//16


	/*
	1.sizeof(数组名),这里的数组名，表示整个数组，计算的是整个数组的大小
	2.&数组名，这里的数组名表示整个数组，取出的是整个数组的地址
	3.除此之外所有的数组名都表示首元素地址
	*/
	return 0;
}
