#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////static(���ξֲ�����)
//void test()
//{
//	int i = 0;//�ֲ�����
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


//����2
#include <stdio.h>
void test()
{
	static int i = 0;//static���ξֲ�����(�������ڱ䳤)
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