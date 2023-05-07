#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

int main_34(void)
{
	//9.打印两个年份之间的闰年
	int year = 0, count = 0;//计数器[year个数]
	for (year = 1000; year <= 2000; year++)
	{
		//判断year是否为闰年:[1.能被4整除并且不能被100整除2.能被400整数是闰年]

		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			printf("%d ", year);
			count++;
		}
		//else if (year % 400 == 0)
		//{
		//	printf("%d ", year);
		//	count++;
		//}
	}
	printf("一共有%d个闰年\n", count);
	return 0;

}
