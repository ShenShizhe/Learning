# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
//����������
# include "Function.h"
//��ʽ����[��һ�������ķ���ֵ��Ϊ����һ�������Ĳ���]
int main_47(void)
{
	//int len = 0;
	////1
	//len = strlen("abc");
	//printf("%d\n", len);
	////��ʽ����
	//printf("%d\n", strlen("abc"));


	//printf("%d", printf("%d", printf("%d", 43)));

	int a = 10, b = 20;
	int sum = Add_two_number(a, b);
	printf("%d\n", sum);
	return 0;

}