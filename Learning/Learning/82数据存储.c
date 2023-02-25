#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "Function.h"
//整形在内存中的存储：原码、反码、补码
//C语言类型：内置类型【char\short\int\long\float\double】、自定义类型(构造类型)【】
//类型所占空间的意义：1、大小决定了使用的范围	2、如何看待内存空间的视角

/*
整型：
char
	unsigned char[0~255]
	signed char[-128~-127]
short
	unsigned short
	signed shot
int
	unsigned int
	signed int
long
	unsigned long
	signed long


浮点型：
float
double

构造类型：

数组类型
结构体类型
枚举类型
联合类型

指针类型：
int *pi;
char *pc;
float *pf;
void *pv;

空类型：
void 表示空类型（无类型）,通常应用于函数的类型返回，函数的参数、指针的类型
*/

/*
大小端：
大端（存储）模式：是指数据的低位保存在内存的高地址中，而数据的高位，保存在内存的低地址中
小端（存储）模式：是指数据的低位保存在内存的低地址中，而数据的高位，保存在内存的高地址中

*/

//设计程序判断当前设备的字节序是什么？
//思路：判断第一个字节是否与低位的字节一致，一致则为小端字节序存储模式，反之，则为大端字节序存储模式
//方法一
//int main(void)
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		printf("这是小端字节序存储模式！！\n");
//	else
//		printf("这是大端字节序存储模式！！\n");
//	return 0;
//}
//方法二：

//写一个函数来判断：返回1为小端，返回0为大端
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;//返回1：小端，0：大端
//}

//方法三
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main(void)
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("这是小端字节序存储模式！！\n");
//	else
//		printf("这是大端字节序存储模式！！\n");
//	return 0;
//}


/*
IEEE754规定：对于32(64)位的浮点数，最高1(1)位是符号位s, 接着的8(11)位是指数E，剩下的32(52)位为有效数字M

IEEE754规定浮点数V的存储方式：
(-1)^s*M*2^E【(-1)^s表示符号位，当s=0，V为正数；当s=1,V为负数】【M表示有效数字，大于等于1，小于2】【2^E表示指数位】

例：9.0-->1001.0-->(-1)^0*1.001*2^3


*/

int main_82(void)
{

	float f = 5.5;
	//5.5--->101.1--->(-1)^0*1.011*2^2【S=0\M=1.011\E=2】
	//0100 0000 1011 0000 0000 0000 0000 0000--->0040b0000
	return 0;
}
