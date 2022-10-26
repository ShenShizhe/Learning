#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////static(修饰局部变量)
//void test()
//{
//	int i = 0;//局部变量
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		test();
//	}
//	return 0;
//}


//代码2
#include <stdio.h>
void test()
{
	static int i = 0;//static修饰局部变量(生命周期变长)
	i++;
	printf("%d ", i);
}
int main_19()
{
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		test();
	}
	return 0;
}