# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
int main_35(void)
{
	//10.求100~200间的素数
	int i = 0, count = 0;
	for (i = 100; i <= 200; i++)
	{
		//判断i是否为素数[1.试除法(产生2~i-1的数字)]
		//方法一
		/*int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			count++;
			printf("%d ", i);
		}*/



		//方法二(采用开方求半)
		int j = 0;
		for (j = 2; j < sqrt(i); j++)//sqrt开平发的数学库函数
		{
			if (i % j == 0)
				break;
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n一共有%d个素数\n", count);
	return 0;

}