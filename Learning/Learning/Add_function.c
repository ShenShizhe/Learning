# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <string.h>
# include <Windows.h>
# include <stdlib.h>
//1.两个数相加
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
//2.求两个数最大值
int Max(int x, int y)
{
	return (x >= y ? x : y);
}
//3.判断一个数是否为奇数
int Judgment_odd_number(int a)
{
	if (a % 2 == 1)
		printf("该数是一个奇数\n");
	else
		printf("该数不是奇数\n");
	return 0;
}
//4.输出1~X之间的奇数
int Odd_number_x(int x)
{
	int i = 1;
	while (i < x)
	{
		printf("%d  ", i);
		i += 2;
	}
	return 0;
}
//5.switch确定星期
int Week(void)
{
	int day = 0;
	printf("\n请输入1~7的任意一个数字：");
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("今天是星期一\n");
		break;
	case 2:
		printf("今天是星期二\n");
		break;
	case 3:
		printf("今天是星期三\n");
		break;
	case 4:
		printf("今天是星期四\n");
		break;
	case 5:
		printf("今天是星期五\n");
		break;
	case 6:
		printf("今天是星期六\n");
		break;
	case 7:
		printf("今天是星期天\n");
		break;
	default:
		printf("您输入有误，不在规定范围内");
		break;
	}
	return 0;
}
//6.switch确定是否为工作日
int Work(void)
{
	int day = 0;
	printf("\n请输入1~7的任意一个数字：");
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("今天是工作日\n");
		break;
	case 6:
	case 7:
		printf("今天是休息日\n");
		break;
	default:
		printf("您输入有误，不在规定范围内");
		break;
	}
	return 0;
}
//7.在屏幕上打印1~x的数字
int Number_x(int x)
{
	int i = 1;
	while (i <= x)
	{
		printf("%d ", i);
		i++;
	}
	return 0;
}
//8.计算n的阶乘
int Factorial_n(int n)
{
	int factorial = 1;
	for (int i = 1; i <= n; i++)
		factorial *= i;
	printf("%d\n", factorial);
	return 0;
}
//9.计算1！+2！+3！+……+10!(1~n的阶乘和)
int Factorial_1n(int x)
{
	int j = 0, ret = 1, sum = 0;
	for (j = 1; j <= x; j++)
	{
		ret = ret * j;
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}
//10.从大到小输出三个数
int number_max_min(void)
{
	int number1 = 0, number2 = 0, number3 = 0;
	printf("请输入三个数：\n");
	scanf("%d%d%d", &number1, &number2, &number3);
	if (number1 < number2)
	{
		int temp = number1;
		number1 = number2;
		number2 = temp;
	}
	if (number1 < number3)
	{
		int temp = number1;
		number1 = number3;
		number3 = temp;
	}
	if (number2 < number3)
	{
		int temp = number2;
		number2 = number3;
		number3 = temp;
	}
	printf("%d %d %d\n", number1, number2, number3);//算法实现number1最大，number2次之，number3最小
	return 0;
}
//11.给定两个数，求其最大公约数(辗转相除法)
int Common_divisor(void)
{
	int number1 = 0, number2 = 0, remainder = 0;
	printf("请输入两个数：\n");
	scanf("%d%d", &number1, &number2);
	while (remainder = number1 % number2)
	{
		//remainder = number1 % number2;
		number1 = number2;
		number2 = remainder;
	}
	printf("%d\n", number2);
	return 0;
}
//12.在一个有序数组中查找具体的某个数字n,编写int binsearch(int x,int v[],int n)
//功能：在v[0]<=v[1]<=v[2]<=……<=[n-1]的数组中查找x(二分查找法)
int Lookup_arrays_sequentially(int arr[], int n)
{
	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	int left = 0;//左下标
	int right = sz - 1;//右下标
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > n)
			right = mid - 1;
		else if (arr[mid] < n)
			left = mid + 1;
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("找不到\n");
	return 0;
}


