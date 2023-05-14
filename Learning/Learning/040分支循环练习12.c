# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>


int main_40(void)
{
	//14.´òÓ¡³Ë·¨¿Ú¾÷±í
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d = %-2d  ", j, i, i * j);
		}
		printf("\n");
	}
	return 0;

}
