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
	int* p = arr;//����������Ԫ�ص�ַ��

	for (int i = 0; i < 10; i++)
	{
		*(p + i) = 1;
	}

	return 0;
}