#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include "Function.h"

//乘法口诀表
//int print_muth_table(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_muth_table(n);
//	return 0;
//}


//编写一个函数reverse_string，将字符串的字符反向排列
// 
// 方法一
//int my_strlen1(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++, str++;
//	}
//	return count++;
//}
//void reverse_string(char arr[])
//{
//	//int left = 0, right = my_strlen1(arr) - 1;
//	int left = 0, right = my_strlen(arr) - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++, right--;
//	}
//}

//方法二

//void reverse_string(char arr[])
//{
//	char temp = arr[0];
//
//
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//	arr[len - 1] = temp;
//}
//
//int main(void)
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成他的数字之和
//int DigitSum(unsigned int num)
//{
//	if (num > 9)
//		return DigitSum(num / 10) + (num % 10);
//	else
//		return num;
//}
//
//
//int main(void)
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//

double Pow(int n, int k)
{
	//n^k=n*n(k-1)(k!=0)
	if (k < 0)
	{
		return (1.0 / Pow(n, -k));
	}
	else if (k == 0)
	{
		return 1;
	}
	else
		return n * Pow(n, k - 1);
}
int main_79(void)
{
	int n = 0, k = 0;
	scanf("%d%d", &n, &k);
	double ret = Pow(n, k);
	printf("ret=%lf\n", ret);
	return 0;
}



