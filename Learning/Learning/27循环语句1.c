#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
//循环语句
int main_27(void)
{   //表达式：expr 语句：stmt
	//while (表达式)
	//{
	//	循环语句;
	//}
	//在屏幕上打印1~x的数字[Add_function.c——————Number]
	int x = 10, i = 0;
	Number_x(x);
	//**********************************
	printf("\n");
	while (i <= x)
	{
		i++;
		if (i == 5)
			continue;
		//break;
		printf("%d ", i);

	}
	//printf("\n");
	//getchar的用法
	//int ch1 = getchar();
	//putchar(ch1);//输出ch
	//printf("%c\n", ch1);//输出ch

	//***************************
	printf("\n");
	/*int ch = 0;*/
	//从键盘获取Ctrl+Z时停止
	//while (ch = getchar() != EOF)//EOF--end of file[本质：文件结束标志、值：-1]
	//{
	//	putchar(ch);
	//}
	//*************************************
	//demo1
	//int ret = 0;
	//char password[20] = { 0 };
	//printf("请输入密码：>");
	//scanf("%s", password);//输入密码，并存放在password数组中
	//printf("请确认(Y/N)：>");
	//ret = getchar();//Y/N
	//if (ret == 'Y')
	//{
	//	printf("确认成功！\n");
	//}
	//else
	//{
	//	printf("放弃确认！\n");
	//}

	/*运行结果：
	请输入密码： > 123456
	请确认(Y / N)： > 放弃确认！*/
	//printf("%d\n", '\n');
	/*
	'\n'的ASIIC值为10，即是说在(scanf回车时已经进行的输入),
	密码=[实际输入的密码'\n'],而scanf只会取走实际的密码，留下'\n'在输入缓冲区中
	当getchar 读取输入缓冲区时，发现有'\n'后，程序就直接执行，从而跳过了用户正常输入的过程
	*/
	//*************************************
	//demo2
	//int ret = 0;
	//char password[20] = { 0 };
	//printf("请输入密码：>");
	//scanf("%s", password);//输入密码，并存放在password数组中
	////缓冲区还剩余一个'\n',需要读取'\n'从而使程序达到正常运行效果
	//getchar();//需要读取'\n'
	//printf("请确认(Y/N)：>");
	//ret = getchar();//Y/N
	//if (ret == 'Y')
	//{
	//	printf("确认成功！\n");
	//}
	//else
	//{
	//	printf("放弃确认！\n");
	//}
	/*运行结果：
		请输入密码： > 123345 78
		请确认(Y / N)： > 放弃确认！*/
		//当用户输入的密码含有空格时，剩余的部分将分配给第二个getchar();,导致程序出现异常
	//*************************************
	//demo3
	int ret = 0, ch = 0;
	char password[20] = { 0 };
	printf("请输入密码：>");
	scanf("%s", password);
	while ((ch = getchar()) != '\n')
	{
		;//空语句,利用while清空getchar
	}
	printf("请确认(Y/N)：>");
	ret = getchar();//Y/N
	if (ret == 'Y')
	{
		printf("确认成功！\n");
	}
	else
	{
		printf("放弃确认！\n");
	}
	return 0;

}