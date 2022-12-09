#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include "Function.h"
int main_72(void)
{
	//二级指针
	int a = 10;
	int* pa = &a;//一级指针
	int** ppa = &pa;//二级指针
	int*** pppa = &ppa;//三级指针


	**ppa = 11;
	printf("%d\n", **ppa);
	printf("%d\n", a);

	return 0;
}