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



int main_48(void)
{
	//练习1：接受一个整数值(无符号)，按照打印顺序打印他的每一位。例如：1234,输出1 2 3 4.[Function.c————Sequential_printing]
	//unsigned int num = 0;
	//scanf("%d", &num);
	//Sequential_printing(num);

	//************************************************************************
	//练习2.编写函数不允许创建临时变量，求字符串的长度。[Function.c————my_strlen]
	char arr[] = "study";
	int len = my_strlen(arr);//arr传参值为第一个元素的地址，而非整个数组
	printf("len=%d\n", len);







	return 0;
}
