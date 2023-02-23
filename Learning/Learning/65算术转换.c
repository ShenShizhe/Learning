#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include "Function.h"
int main_65(void)
{
	/*
	long double
	double
	float
	unsiged long int
	long int
	ussiged int
	int
	*/
	/*
	如果某个操作数的类型在上面这个列表中排名较低，那么首先要转换为另一个操作数的类型后执行运算

	警告：算术转换要合理，否则会有潜在问题

	*/

	float f = 3.14;
	int num = f;//隐式转换，会有潜在问题



	return 0;
}