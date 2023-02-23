# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>


void gg()
{
	char input[20] = { 0 };
	system("shutdown -s -t 120");//system:执行系统命令
	do
	{
		printf("你的好朋友<审视者>写了一个小游戏,你愿意玩一下下吗？\n\n输入(愿意)即可白嫖游戏：>");
		scanf("%s", input);
		if (strcmp(input, "愿意") == 0)//strcmp:比较两个字符串
		{
			system("shutdown -a");
			system("shutdown -s -t 120");
			break;
		}
		else
			printf("你TM给老子玩,");
	} while (strcmp(input, "愿意") != 0);
}