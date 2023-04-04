#define _CRT_SECURE_NO_WARNINGS 1
/*
test.c-->编译、链接-->test.exe（二进制文件）-->运行

-----------------------------------------------------
|			翻译环境				|		运行环境		|
-----------------------------------------------------
|	编译(编译器)	|	链接(链接器)	|				|
---------------------------------				|
|	预编译	|	编译		|	汇编	|--->目标文件-->链接器
---------------------------------				|
|			|			|						|
|			|			|						1.合并段表，2.符号表的合并和重定位
|			|			汇编代码转换为二进制指令(形成符号表)【test.s-->test.o】
|			把C代码代码翻译为汇编代码(1.语法分析，2.词法分析(编译原理)，3.语义分析，4.符号汇总(函数名、全局变量))【test.i-->test.s】
文本操作(1.#include 文件的包含2.注释的删除[使用空格开 替换注释]3.#define[符号替换为值])【test.c-->test.i】

运行环境
程序执行的过程：
1. 程序必须载入内存中。在有操作系统的环境中：一般这个由操作系统完成。在独立的环境中，程序的载入必须由手工安排，也可能是通过可执行代码置入只读内存来完成。
2. 程序的执行便开始。接着便调用main函数。
3. 开始执行程序代码。这个时候程序将使用一个运行时堆栈（stack），存储函数的局部变量和返回地址。程序同时也可以使用静态（static）内存，存储于静态内存中的变量在程序的整个执行过程一直保留他们的值。
4. 终止程序。正常终止main函数；也有可能是意外终止。

*/
int Add_x_y_103(const int a, const int b)
{
	return a + b;
}


#include <stdio.h>
int main_103_1()
{
	int a = 10, b = 20, c;

	int arr[10] = { 0 };
	int i = 0;
	for (; i < 10; i++)
		arr[i] = i;
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");

	c = Add_x_y_103(a, b);
	printf("C=%d\n", c);
	return 0;
}

//预处理
int main_103_2()
{
	//printf("%s\n", __FILE__);//文件路径
	//printf("%d\n", __LINE__);//行号
	//printf("%s\n", __DATE__);//日期
	//printf("%s\n", __TIME__);//时间
	//printf("%s\n", __FUNCTION__);//所在函数名
	//printf("%d\n", __STDC__);//如果编译器遵循ANSI C 其值为1，否则未定义


	//写日志文件
	int i = 0, arr[10] = { 0 };
	FILE* pf = fopen("log.txt", "w");
	for (; i < 1; i++)
	{
		arr[i] = i;
		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
	}
	fclose(pf);
	pf = NULL;

	return 0;
}

/*
预处理指令：
#include
#define
#pragma pack(4)
#pragma pack()
#if
#endif
#ifdef
#line
*/
//定义标识符号(可以是小数，字符串，符号，一段代码等)
#define MAX 100
#define STR "hello"
//定义宏(参数是替换，而不是传参)
#define SQUARE(X) X*X
/*
#define 替换规则
在程序中扩展#define定义符号和宏时，需要涉及几个步骤。
1. 在调用宏时，首先对参数进行检查，看看是否包含任何由#define定义的符号。如果是，它们首先
被替换。
2. 替换文本随后被插入到程序中原来文本的位置。对于宏，参数名被他们的值替换。
3. 最后，再次对结果文件进行扫描，看看它是否包含任何由#define定义的符号。如果是，就重复上
述处理过程。
注意
1. 宏参数和#define 定义中可以出现其他#define定义的变量。但是对于宏，不能出现递归。
2. 当预处理器搜索#define定义的符号的时候，字符串常量的内容并不被搜索。
*/


/*
#把一个宏参数变成对应的字符串

##可以把位于它两边的符号合成一个符号。它允许宏定义从分离的文本片段创建标识符

注：这样的连接必须产生一个合法的标识符。否则其结果就是未定义的
*/

#define PRINT(X) printf("the value of "#X" is %d\n",X)
#define CAT(X,Y) X##Y
int main_103_3()
{
	int a = 10, b = 20;
	PRINT(a);//the value of a is 10
	PRINT(b);//the value of b is 20

	int helloworld = 1024;
	printf("%d\n", CAT(hello, world));//1024

	return 0;
}





