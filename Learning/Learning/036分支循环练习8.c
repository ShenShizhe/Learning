# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <string.h>
# include <Windows.h>
# include <stdlib.h>
int main_36(void)
{

	//求100~200间的素数
	//方法三(只对奇数进行验证)
	int i = 0, count = 0;
	for (i = 101; i <= 200; i += 2)
	{
		//判断i是否为素数[1.试除法(产生2~i-1的数字)]
		//方法一
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
//文章：《素数求解的n种境界》
