# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>

//º¯ÊýµÄÇ¶Ì×µ÷ÓÃ
void new_line()
{
	printf("hehe\n");
}
void three_line()
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		new_line();
	}
}
int main_46(void)
{

	three_line();
	return 0;

}
