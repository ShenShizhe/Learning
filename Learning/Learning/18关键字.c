#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
//关键字
typedef unsigned int uint_32;
int main_18(void)
{
	auto int a = 10;//局部变量-自动变量(通常不写)
	register int b = 10;//建议把b定义成寄存器变量(内存-->CPU-->高速缓存-->寄存器)
	/*
	int 定义的变量为有符整形(signed int b = 1;<--->int b = 1;)
	因此无符整形定义为：unsigned int b = 1;
	*/
	//将unsigned int 重命名为uint_32, 所以uint_32也是一个类型名


	//观察num1和num2,这两个变量的类型是一样的
	unsigned int num1 = 0;
	uint_32 num2 = 0;
	return 0;

	return 0;

}