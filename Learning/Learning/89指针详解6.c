#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include "Function.h"


int main(void)
{
	//	/*
	//	һά����
	//
	//	1.sizeof����������--��������ʾ��������
	//	2.&������-��������ʾ��������
	//
	//	*/
	//	int a[] = { 1,2,3,4 };
	//	printf("%d\n", sizeof(a));//16�������ܴ�С����λ���ֽڡ�
	//	printf("%d\n", sizeof(a + 0));//8������������ʾ��Ԫ�ص�ַ����a+0������Ԫ�ص�ַ����ַ��С����4/8���ֽڡ�
	//	printf("%d\n", sizeof(*a));//4������������ʾ��Ԫ�ص�ַ����*a��������Ԫ��
	//	printf("%d\n", sizeof(a + 1));//8������������ʾ��Ԫ�ص�ַ����a+1���ǵ�2��Ԫ�ص�ַ����ַ��С����4/8���ֽڡ�
	//	printf("%d\n", sizeof(a[1]));//4���ڶ���Ԫ�ش�С��
	//	printf("%d\n", sizeof(&a));//8��&aȡ����������ĵ�ַ����������ĵ�ַҲ�ǵ�ַ����ַ��С����4/8���ֽڡ�
	//	printf("%d\n", sizeof(*&a));//16��&a������ĵ�ַ������ĵ�ַ�����÷��ʵ�����,sizeof���������������Ĵ�С��
	//	printf("%d\n", sizeof(&a + 1));//8��&a������ĵ�ַ��&a+1�����������飬�����ǵ�ַ��
	//	printf("%d\n", sizeof(&a[0]));//8����һ��Ԫ�ص�ַ��
	//	printf("%d\n", sizeof(&a[0] + 1));//8���ڶ���Ԫ�ص�ַ��

	//�ַ�����
	//char  arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6������Ĵ�С��
	//printf("%d\n", sizeof(arr + 0));//8����Ԫ�صĵ�ַ��arr+0��Ȼ����Ԫ�صĵ�ַ��
	//printf("%d\n", sizeof(*arr));//1��arr����Ԫ�ص�ַ��*arr������Ԫ�أ���Ԫ�����ַ�����С��һ���ֽڡ�
	//printf("%d\n", sizeof(arr[1]));//1���ڶ���Ԫ�صĴ�С��
	//printf("%d\n", sizeof(&arr));//8�������ַ��
	//printf("%d\n", sizeof(&arr + 1));//8��������������ĵ�ַ��
	//printf("%d\n", sizeof(&arr[0] + 1));//8���ڶ���Ԫ�صĵ�ַ��

	char  arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr));//���ֵ����'\0'��λ�ò�ȷ����
	printf("%d\n", strlen(arr + 0));//ͬ��
	//printf("%d\n", strlen(*arr));//error
	//printf("%d\n", strlen(arr[1]));//error
	printf("%d\n", strlen(&arr));//���ֵ
	printf("%d\n", strlen(&arr + 1));//���ֵ[-6]
	printf("%d\n", strlen(&arr[0] + 1));//���ֵ[-1]



	return 0;
}
