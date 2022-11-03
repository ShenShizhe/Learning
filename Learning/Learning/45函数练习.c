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



int main(void)
{
	//1. 写一个函数可以判断一个数是不是素数。[Add_function.c——————is_prime_number]
	//for (int i = 1; i < 20; i++)
	//{
	//	if (is_prime_number(i) == 1)
	//		printf("%d ", i);
	//}
	//2. 写一个函数判断一年是不是闰年。[Add_function.c——————is_leap_year]
	//for (int year = 1000; year <= 2000; year++)
	//{
	//	if (1 == is_leap_year(year))
	//		printf("%d ", year);
	//}
	//3. 写一个函数，实现一个整形有序数组的二分查找。[Add_function.c——————]
	//找到返回下标，否则返回-1
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 9;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int ret = binary_search(arr, k, sz);
	//if (ret == -1)
	//	printf("找不到该数字！\n");
	//else
	//	printf("找到了,下标是：%d\n", ret);

	//4. 写一个函数，每调用一次这个函数，就会将num 的值增加1。
	int num = 0;

	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);



	return 0;
}
