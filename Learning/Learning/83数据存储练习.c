#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "Function.h"

//1.输出什么？
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
有符号、无符号、整形提升
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
//	printf("%u\n", a);//%u打印十进制无符号数
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
//整型与浮点型在内存中存储的方式有区别
int main(void)
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);


	*pFloat = 9.0;
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	return 0;
}
/*
n的值为：9
*pFloat的值为：0.000000
n的值为：1091567616
*pFloat的值为：9.000000
*/

