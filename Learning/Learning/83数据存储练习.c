#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "Function.h"

//1.���ʲô��
//int main(void)
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d\n", a, b, c);
//	return 0;
//}
/*
a=-1,b=-1,c=255
�з��š��޷��š���������
*/


//2.
//int main(void)
//{
//
//	char a = -128;
//	//10000000 00000000 00000000 10000000
//	//11111111 11111111 11111111 01111111
//	//11111111 11111111 11111111 10000000
//	//10000000
//	//11111111 11111111 11111111 10000000
//	printf("%u\n", a);//%u��ӡʮ�����޷�����
//	return 0;
//
//}
/*

4294967168

*/

//3.
//int main(void)
//{
//	char a = 128;
//	printf("%u\n", a);
//
//	return 0;
//}

/*

4294967168

*/

//4.
//int main(void)
//{
//
//
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}

//5.

//#include <Windows.h>
//int main(void)
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//	return 0;
//}

//6.


//int main(void)
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}


//7.
//unsigned char i = 0;//0-255
//int main(void)
//{
//	for (i = 0; i <= 255; i++)
//		printf("hello world\n");
//	return 0;
//
//}

//8.
//�����븡�������ڴ��д洢�ķ�ʽ������
int main(void)
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);


	*pFloat = 9.0;
	printf("n��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	return 0;
}
/*
n��ֵΪ��9
*pFloat��ֵΪ��0.000000
n��ֵΪ��1091567616
*pFloat��ֵΪ��9.000000
*/

