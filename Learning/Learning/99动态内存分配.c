#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
栈区：局部变量、函数的形式参数、局部区域的数组
堆区：动态内存分配
静态区：全局变量、静态变量、全局范围的数组
*/


//动态内存分配

//struct S
//{
//	char name[20];
//	int age;
//};

//int main()
//{
//	//struct S arr[50];//50个struct S 类型的数据，对于不确定的情况可能造成浪费和空间不够的情况
//
//
//
//	return 0;
//}

/*
malloc
void * malloc(size_t size);

这个函数向内存申请一块连续可用的空间，并返回指向这块空间的指针。
·如果开辟成功，则返回一个指向开辟好空间的指针。
·如果开辟失败，则返回一个NULL指针，因此malloc的返回值一定要做检查。
·返回值的类型是void*，所以malloc函数并不知道开辟空间的类型，具体在使用的时候使用者自己来决定.·如果参数size为0 , malloc的行为是标准是未定义的，取决于编译器。


free
void free(void* ptr)
free函数用来释放动态开辟的内存。
如果参数ptr指向的空间不是动态开辟的，那free函数的行为是未定义的。
如果参数ptr是NULL指针，则函数什么事都不做。
*/


#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>

int main_99_1()
{
	// 向内存申请 10 个整型的空间
	int* p = (int*)malloc(10 * sizeof(int));

	if (p == NULL)
	{
		// 打印错误的原因
		printf("%s\n", strerror(errno));
	}
	else
	{
		// 正常使用
		int i = 0;
		for (i = 0; i < 10; i++)
			*(p + i) = i;
		for (i = 0; i < 10; i++)
			printf("%d ", *(p + i));
	}
	//动态申请的空间不再使用的时候，就应该还给操作系统

	free(p);
	p = NULL;
	return 0;
}

/*
calloc

void* colloc (size_t num,size_t size)

函数的功能是为num 个大小为size的元素开辟一块空间，并且把空间的每个字节初始化为0。
与函数 ma1loc 的区别只在于ca1loc 会在返回地址之前把申请的空间的每个字节初始化为全0。

*/
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>
int main_99_2()
{
	int* p = (int*)calloc(10, sizeof(int));


	if (p == NULL)
	{
		// 打印错误的原因
		printf("%s\n", strerror(errno));
	}
	else
	{
		// 正常使用
		int i = 0;
		for (i = 0; i < 10; i++)
			printf("%d ", *(p + i));
	}
	//free--释放动态开辟的空间的
	free(p);
	p = NULL;


	return 0;
}


/*
realloc

realloc函数的出现让动态内存管理更加灵活。
有时会我们发现过去申请的空间太小了，有时候我们又会觉得申请的空间过大了，那为了合理的使用内存，我们一定会对内存的大小做灵活的调整。那rea1loc函数就可以做到对动态开辟内存大小的调整。函数原型如下;

void* realloc (void ptr,size_t size)

ptr是要调整的内存地址
size调整之后新大小
返回值为调整之后的内存起始位置。
这个函数调整原内存空间大小的基础上，还会将原来内存中的数据移动到新的空间。
realloc在调整内存空间的是存在两种情况:

realloc使用的两个注意事项：
1.如果P指向的空间之后有足够的内存空间可以直接追加，则直接追加，后返回P
2.如果P指向的空间之后没有足够的内存空间可以直接追加，则realloc函数会重新找一个新的内存区域，开辟一块满足需求的空间，并且把原来内存的数据进行拷贝后释放旧的内存空间，返回新开辟的内存空间的地址
3.需要用一个新的变量来接收realloc函数的返回值
*/

#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>

int main_99_3()
{
	int* p = (int*)malloc(20);
	if (p == NULL)
		printf("%s\n", strerror(errno));
	else
	{
		int i = 0;
		for (; i < 5; i++)
			*(p + i) = i;
	}
	//只是在在使用malloc开辟的20个字节空间，假设20个字节不能满足我们的使用，我们的需求是40个字节，此时可以使用realloc来调整动态开辟的内存
	int* ptr = realloc(p, 40);
	if (ptr == NULL)
	{
		//追加失败

	}
	if (ptr != NULL)
	{
		//追加成功
		p = ptr;
		int i = 0;
		for (i = 5; i < 10; i++)
			*(p + 1) = i;
		for (i = 0; i < 10; i++)
			printf("%d ", *(p + i));
	}
	//释放内存
	free(p);
	p = NULL;
	return 0;
}


//常见的动态内存错误
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>
#include <Windows.h>
int main_99_4()
{
	//1.对NULL进行解引用操作

	//int* p = (int*)malloc(40);
	////如果此时malloc失败，p就被赋值为NULL
	//*p = 0;//err
	//int i = 0;
	//for (; i < 10; i++)
	//{

	//	*(p + 1) = i;//err
	//}

	//free(p);
	//p = NULL;


	//2.对动态开辟内存的越界访问

	//int* p = (int*)malloc(5 * sizeof(int));
	//if (p == NULL){	}
	//else
	//{
	//	int i = 0;
	//	//i>5时，越界访问
	//	for (i = 0; i < 10; i++)
	//		*(p + i) = i;
	//}
	//free(p);
	//p = NULL;

	//3.对非动态开辟内存的free

	//int a = 10;//栈
	//int* p = &a;
	//*p = 20;

	//free(p);//error,只能对堆区的动态空间进行操作
	//p = NULL;

	//4.使用free释放一块动态开辟内存的一部分

	//int* p = (int*)malloc(40);

	//if (p == NULL)
	//{
	//}
	//else
	//{
	//	int i = 0;
	//	for (i = 0; i < 10; i++)
	//		*p++ = i;
	//}
	//free(p);//error,使用free释放一块动态开辟内存的一部分
	//p = NULL;

	//5.对同一块动态内存多次释放【原则：谁开辟，谁回收；谁申请，谁回收】【避免：free完成后及时赋空指针，后续的free将会失效】


	//int* p = (int*)malloc(40);
	//if (p == NULL) {}
	//else
	//{
	//	//使用
	//}
	//free(p);
	////.....
	//free(p);//error,多次进行free

	//6.动态开辟内存忘记释放（内存泄漏）

	//while (1)
	//{
	//	malloc(1);//忘记释放
	//	//Sleep(1000);
	//}

	return 0;
}