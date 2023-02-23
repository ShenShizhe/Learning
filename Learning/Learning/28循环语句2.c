#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

int main_28(void)
{
	/*int ch = 0;
	while ((ch = getchar() != EOF))
	{
		if (ch < '0' || ch > '9')
			continue;
		printf("%c\n", ch);
	}*/
	//while循环，当程序复杂，代码块较长时[初始化、判断、调整]这三部分分布分散，不便于程序的调改
	//int i = 0;//初始化
	//while (i < 10)//判断
	//{
	//	//……
	//	i++;//调整
	//}

	//for循环
	//for(表达式1;表达式2;表达式3)//表达式1:初始化部分、表达式2：判断部分、表达式3：调整部分
	//	循环语句;

	//采用for循环打印1~10
	for (int i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d ", i);

	}
	printf("\n");
	/*
	for循环的三个部分均可省略，如果判断部分省略，那么结果恒为真
	*/
	//int i = 0, j = 0;
	//for (; i < 10; i++)
	//{
	//	for (; j < 10; j++)
	//		printf("HAHA\n");
	//}
	//运行结果：
	//	HAHA
	//	HAHA
	//	HAHA
	//	HAHA
	//	HAHA
	//	HAHA
	//	HAHA
	//	HAHA
	//	HAHA
	//	HAHA

	printf("*************\n");
	//*************
	//该程序循环了几次？
	/*int i = 0, j = 0;
	for (i = 0, j = 0; j = 0; j++)
		j++;
	printf("%d\n", j);
	printf("*************\n");*/
	//do……while循环，打印1~10的数字
	int i = 1;
	do
	{

		if (i == 5)
			//break;
			continue;
		printf("%d ", i);
		i++;
	} while (i <= 10);
	return 0;

}