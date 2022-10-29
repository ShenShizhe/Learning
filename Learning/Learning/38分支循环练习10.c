# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
int main_38(void)
{
	//12.计算1/1-1/2+1/3-1/4+1/5……+1/99-1/100的值
	double sum = 0.0;
	int i = 0, flag = 1;
	for (i = 1; i <= 100; i++)
		//方法一
	//{
	//	sum += flag * 1.0 / i;
	//	flag = -flag;
	//}
	//方法二
	/*if (i % 2 == 1)
		sum += 1.0 / i;
	else
		sum -= 1.0 / i;*/
		printf("%lf\n", sum);


	return 0;

}