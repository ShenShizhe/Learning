# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
//函数的声明
# include "Function.h"
//链式访问[把一个函数的返回值作为另外一个函数的参数]
int main_47(void)
{
	//int len = 0;
	////1
	//len = strlen("abc");
	//printf("%d\n", len);
	////链式访问
	//printf("%d\n", strlen("abc"));


	//printf("%d", printf("%d", printf("%d", 43)));

	int a = 10, b = 20;
	int sum = Add_two_number(a, b);
	printf("%d\n", sum);
	return 0;

}