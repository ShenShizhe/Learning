#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include "Function.h"
//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
int main_66(void)
{
	/*
	�������������ԣ����ȼ�������ԡ�������ֵ˳��

	*/
	int a = 10;
	int b = 20;
	int c = b + a + 3;

	//���ʽ1
	a = a * b + a * c + c * b;

	//���ʽ2
	c = c + --c;


	//���ʽ3
	int i = 10;
	i = i-- - --i * (i = -3) * i++ + ++i;

	//4
	//int answer;
	//answer = fun() - fun() * fun();
	//printf("%d\n", answer);


	//5
	i = 1;
	a = (++i) + (++i) + (++i);
	//2 3 4 5
	printf("a=%d\n", a);
	return 0;
}