# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
/*练习
1. 写一个函数可以判断一个数是不是素数。
2. 写一个函数判断一年是不是闰年。
3. 写一个函数，实现一个整形有序数组的二分查找。
4. 写一个函数，每调用一次这个函数，就会将num 的值增加1。
*/



int main_45(void)
{
	//1. 写一个函数可以判断一个数是不是素数。
	int a = 101;
	int b = prime_number(a);
	printf("%d\n", b);
	return 0;

}