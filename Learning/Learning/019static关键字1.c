#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////static(ÐÞÊÎ¾Ö²¿±äÁ¿)
//void test()
//{
//	int i = 0;//¾Ö²¿±äÁ¿
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


//´úÂë2
#include <stdio.h>
void test()
{
	static int i = 0;//staticÐÞÊÎ¾Ö²¿±äÁ¿(ÉúÃüÖÜÆÚ±ä³¤)
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
