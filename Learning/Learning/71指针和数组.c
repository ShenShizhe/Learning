#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include "Function.h"
int main_71(void)
{
	//ָ�������
	int arr[10] = { 0 };

	printf("%d\n", arr);//��Ԫ�ص�ַ
	printf("%d\n", arr + 1);//+4

	printf("%d\n", &arr[0]);//��Ԫ�ص�ַ
	printf("%d\n", &arr[0] + 1);//+4

	printf("%d\n", &arr);//��Ԫ�ص�ַ
	printf("%d\n", &arr + 1);//+40

	/*
	1.&arr-&������-������������Ԫ�صĵ�ַ����������ʾ��������-&��������ȡ��������������ĵ�ַ
	2.sizeof(arr)-sizeof(������)-��������ʾ��������-sizeof(������)������������Ĵ�С
	*/

	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		//printf("%p\t=========\t%p\n", p + i, &arr[i]);
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", *(p + i));
	}
	return 0;
}