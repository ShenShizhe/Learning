#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include "Function.h"
int main_67(void)
{
	//ָ��
	int a = 0X11223344;
	int* pa = &a;
	char* pc = &a;
	printf("%p\n", pa);
	printf("%p\n", pa + 1);
	printf("%p\n", pc);
	printf("%p\n", pc + 1);
	//int a = 10;
	//int* p = &a;//ָ�����

	////ָ���ָ������
	//printf("%d\n", sizeof(char*));//8
	//printf("%d\n", sizeof(short*));//8
	//printf("%d\n", sizeof(int*));//8
	//printf("%d\n", sizeof(double*));//8
	//printf("%d\n", sizeof(float*));//8

	//int a = 0X11223344;
	//int* pa = &a;

	//*pa = 0;

	//int* pc = &a;
	//printf("%p\n", pa);
	//printf("%p\n", pc);

	//ָ�����;���ָ����н����ò���ʱ���ܹ����ʵĿռ�Ĵ�С
	/*
	 int*---4���ֽ�
	 char*---1���ֽ�
	 double*---8���ֽ�
	*/

	//ָ�����;�����ָ���ָ��Ĳ���
	/*
	int* +1-->4
	char* +1-->+1
	double* +1-->+8
	*/











	return 0;
}