#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include "Function.h"
/*
����һ���������飬��ɶ�����Ĳ�����
	1.ʵ�ֺ���init()��ʼ������Ϊȫ0
	2.ʵ��print()��ӡ�����ÿ��Ԫ��
	3.ʵ��reverse()�����������Ԫ�ص�����
*/


void Init(int arr[], int sz)
{

	for (int i = 0; i < sz; i++)
		arr[i] = 0;
}
void Print(int arr[], int sz)
{

	for (int i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
void Reverse(int arr[], int sz)//�������������±�궨�ķ���
{
	int left = 0, right = sz - 1;//ȷ������������±�
	while (left < right)//�жϽ�������
	{
		int temp = arr[left];//������ʱ����
		arr[left] = arr[right];
		arr[right] = temp;

		left++, right--;//������һ�������������Ԫ��
	}
}
int main_74(void)
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//Init(arr, sz);//�������ʼ��Ϊ0
	Print(arr, sz);
	Reverse(arr, sz);
	Print(arr, sz);
	return 0;
}