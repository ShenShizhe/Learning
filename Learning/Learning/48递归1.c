# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
# include "Function.h"
//递归[程序自身调用]
/*
内存[栈区、堆区、静态区]
	栈区[局部变量、函数形参]
	堆区[动态开辟的内存(malloc、calloc)]
	静态区[全局变量、static修饰的变量]
*/
// 递归操作
// 会导致栈溢出[stack overflow]
// 网站：stackoverflow.com[程序员的知乎]
//int main(void)//
//{
//	printf("好好学习！\n");
//	main();
//	return 0;
//
//}


//练习：接受一个整数值(无符号)，按照打印顺序打印他的每一位。例如：1234,输出1 2 3 4.
int main(void)
{
	unsigned int num = 0;
	scanf("%d", &num);
	//递归实现
	print(num);



	return 0;
}