# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
# include <time.h>

int main_62(void)
{
	//逗号表达式1[从左往右依次执行,整个表达式结果就是最后一个表达式的结果]
	//int a = 1;
	//int b = 2;
	//int c = (a > b, a = b + 10, a, b = a + 1);
	//int d = 1;
	//printf("%d\n", c);//13
	//逗号表达式2
	//if (a = b + 1, c = a / 2, d > 0)
	//逗号表达式3
	//a = get_val();
	//count_val(a);
	//while (a > 0)
	//{
	// //处理
	//	a = get_val();
	//	count_val(a);
	//}


	//while (a = get_val(), count_val(a), a > 0)
	//{
	//	//处理
	//}



	//下标引用操作符
	//操作数：一个数组名+一个索引值
	//int arr[10] = { 0 };
	//arr[4] = 10;//访问下标为4的元素


	//函数调用操作符[定义函数时的()不是函数调用操作符，是语法]
	//int a = 10, b = 20;
	//int max = get_max(a, b);//调用函数的时候[()]就是函数调用操作符
	//printf("%d\n", max);




	return 0;
}