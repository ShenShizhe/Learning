#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include "Function.h"

//��ӡ�����Ƶ�����λ��ż��λ

//void print_bit(m)
//{
//	printf("����λ��\n");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & i);
//	}
//	printf("\nż��λ:\n");
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & i);
//	}
//}
//int main(void)
//{
//	int m = 0;
//	scanf("%d", &m);
//	print_bit(m);
//	return 0;
//}


//ʹ��ָ���ӡ����
void print_szzz(int* p, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d", *(p + i));
	}
}


int main_78(void)
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_szzz(arr, sz);
	return 0;
}


