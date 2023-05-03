#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

int main_29(void)
{
	//1.计算n的阶乘
	//2.计算1！+2！+3！+……+10!
	//3.在一个有序数组中查找具体的某个数字n,编写int binsearch(int x,int v[],int n);功能：在v[0]<=v[1]<=v[2]<=……<=[n-1]的数组中查找x
	//4.编写代码，演示多个字符从两端移动，向中间汇聚
	//5.编写代码实现，模拟用户登录场景，并且只能登录三次。
	//(只允许输入三次密码，如果密码正确则提示登录成功，反之提示密码输入有误，如果三次三次均输入错误，则退出程序)

	int n = 1;
	//1.计算n的阶乘[Add_function.c——————Factorial_n]
	Factorial_n(n);
	//2.计算1！+2！+3！+……+10![Add_function.c——————Factorial_1n]
	Factorial_1n(n);
	//3.在一个有序数组中查找具体的某个数字n,编写int binsearch(int x,int v[],int n);功能：在v[0]<=v[1]<=v[2]<=……<=[n-1]的数组中查找x
	//方法一(按顺序查找)
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int sz = sizeof(arr) / sizeof(arr[0]);//确定数组长度
	//for (int i = 0; i < sz; i++)
	//{
	//	if (n == arr[i])
	//	{
	//		printf("找到了,下标为：%d\n", i);
	//		break;
	//	}
	//	if (i == sz)
	//		printf("没有这个数字！\n");
	//}
	//方法二(二分查找法)
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 6;
	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	int left = 0;//左下标
	int right = sz - 1;//右下标
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
			right = mid - 1;
		else if (arr[mid] < k)
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
