# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
# include <time.h>

int main_64(void)
{
	//表达式求值
	/*
	C的整形算术运算总是至少以缺省整形类型的精度来进行的
	为了获得这个精度，表达式中的字符和短整形操作数在使用之前被转换为普通类型，这种转换称为整形提升。

	整形	提升的意义：---
	*/

	char a = 3;			//00000000|00000000|00000000|00000011
	//char只能存放一个字节	00000011
	char b = 127;		//00000000|00000000|00000000|01111111
	//char只能存放一个字节	01111111

	//a和b如何相加[00000011 + 01111111] 
	//00000000|00000000|00000000|1000010
	char c = a + b;//00000011 + 01111111 = 1000010

	printf("%d\n", c);//-126
	//整形提升[无符号数直接补0]
	//11111111|11111111|11111111|10000010---补码
	//11111111|11111111|11111111|10000001---反码
	//10000000|00000000|00000000|01111110---原码


	char c = 1;
	printf("%u\n", sizeof(c));//1
	printf("%u\n", sizeof(+c));//4
	printf("%u\n", sizeof(!c));//1

	return 0;
}