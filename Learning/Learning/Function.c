# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <string.h>
# include <Windows.h>
# include <stdlib.h>
# include <math.h>
//1.两个数相加(求和)
int Add_two_number(int x, int y)
{
	return x + y;
}
//2.求两个数最大值
int Max(int x, int y)
{
	int z;
	z = (x >= y ? x : y);
	printf("%d\n", z);
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
	//方法一(循环解决)
	//int factorial = 1;
	//for (int i = 1; i <= n; i++)
	//	factorial *= i;
	//printf("%d\n", factorial);
	//return 0;
	//方法二(递归方案)
	(n <= 1) ? 1 : (n * Factorial_n(n - 1));
	/*if (n <= 1)
		return 1;
	else
		return n * Factorial_n(n - 1);*/

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
//13.交换两个整数
void Swap(int* a, int* b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}
//14. 写一个函数可以判断一个数是不是素数。
int is_prime_number(int x)
{
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
			return 0;
	}
	return 1;
}
//prime number
//15. 写一个函数判断一年是不是闰年。
int is_leap_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		return 1;
	else
		return 0;
}
//16. 写一个函数，实现一个整形有序数组的二分查找。
int binary_search(int arr[], int k, int sz)
{
	//算法的实现
	int left = 0;//左下标
	int right = sz - 1;//右下标
	while (left <= right)
	{
		int mid = (left + right) / 2;//中间下标
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}


//17. 写一个函数，每调用一次这个函数，就会将num 的值增加1。
void Add(int* p)
{
	(*p)++;
}
//18.接受一个整数值(无符号)，按照打印顺序打印他的每一位。例如：1234,输出1 2 3 4.
void Sequential_printing(int n)//1234
{
	if (n > 9)
		Sequential_printing(n / 10);//123
	printf("%d ", n % 10);//4
}
//19.编写函数不允许创建临时变量，求字符串的长度。
int my_strlen(char* str)
{
	//计算字符串长度
	//方法一
	/*int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;*/
	//方法二
	(*str != '\0') ? (1 + my_strlen(str + 1)) : 0;

	//if (*str != '\0')
	//	return 1 + my_strlen(str + 1);
	//else
	//	return 0;
}
//20.求第n个斐波那契数
int Fibonacci_sequence(int n)
{
	//方法一(递归)
	//(n <= 2) ? 1 : (Fibonacci_sequence(n - 1) + Fibonacci_sequence(n - 2));

	//if (n <= 2)
	//{

	//	return 1;
	//}
	//else
	//{
	//	return Fibonacci_sequence(n - 1) + Fibonacci_sequence(n - 2);
	//}
	//方法二(循环)
	int a = 1, b = 1, c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
//21.汉诺塔问题
void Tower_of_Hanoi_move(int x, int y)
{
	printf("%c->%c\n", x, y);
}
//Tower_of_Hanoi_move中的实参与Tower_of_Hanoi函数中的形参相对应，而Tower_of_Hanoi函数中形参a，b，c所对应的值也是在有规律的变化
void Tower_of_Hanoi(int n, char a, char b, char c)
{
	if (n == 1)
	{
		Tower_of_Hanoi_move(a, c);
	}
	else
	{
		Tower_of_Hanoi(n - 1, a, c, b);//将A座上的n-1个盘子借助C座移向B座
		Tower_of_Hanoi_move(a, c);//将A座上最后一个盘子移向C座
		Tower_of_Hanoi(n - 1, b, a, c);//将B座上的n-1个盘子借助A座移向C座
	}
}
//22.青蛙跳台阶问题
int Frog_jumping(long int n)
{
	if (n == 1)
	{
		return 1;
	}
	if (n == 2)
	{
		return 2;
	}
	return Frog_jumping(n - 1) + Frog_jumping(n - 2);
}
//23.冒泡排序
void Bubbling_sort(int arr[], int sz)
{
	//确定需要排序的趟数
	//int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz - 1; i++)
	{
		//假设一趟需要排序的数据已经有序
		int flag = 1;
		//每一趟冒泡排序的内容
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;//本趟排序数据不完全有序
			}
		}
		if (flag)
		{

			break;
		}
	}
}
//24.strlen求字符串的长度
int my_strlen_pointer5(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}