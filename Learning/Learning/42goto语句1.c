# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>


int main_42(void)
{
	//gotoyu语句(会打乱程序原有的执行次序，尽量少的使用goto语句)
	printf("haha\n");
again:
	printf("Hello World!!");
	goto again;
	printf("hehe\n");


	//应用场景
//	for (...)
//	{
//		for (...)
//		{
//			for (...)
//			{
//				if (...)
//					goto error;
//			}
//		}
//	}
//error:
//	if(...)
	return 0;
}