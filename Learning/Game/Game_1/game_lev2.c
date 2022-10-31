# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>


void game_lev2()
{
	//1.生成随机数//RAND_MAX---0~32767
	int ret = 0, guess = 0;



	//2.猜数字 
	/*printf("猜数字\n");*/
	while (1)
	{
		ret = rand() % 100 + 1;//生成随机数(1~100)
		//printf("%d\n", ret);
		printf("游戏等级：Lev2(真男人的选择)\n");
		printf("请猜数字：>");
		scanf("%d", &guess);
		if (guess > ret)
			printf("猜大了！\n");
		else if (guess < ret)
			printf("猜小了！\n");
		else
		{
			printf("*********************\n");
			printf("** 恭喜你，猜中了！**\n");
			printf("*********************\n");
			printf("\n\n");
			break;
		}
	}
}