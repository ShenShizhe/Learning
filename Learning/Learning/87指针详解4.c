#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "Function.h"

//代码1
//(*(void)(*)()0)();
// //把0强制转换成：void(*)()函数指针类型-0就是一个函数的地址【调用0地址处的函数】
// 代码2
//void (*signal(int, void(*)(int)))(int);
/*
signal是一个声明函数
signal函数的参数有两个【int】【函数指针】，该函数指针指向的函数的参数为【int】,返回类型为【void】
signal函数的返回类型也是一个函数指针，该函数指针指向的函数的参数为【int】,返回类型为【void】

*/
//typedef unsigned int uint;//【typedef】重命名标识符
//typedef void(*)int pfun_t;//error
//简化写法
//typedef void(*pfun_t)(int);//ok,将【void(*)(int)】重命名为pfun_t
//pfun_t signal(int, pfun_t);

//
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
////函数指针数组
//int main(void)
//{
//	//指针数组
//	int* arr[5];//指针数组
//
//	int(*pa)(int, int) = add;//【add、sub、mul、div】函数类型一致
//	//需要一个数组，该数组可以存放四个函数的地址--函数指针的数组
//	int(*parr[4])(int, int) = { add,sub,mul,div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));//5 -1 6 0
//	}
//	return 0;
//}


//my_srtrcpy(char* dest, const char* src);
//
////1.写一个函数指针pf,指向my_srtrcpy
//char* (*pf)(char*, const char*);
//
////2.写一个函数指针数组，能够存放4个my_srtrcpy函数的地址
//char* (*pfArr[4])(char*, const char*);



//计算器
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//
//int xhy(int x, int y)
//{
//	return x ^ y;
//}
//void menu_jsq()
//{
//	printf("********************************************\n");
//	printf("********************************************\n");
//	printf("**  0.exit 1.add  2.sum 3.mul 4.div 5.xhy **\n");
//	printf("********************************************\n");
//	printf("********************************************\n");
//
//}
//int main(void)
//{
//	int input = 0, x = 0, y = 0;
//	do
//	{
//		menu_jsq();
//		printf("请选择：>>>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 0:
//			printf("已退出\n");
//			break;
//		case 1:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", add(x, y));
//			break;
//		case 2:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", div(x, y));
//			break;
//		default:
//			printf("您的选择有误,请重新选择！！！\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//int fun3(int x)
//{
//	static int a = 3;
//	a = a + x;
//	return a;
//}
//
//

//指向函数指针数组的指针
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//
//int xhy(int x, int y)
//{
//	return x ^ y;
//}
//void menu_jsq()
//{
//	printf("********************************************\n");
//	printf("********************************************\n");
//	printf("**  0.exit 1.add  2.sum 3.mul 4.div 5.xhy **\n");
//	printf("********************************************\n");
//	printf("********************************************\n");
//
//}
//void calc(int (*pf)(int, int))
//{
//	int x = 0, y = 0;
//	printf("请输入两个操作数：》");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main(void)
//{
//	int input = 0, x = 0, y = 0;
//	do
//	{
//		menu_jsq();
//		printf("请选择：>>>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 0:
//			printf("已退出\n");
//			break;
//		case 1:
//			calc(add);
//			break;
//		case 2:
//			calc(sub);
//			break;
//		case 3:
//			calc(mul);
//			break;
//		case 4:
//			calc(div);
//			break;
//		case 5:
//			calc(xhy);
//			break;
//		default:
//			printf("您的选择有误,请重新选择！！！\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//指向函数指针数组的指针

//int hs(int x, int y)
//{
//	return x + y;
//}
//int main(void)
//{
//
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//取出数组的地址
//	int (*pfArr[4])(int, int);//pfArr是一个数组--函数指针数组
//	int(*(*ppfArr[4]))(int, int) = &pfArr;//ppfArr是一个指向函数指针数组的指针
//	//ppfArr是一个数组指针，指针指向的数组有四个元素
//	//指向的数组的每个元素的类型是一个函数指针【int(*)(int ,int )】
//
//	return 0;
//}



