#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "Function.h"
//int main(void)
//{
//	//字符指针
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";
//	//指针数组-数组-存放指针的数组
//	int* arr[10];
//	char* ch[5];
//	//数组指针-指向数组
//	//int* p3;//整形指针-指向整形的指针
//	//char* p4;//字符指针-指向字符的指针
//	int arr2[5];//数组
//	int(*pa)[5] = &arr2;//取出数组地址，pa就是一个数组指针
//
//	int(*parr3[10])[5];
//	return 0;
//}

//一维数组的传参
//void test(int arr[]) {}//ok
//void test(int arr[10]) {}//ok
//void test(int* arr) {}//ok
//void test2(int* arr[20]) {}//ok
//void test2(int** arr) {}//ok
//int main(void)
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	tetst2(arr2);
//	return 0;
//}

//二维数组的传参
//void test1(int arr[3][5]) {}//ok
//void test1(int arr[][5]) {}//ok
//void test1(int arr[3][]) {}//error
//void test1(int arr[][]) {}//error
//void test1(int *arr) {}//error
//void test1(int **arr) {}//error
//void test1(int (*arr)[5]) {}//ok

//int main(void)
//{
//	int arr[3][5] = { 0 };
//	test1(arr);//二维数组传参
//	return 0;
//}
/*
总结：二维数组的传参，函数形参的设计只能省略第一个[]内的数字

因为对于一个二维数组，可以不知道有多少行，但是必须要知道一行多少元素，这样才方便运算
*/

//一级指针传参
//void printperr(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main(void)
//
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printperr(p, sz);//一级指针p，传给函数
//	return 0;
//}


//当函数参数为一级指针时，函数能接收什么参数？
//void test1(int* p) {}
//void test2(char* p) {}
//int main(void)
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);//ok
//	test1(p1);//ok
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);//ok
//	test(pc);//ok
//	return 0;
//}


//二级指针
//void test(int** ptr) {}
//int main(void)
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);//ok
//	test(&p);//ok
//	int* arr[10];
//	test(arr);//ok,传参对象为指针数组
//	return 0;
//}

/*
数组指针--指向数组的指针
函数指针--指向函数的指针--存放函数地址的指针

*/
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//
//int main(void)
//{
//	int a = 10, b = 20;
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	//printf("%d\n", Add(a, b));
//	//&函数名与函数名都是函数的地址
//	//printf("%p\n", &add);//00007FF64DF814C9【函数的地址】
//	//printf("%p\n", add);
//
//	//函数指针
//	int(*pa)(int, int) = add;
//	printf("%d\n", pa(2, 3));//ok
//	printf("%d\n", (*pa)(2, 3));//ok
//	printf("%d\n", *pa(2, 3));//error
// 	printf("%d\n", (**pa)(2, 3));//ok
// 	printf("%d\n", (***pa)(2, 3));//ok

// 
//
//	return 0;
//
//}

//void printstr(char* str)
//{
//	printf("%s\n", str);
//}
//int main(void)
//{
//	void(*p)(char*) = printstr;
//	(*p)("hell world!");
//	return 0;
//}