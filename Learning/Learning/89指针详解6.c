#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include "Function.h"


int main_89(void)
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

	//char  arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", strlen(arr));//���ֵ����'\0'��λ�ò�ȷ����
	//printf("%d\n", strlen(arr + 0));//ͬ��
	////printf("%d\n", strlen(*arr));//error
	////printf("%d\n", strlen(arr[1]));//error
	//printf("%d\n", strlen(&arr));//���ֵ
	//printf("%d\n", strlen(&arr + 1));//���ֵ[-6]
	//printf("%d\n", strlen(&arr[0] + 1));//���ֵ[-1]


	//char arr[] = "abcded";
	//printf("%d\n", sizeof(arr));//7����������Ĵ�С��
	//printf("%d\n", sizeof(arr + 0));//8���������Ԫ�ص�ַ����ַ�Ĵ�С��
	//printf("%d\n", sizeof(*arr));//1����Ԫ�صĴ�С��
	//printf("%d\n", sizeof(arr[1]));//1���ڶ���Ԫ�صĴ�С��
	//printf("%d\n", sizeof(&arr));//8������ĵ�ַ��
	//printf("%d\n", sizeof(&arr + 1));//8���������������ĵ�ַ��
	//printf("%d\n", sizeof(&arr[0] + 1));//8���ڶ���Ԫ�صĵ�ַ��


	//char arr[] = "abcded";
	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr + 0));//6
	////printf("%d\n", strlen(*arr));//error���Ƿ������ڴ桿
	////printf("%d\n", strlen(arr[1]));//error��ͬ�ϡ�
	//printf("%d\n", strlen(&arr));//6
	//printf("%d\n", strlen(&arr + 1));//���ֵ
	//printf("%d\n", strlen(&arr[0] + 1));//5


	//char* p = "abcdef";
	//printf("%d\n", sizeof(p));//8��ָ��p�Ĵ�С��
	//printf("%d\n", sizeof(p + 1));//8�������ַ���b���ĵ�ַ��
	//printf("%d\n", sizeof(*p));//1����һ���ַ�'a'��
	//printf("%d\n", sizeof(p[0]));//1��int arr[10];arr[0]==*(arr+0)-->p[0]==*(p+0)=='a'��
	//printf("%d\n", sizeof(&p));//8��p�ĵ�ַ��
	//printf("%d\n", sizeof(&p + 1));//8��p�ĵ�ַ+1��
	//printf("%d\n", sizeof(&p[0] + 1));//8����b���ĵ�ַ��


	//char* p = "abcdef";
	//printf("%d\n", strlen(p));//6��ʵ������a�ĵ�ַ��
	//printf("%d\n", strlen(p + 1));//5��ͬ�ϡ�
	////printf("%d\n", strlen(*p));//error���Ƿ����ڴ���ʡ�
	////printf("%d\n", strlen(p[0]));//ͬ��
	//printf("%d\n", strlen(&p));//���ֵ
	//printf("%d\n", strlen(&p + 1));//���ֵ
	//printf("%d\n", strlen(&p[0] + 1));//5����һ��Ԫ��+1��


	//��ά����
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48��3*4*4��
	printf("%d\n", sizeof(a[0][0]));//4��һ������Ԫ�صĴ�С��
	printf("%d\n", sizeof(a[0]));//16����һ�еĴ�С��
	printf("%d\n", sizeof(a[0] + 1));//8����һ�еڶ���Ԫ�صĵ�ַ��
	printf("%d\n", sizeof(*(a[0] + 1)));//4����һ�еڶ���Ԫ�صĴ�С��
	printf("%d\n", sizeof(a + 1));//8���ڶ��е�ַ��
	printf("%d\n", sizeof(*(a + 1)));//16������ڶ��еĴ�С��
	printf("%d\n", sizeof(&a[0] + 1));//8���ڶ��е�ַ��
	printf("%d\n", sizeof(*(&a[0] + 1)));//16���ڶ��еĴ�С��
	printf("%d\n", sizeof(*a));//16��a����Ԫ�ص�ַ�������һ�еĴ�С��
	printf("%d\n", sizeof(a[3]));//16


	/*
	1.sizeof(������),���������������ʾ�������飬���������������Ĵ�С
	2.&���������������������ʾ�������飬ȡ��������������ĵ�ַ
	3.����֮�����е�����������ʾ��Ԫ�ص�ַ
	*/
	return 0;
}
