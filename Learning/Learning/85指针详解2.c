#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "Function.h"


//����ָ��--ʵ��Ϊָ�롾ָ�������ָ��--���Դ������ĵ�ַ��
//int main(void)
//{
//	//int* p = NULL;//����ָ��--ָ�����ε�ָ��--���Դ�����εĵ�ַ
//	//char* pc = NULL;//pc���ַ�ָ��--ָ���ַ���ָ��--���Դ���ַ��ĵ�ַ
//
//	int arr[10] = { 0 };
//	/*
//	arr--��Ԫ�ص�ַ
//	&arr[0]--��Ԫ�ص�ַ
//	&arr--�����ַ
//	*/
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//����ĵ�ַҪ������[p����һ������ָ��]
//
//	return 0;
//}


//int main(void)
//{
//	/*char* arr[5];
//	char* (*pa)[5] = &arr;*/
//	/*
//	pa����ָ����������֡�
//	*��˵��pa��ָ�롿
//	[5]��paָ���������5��Ԫ�ء�
//	char*��paָ��������Ԫ��������char*��
//	*/
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int(*pa)[10] = &arr;
//	int i = 0;
//
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//
//	}*/
//
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(*pa + i));//*pa==arr
//
//	//}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


void printsz1(int arr[3][5], int x, int y)
{
	int i = 0, j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
}
void printsz2(int(*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{

		int j = 0;
		for (j = 0; j < y; j++)
		{
			//printf("%d ", p[i][j]);
			//printf("%d ", *(p[i] + j));
			//printf("%d ", *(*((p + i) + j)));
			printf("%d ", (*p + i)[j]);
		}
		printf("\n");
	}
}
int main_85(void)
{

	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	//printf("%d", (arr, 3, 5));
	printsz1(arr, 3, 5);
	printsz2(arr, 3, 5);

	return 0;
}
/*
int arr[5];------------------arr��һ��5��Ԫ�ص���������
int *parr1[10];--------------parr1 ��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int*,����parr1��һ��ָ�������
int (*parr2)[10];------------parr2 ��һ��ָ�룬��ָ��ָ����һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�����Ϊint,����parr2������ָ��
int (*parr3[10])[5];---------parr3��һ�����飬���������10��Ԫ�أ�ÿ��Ԫ����һ������ָ�룬�������ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ�ص�int����

*/




