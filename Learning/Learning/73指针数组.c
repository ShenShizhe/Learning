#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include "Function.h"
int main_73(void)
{
	//ָ������

	//ָ������(����)--���ָ������顢����ָ��(ָ��)
	int a = 10, b = 20, c = 30;
	//int* pa = &a, pb = &b, pc = &c;
	/*
	��������--�������
	�ַ�����--����ַ�
	ָ������--���ָ��
	*/
	int* arr[3] = { &a,&b,&c };
	for (int i = 0; i < 3; i++)
	{

		printf("%d\n", *arr[i]);
	}


	return 0;
}