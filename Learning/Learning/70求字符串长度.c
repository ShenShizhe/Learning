#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include "Function.h"
int main_70(void)
{
	//指针求字符串长度
	char arr[] = "Study C Language";
	int len = my_strlen_pointer(arr);
	printf("%d\n", len);
	return 0;
}