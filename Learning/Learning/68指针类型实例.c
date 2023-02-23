#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include "Function.h"
int main_68(void)
{
	int arr[10] = { 0 };
	int* p = arr;//数组名（首元素地址）

	for (int i = 0; i < 10; i++)
	{
		*(p + i) = 1;
	}

	return 0;
}