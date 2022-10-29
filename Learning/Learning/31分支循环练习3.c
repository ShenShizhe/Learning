#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <string.h>
int main_31(void)
{
	//5.编写代码实现，模拟用户登录场景，并且只能登录三次。
	//(只允许输入三次密码，如果密码正确则提示登录成功，反之提示密码输入有误，如果三次三次均输入错误，则退出程序)
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：\n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//等号不能用来比较两个字符串是否相等[库函数--strcmp]
		{
			printf("登录成功！\n");
			break;
		}
		else if (i < 2)
			printf("您的密码有误，请重新输入！\n");
	}
	if (i == 3)
		printf("三次密码均错误，退出程序！\n");
	return 0;

}