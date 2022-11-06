# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
# include "Function.h"

int main(void)
{
	//数组名就是数组首元素的地址，他的值是数组首元素的值
	int arr[] = { 9,8,0,1,2,3,4,5,6,7 };
	/*printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);*/
	/*
	运行结果：
			000000C67034FAE8
			000000C67034FAE8
			9
	*/


	/*其他情况,例外：
	1.sizeof(数组名)，sizeof内部单独放数组名(表示整个数组--单位(字节))
	2.&arr[&数组名]，数组名代表整个数组，即取出整个数组的地址*/

	printf("%p\n", arr);//数组名、首元素地址
	printf("%p\n", &arr[0]);//首元素地址
	printf("%p\n", &arr);//数组的地址

	/*
	运行结果：
			00000079134FF648
			00000079134FF648
			00000079134FF648
	*/

	return 0;

}