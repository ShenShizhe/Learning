# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
# include "Function.h"

int main(void)
{
	//����������������Ԫ�صĵ�ַ������ֵ��������Ԫ�ص�ֵ
	int arr[] = { 9,8,0,1,2,3,4,5,6,7 };
	/*printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);*/
	/*
	���н����
			000000C67034FAE8
			000000C67034FAE8
			9
	*/


	/*�������,���⣺
	1.sizeof(������)��sizeof�ڲ�������������(��ʾ��������--��λ(�ֽ�))
	2.&arr[&������]�������������������飬��ȡ����������ĵ�ַ*/

	printf("%p\n", arr);//����������Ԫ�ص�ַ
	printf("%p\n", &arr[0]);//��Ԫ�ص�ַ
	printf("%p\n", &arr);//����ĵ�ַ

	/*
	���н����
			00000079134FF648
			00000079134FF648
			00000079134FF648
	*/

	return 0;

}