#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>



/*

1.运行代码程序会出现崩溃的现象
2.程序存在内存泄漏的问题

str以值传递的形式给p,p是GetMemory函数的形参，只能函数内部有效等GetMemory函数返回之后，动态开辟内存尚未释放并且无法找到，所以会造成内存泄漏
*/
void GetMemory_1_1(char* p)
{
	p = (char*)malloc(100);
}
void Test_100_1_1(void)
{
	char* str = NULL;
	GetMemory_1_1(str);
	strcpy(str, "he1lo wor1d");//NULL不是有效地址，访问内存失败，程序崩溃
	printf(str);
}

int main_100_1_1()
{
	Test_100_1_1();
	return 0;
}



//改正方式一
void GetMemory_1_2(char** p)
{
	*p = (char*)malloc(100);
}
void Test_100_1_2(void)
{
	char* str = NULL;
	GetMemory_1_2(&str);
	strcpy(str, "he1lo wor1d");
	printf(str);
	free(str); str = NULL;
}

int main_100_1_2()
{
	Test_100_1_2();
	return 0;
}

//改正方式二

char* GetMemory_1_3(char* p)
{
	p = (char*)malloc(100);
	return p;
}
void Test_100_1_3(void)
{
	char* str = NULL;
	str = GetMemory_1_3(str);
	strcpy(str, "he1lo wor1d");
	printf(str);
	free(str); str = NULL;
}
int main_100_1_3()
{
	Test_100_1_3();
	return 0;
}

/*
返回栈空间地址的问题，存在非法访问内存的现象

可以用static修饰局部变量，变量存在于静态区，从而使其生命周期变长

*/

char* GetMemory_2_1(void)
{
	char p[] = "hello world";
	return p;//局部变量p放在栈区，出栈以后将被销毁，返回后，p的地址就会被销毁，
}
void Test_100_2_1(void)
{
	char* str = NULL;
	str = GetMemory_2_1();//非法的访问内存
	printf(str);//打印随机值
}
int main_100_2_1()
{
	Test_100_2_1();
	return 0;
}
//更改方式一
char* GetMemory_2_2(void)
{
	static char p[] = "hello world";
	return p;
}
void Test_100_2_2(void)
{
	char* str = NULL;
	str = GetMemory_2_2();
	printf(str);
}
int main_100_2_2()
{
	Test_100_2_2();
	return 0;
}
//更改方式二

int* Test_100_2_3(void)
{
	int* ptr = malloc(100);//堆区，不会被销毁
	return ptr;
}
int main_100_2_3()
{
	int* p = Test_100_2_3();
	return 0;
}



/*
忘记释放动态开辟的内存，导致内存的泄漏
*/


void GetMemory_3_1(char** p, int num) {
	*p = (char*)malloc(num);
}
void Test_100_3_1(void) {
	char* str = NULL;
	GetMemory_3_1(&str, 100);
	strcpy(str, "hello");
	printf(str);//忘记释放	
}

int main_100_3_1()
{
	Test_100_3_1();
	return 0;
}

//改进方式一
void GetMemory_3_2(char** p, int num) {
	*p = (char*)malloc(num);
}
void Test_100_3_2(void) {
	char* str = NULL;
	GetMemory_3_2(&str, 100);
	strcpy(str, "hello");
	printf(str);
	free(str); str = NULL;
}
int main_100_3_2()
{
	Test_100_3_2();
	return 0;
}

/*
非法访问内存

free完成后，要及时将指针置空

*/

void Test_100_4_1(void) {
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);
	if (str != NULL) {
		strcpy(str, "wor1d");//非法访问内存
		printf(str);
	}
}
int main_100_4_1()
{
	Test_100_4_1();
	return 0;
}
//改进方式一
void Test_100_4_2(void) {
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//free释放str指向的空间后，并不会把str置为NULL
	str = NULL;
	if (str != NULL) {
		strcpy(str, "wor1d");
		printf(str);
	}
}
int main_100_4_2()
{
	Test_100_4_2();
	return 0;
}

/*

C/C++程序内存分配的几个区域:
	1.栈区 (stack ):在执行函数时，函数内局部变量的存储单元都可以在栈上创建，函数执行结束时这些存储单元自动被释放。
		栈内存分配运算内置于处理器的指令集中，效率很高，但是分配的内存容量有限。栈区主要存放运行函数而分配的局部变量、函数参数、返回数据、返回地址等。
	2堆区 ( heap ) :一般由程序员分配释放，若程序员不释放，程序结束时可能由OS回收。分配方式类似于链表。
	3数据段（静态区）( static)存放全局变量、静态数据。程序结束后由系统释放。
	4.代码段:存放函数体（类成员函数和全局函数)的二进制代码。

*/