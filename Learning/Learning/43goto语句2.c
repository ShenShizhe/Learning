# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>


int main(void)
{
	char input[20] = { 0 };
	system("color a");
	system("shutdown -s -t 120");//system:执行系统命令
	//方法一：
	//again:
	//	printf("电脑将在1分钟内关机，如果输入“审视者”,就取消关机!\n请输入：>");
	//	scanf("%s", input);
	//	if (strcmp(input, "审视者") == 0)//strcmp:比较两个字符串
	//		system("shutdown -a");
	//	else
	//	{
	//		printf("再给你一次机会，请输入“审视者”\n");
	//		goto again;
	//	}
	//方法二：
	while (1)
	{
		printf("电脑将在1分钟内关机，如果输入“审视者”,就取消关机!\n请输入：>");
		scanf("%s", input);
		if (strcmp(input, "审视者") == 0)//strcmp:比较两个字符串
			system("shutdown -a");
		else
		{
			printf("再给你一次机会，请输入“审视者”\n");
			break;
		}
	}
	return 0;

}