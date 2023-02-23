# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
# include "Function.h"


//数组作为函数参数
int main_54(void)
{
	int arr[] = { 9,8,0,1,2,3,4,5,6,7 };
	//对arr进行升序排列[Function.c————Bubbling_sort]
	int sz = sizeof(arr) / sizeof(arr[0]);
	//arr是数组，我们对数组进行传参，实际上传递过去的是数组arr首元素的地址
	Bubbling_sort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;

}