#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "Function.h"

/*
ָ�룺

1.ָ����Ǹ�������������ŵ�ַ����ַΨһ��ʶһ���ڴ�ռ�
2.ָ���Ǵ�С�ǹ̶���4/8���ֽ�
3.ָ���������͵ģ�ָ������;�����ָ���+-�����Ĳ�����ָ������ò�����ʱ���Ȩ��
4.ָ�������
*/

//segmentfault.com---�δ���
//www.stackoverflow.com
//int main(void)
//{
//	//char* p = "abcdef";//"abcdef�ǳ����ַ���"
//
//	const char* p = "abcdef";//"abcdef�ǳ����ַ���"
//	//*p = 'W';
//
//	printf("%s\n", p);
//
//
//	return 0;
//}

//int main(void)
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";//�����ַ���
//	const char* p2 = "abcdef";
//	//if (arr1 == arr2)
//	if (p1 == p2)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//
//	return 0;
//}


//ָ������--����Ϊ���飬�������ָ��
//int main(void)
//{
//	//int arr[10] = { 0 };//��������
//	//char ch[5] = { 0 };//�ַ�����
//
//	//int* parr[4];//�������ָ�������--��ƣ�ָ������
//	//char* pch[5];//����ַ���ָ������--��ƣ�ָ������
//
//
//	int a = 10, b = 20, c = 30, d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//
//	int i = 0;
//	for (i = 0; i < 4; i++)
//		printf("%d ", *(arr[i]));
//	return 0;
//}

int main_84(void)
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };


	int* parr[] = { arr1,arr2,arr3 };

	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", *(parr[i] + j));
		}
		printf("\n");
	}
	return 0;
}