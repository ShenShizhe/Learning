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
	//����ָ��
	int a = 10;
	int* pa = &a;//һ��ָ��
	int** ppa = &pa;//����ָ��
	int*** pppa = &ppa;//����ָ��


	**ppa = 11;
	printf("%d\n", **ppa);
	printf("%d\n", a);

	return 0;
}