#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>
#include "Function.h"
//1.
int main__91__01(void)
{
	unsigned long pulArray[] = { 6,7,8,9,10 };
	unsigned long* pulPtr;
	pulPtr = pulArray;
	*(pulPtr + 3) += 3;

	printf("%d,%d", *pulPtr, *(pulPtr + 3));//6,12
	return 0;
}
//2.写一个函数，逆序字符串的内容
int main__91__02(void)
{
	char arr[256] = { 0 };
	//scanf("%s", arr);
	gets(arr);//读取一行
	reverse(arr);
	printf("逆序后的字符串：%s\n", arr);

	return 0;
}
//3.计算求和，求Sn=a+aa+aaa+aaaa+aaaaa的前五项之和，其中a是一个数字【例如Sn=2+22+222+2222+22222】
int main__91__03(void)
{
	int a = 0, n = 0;
	scanf("%d%d", &a, &n);
	int sum = 0;
	int i = 0;

	int ret = 0;

	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}
//4.求一个区间的自幂数

int main__91__04(void)
{
	int i = 0;
	for (i = 0; i <= 99999999; i++)
	{
		//判断i是否为自幂数
		//1.计算i的位数，n位数
		int n = 1, temp = i, sum = 0;
		while (temp /= 10)
		{
			n++;
		}
		//2.计算i的每一位的n次方之和sum;
		temp = i;
		while (temp)
		{
			sum += (int)pow(temp % 10, n);
			temp /= 10;
		}


		//3.比较i==sum

		if (i == sum && i > 10)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
//5.用字符‘*’打印一个菱形
/*
	   *
	 * * *
   * * * * *
 * * * * * * *
   * * * * *
	 * * *
	   *

*/

int main__91__05(void)
{

	int line = 0;
	scanf("%d", &line);
	//打印上半部分
	int i = 0;
	for (i = 0; i < line; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//打印下半部分
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}