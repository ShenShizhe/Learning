# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>


int main_39(void)
{
	//13.求10个整数中的最大值
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int max = arr[0];//最大值(用数组的元素代替，避免出现max大于数组所有元素的情况出现)
	int i = 0;//下标
	int sz = sizeof(arr) / sizeof(arr[0]);//数组长度
	for (i = 1; i < sz; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	printf("max=%d\n", max);
	return 0;

}