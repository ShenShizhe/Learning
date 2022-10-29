# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
void menu()
{
	printf("*****************************************\n");
	printf("******    1.Start         0.Quit    *****\n");
	printf("*****************************************\n");
}
void game()
{
	printf("猜数字\n");
}
int main(void)
{
	//猜数字游戏[1.电脑生成一个随机数2.猜数字]
	int input = 0;
	do
	{
		menu();
		printf("请选择>>\n");
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
	return 0;

}