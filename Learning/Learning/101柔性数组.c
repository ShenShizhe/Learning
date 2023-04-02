#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
/*
也许你从来没有听说过柔性数组 ( flexible array )这个概念，但是它确实是存在的。
C99中，结构中的最后一个元素允许是未知大小的数组，这就叫做『柔性数组』成员。I

*/
/*

柔性数组的特点：

结构中的柔性数组成员前面必须至少一个其他成员。
sizeof返回的这种结构大小不包括柔性数组的内存。
包含柔性数组成员的结构用malloc ()函数进行内存的动态分配，并且分配的内存应该大于结构的大小，以适应柔性数组的预期大小。


优点：

第一个好处是∶方便内存释放
	如果我们的代码是在一个给别人用的函数中，你在里面做了二次内存分配，并把整个结构体返回给用户。
	用户调用free可以释放结构体，但是用户并不知道这个结构体内的成员也需要free，所以你不能指望用户来发现这个事。
	所以，如果我们把结构体的内存以及其成员要的内存一次性分配好了，并返回给用户一个结构体指针，用户做一次free就可以把所有的内存也给释放掉。
第二个好处是:这样有利于访问速度.
	连续的内存有益于提高访问速度，也有益于减少内存碎片。(其实，我个人觉得也没多高了，反正你跑不了要用做偏移量的加法来寻址)


*/

struct SD
{
	int n;
	int arr[10];//传统的写法

};

struct S
{
	int n;
	int arr[];//未知大小--(柔性数组成员，数组大小可调整)
};

struct D
{
	int n;
	int* arr;
};

//方案一：柔性数组的使用，开辟的空间与n是连续的，访问效率更高
int main_101_1()
{
	//struct S s;
	//printf("%d\n", sizeof(s));//4

	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
	ps->n = 100;
	int i = 0;
	for (; i < 5; i++)
		ps->arr[i] = i;//0 1 2 3 4
	struct S* ptr = realloc(ps, 44);
	if (ptr != NULL)
		ps = ptr;
	for (i = 5; i < 10; i++)
		ps->arr[i] = i;
	for (i = 0; i < 10; i++)
		printf("%d ", ps->arr[i]);
	//释放

	free(ps);
	ps = NULL;
	return 0;
}

//方案二：使用指针来解决，容易出现内存碎片，有局限性
int main_101_2()
{
	struct D* ps = (struct S*)malloc(sizeof(struct D));
	ps->arr = malloc(5 * sizeof(int));
	int i = 0;
	for (; i < 5; i++)
		ps->arr[i] = i;
	for (i = 0; i < 5; i++)
		printf("%d ", ps->arr[i]);
	//调整大小
	int* ptr = realloc(ps->arr, 10 * sizeof(int));
	if (ptr != NULL)
		ps->arr = ptr;
	for (i = 5; i < 10; i++)
		ps->arr[i] = i;
	for (i = 0; i < 10; i++)
		printf("%d ", ps->arr[i]);

	//释放
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;

	return 0;
}





