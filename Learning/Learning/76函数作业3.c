#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include "Function.h"


//统计二进制中1的个数(补码)
// 方法一
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
//方法二
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
//方法三
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
	//写一个函数求a的二进制（补码）表示中有几个1
	int count = count_bit_one(a);

	printf("count=%d\n", count);
	//system("pause");//暂停
	return 0;

}




