#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include "Function.h"


//ͳ�ƶ�������1�ĸ���(����)
// ����һ
//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//������
//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//������
int count_bit_one(unsigned int n)
{
	int count = 0;
	while (n)
	{
		n &= n - 1;
		count++;
	}
}
int main_76(void)
{
	int a = 0;
	scanf("%d", &a);
	//дһ��������a�Ķ����ƣ����룩��ʾ���м���1
	int count = count_bit_one(a);

	printf("count=%d\n", count);
	//system("pause");//��ͣ
	return 0;

}




