#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include "Function.h"
/*
创建一个整形数组，完成对数组的操作：
	1.实现函数init()初始化数组为全0
	2.实现print()打印数组的每个元素
	3.实现reverse()函数完成数组元素的逆置
*/


void Init(int arr[], int sz)
{

	for (int i = 0; i < sz; i++)
		arr[i] = 0;
}
void Print(int arr[], int sz)
{

	for (int i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
void Reverse(int arr[], int sz)//逆序函数，采用下标标定的方法
{
	int left = 0, right = sz - 1;//确定数组的左右下标
	while (left < right)//判断交换条件
	{
		int temp = arr[left];//交换临时变量
		arr[left] = arr[right];
		arr[right] = temp;

		left++, right--;//进行下一组待交换的数组元素
	}
}
int main_74(void)
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//Init(arr, sz);//把数组初始化为0
	Print(arr, sz);
	Reverse(arr, sz);
	Print(arr, sz);
	return 0;
}