#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include "Function.h"
//test()
//{
//	int a = 10;
//	return &a;
//}
int main(void)
{
	//����Ұָ����ֵ�ԭ��
	int a;//�ֲ���������ʼ����Ĭ�������ֵ

	//1��ָ��δ��ʼ��
	int* p1;//���ֵ


	//2��ָ��Խ�����
	int arr[10] = { 0 };
	int* p1 = arr;
	for (int i = 1; i <= 11; i++)
	{
		*(p1++) = 1;
	}


	//3��ָ��ָ��Ŀռ���Ѿ����ͷ�
	//int* p2 = test();
	//*p2 = 20;



	return 0;
}