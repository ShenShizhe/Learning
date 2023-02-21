#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include "Function.h"
//求两个数二进制中不同位的个数
int get_diff_bit(m, n)
{
	int temp = m ^ n;
	int count = 0;
	//return count_bit_one(temp);
	while (temp)
	{
		temp &= temp - 1;
		count++;
	}
	return count;
}

int main_77(void)
{
	int m = 0, n = 0;
	scanf("%d%d", &m, &n);
	int count = get_diff_bit(m, n);
	printf("count = %d\n", count);
	return 0;
}