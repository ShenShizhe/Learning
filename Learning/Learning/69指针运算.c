#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include "Function.h"
int main_69(void)
{
	/*
	ָ��+-����
	ָ��-ָ��
	ָ��Ĺ�ϵ����
	*/

	//ָ�� + -����
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int* p = arr1;
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *p);
		p += 1;
	}
	printf("\n-------------------------------\n");
	//ָ�� - ָ��(��ַ-��ַ)
	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", &arr2[9] - &arr2[0]);
	//ָ��Ĺ�ϵ���㣨�Ƚϴ�С��
	printf("\n-------------------------------\n");
	//#define N_VALUES 5
	//	float values[N_VALUES];
	//	float* vp;
	//	for (vp = &values[N_VALUES]; vp > &values[0];)
	//	{
	//		*--vp = 0;
	//	}

	/*
	��׼�涨��
	����ָ��Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ�
	���ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽ�
	*/
	return 0;
}