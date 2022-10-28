#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

int main(void)
{
	//1.计算n的阶乘
	//2.计算1！+2！+3！+……+10!
	//3.在一个有序数组中查找具体的某个数字n,编写int binsearch(int x,int v[],int n);功能：在v[0]<=v[1]<=v[2]<=……<=[n-1]的数组中查找x
	//4.编写代码，演示多个字符从两端移动，向中间汇聚
	//5.编写代码实现，模拟用户登录场景，并且只能登录三次。
	//(只允许输入三次密码，如果密码正确则提示登录成功，反之提示密码输入有误，如果三次三次均输入错误，则退出程序)


	//1.计算n的阶乘[Add_function.c——————Factorial_n]
	int n = 10;
	Factorial_n(n);
	//2.计算1！+2！+3！+……+10![Add_function.c——————Factorial_1n]
	Factorial_1n(n);





	return 0;

}