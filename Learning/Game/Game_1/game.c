# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
# include <time.h>




void game()
{
	//system("color a");
	//传入时间戳作为起始点[当前计算机时间减去计算机的起始时间(1970.1.1.0.0.0)的差值](xxx单位秒)
	srand((unsigned int)time(NULL));//time函数(time-t*)
	//猜数字游戏[1.电脑生成一个随机数2.猜数字]
	int input = 0;
	do
	{
		//menu();
		printf("请选择>>>>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误!!!\n");
			break;
		}
	} while (input);

}