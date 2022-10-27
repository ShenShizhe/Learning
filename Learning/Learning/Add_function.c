#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//两个数相加
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
//求两个数最大值
int Max(int x, int y)
{
	return (x >= y ? x : y);
}
//判断一个数是否为奇数
int Judgment_odd_number(int a)
{
	if (a % 2 == 1)
		printf("该数是一个奇数\n");
	else
		printf("该数不是奇数\n");
}
//输出1~X之间的奇数
int Odd_number(int x)
{	
	int i = 1;
	while (i < x)
	{		
		printf("%d  ", i);
		i += 2;
	}	
}
//switch确定星期
int Week(void)
{
	int day = 0;
	printf("\n请输入1~7的任意一个数字：");
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("今天是星期一\n");
		break;
	case 2:
		printf("今天是星期二\n");
		break;
	case 3:
		printf("今天是星期三\n");
		break;
	case 4:
		printf("今天是星期四\n");
		break;
	case 5:
		printf("今天是星期五\n");
		break;
	case 6:
		printf("今天是星期六\n");
		break;
	case 7:
		printf("今天是星期天\n");
		break;
	default:
		printf("您输入有误，不在规定范围内");
		break;
	}
}
// switch确定是否为工作日
int Work(void)
{
	int day = 0;
	printf("\n请输入1~7的任意一个数字：");
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("今天是工作日\n");
		break;
	case 6:
	case 7:
		printf("今天是休息日\n");
		break;
	default:
		printf("您输入有误，不在规定范围内");
		break;
	}
}