#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

//int Add(int x, int y)
//{
//    return x + y;
//}


int main_13(void)
{
	/* []:下标引用操作符       ():函数调用操作符   */
	int arr[10] = { 0 };
	arr[4];//[]:下标引用操作符
	int a = 10, b = 20;
	int sum = Add_two_number(a, b);//():函数调用操作符
	printf("%d\n", sum);
	return 0;

}
