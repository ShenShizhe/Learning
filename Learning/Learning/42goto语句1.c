# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>


int main_42(void)
{
	//gotoyu���(����ҳ���ԭ�е�ִ�д��򣬾����ٵ�ʹ��goto���)
	printf("haha\n");
again:
	printf("Hello World!!");
	goto again;
	printf("hehe\n");


	//Ӧ�ó���
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