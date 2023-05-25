# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
# include "Function.h"

int main_51(void)
{
	//char arr1[] = "abc";
	//char arr2[] = { 'a','b','c' };
	//printf("%d\n", sizeof(arr1));//4
	//printf("%d\n", sizeof(arr2));//3
	//printf("%d\n", strlen(arr1));//3
	//printf("%d\n", strlen(arr2));//Ëæ»úÖµ

	//Êý×éµÄÊ¹ÓÃ


	char arr[] = "abcdef";
	//printf("%c\n", arr[3]);
	for (int i = 0; i < (int)strlen(arr); i++)
	{
		printf("%c ", arr[i]);
	}





	return 0;

}
