# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
# include "Function.h"


//������Ϊ��������
int main_54(void)
{
	int arr[] = { 9,8,0,1,2,3,4,5,6,7 };
	//��arr������������[Function.c��������Bubbling_sort]
	int sz = sizeof(arr) / sizeof(arr[0]);
	//arr�����飬���Ƕ�������д��Σ�ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ
	Bubbling_sort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;

}