# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <string.h>
# include <Windows.h>
# include <stdlib.h>
int main_37(void)
{
	//11.求1~100间'9'这个数字，出现的个数[1.个位有9的%10等于9 2.十位有9的数字/10商等于9]
	int i = 1, count = 0;
	for (int i = 0; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
	printf("\n9一共出现了%d次\n", count);
	return 0;

}