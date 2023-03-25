#define _CRT_SECURE_NO_WARNINGS 1


/*

memcpy

void* memcpy(void* dest, const void* src, size_t num);

函数memcpy从source的位置开始向后复制num个字节的数据到destination的内存位置。
这个函数在遇到‘\O'的时候并不会停下来。
如果source和destination有任何的重叠，复制的结果都是未定义的。

C语言标准规定：memcpy只要处理不重叠的内存拷贝即可，memmove处理重叠内存的拷贝

*/
#include <stdio.h>
#include <string.h>
#include <assert.h>
void* my_memcpy(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}


struct S
{
	char name[20];
	int age;
};

int main_95_01()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[5] = { 0 };

	struct S arr3[] = { {"张三",20},{"李四",24},{"王五",45} };
	struct S arr4[3] = { 0 };
	/*memcpy(arr2, arr1, sizeof(arr1));
	memcpy(arr4, arr3, sizeof(arr3));*/
	my_memcpy(arr2, arr1, sizeof(arr1));
	my_memcpy(arr4, arr3, sizeof(arr3));
	return 0;
}

/*
memmove
memmove函数的原型如下：

void* memmove(void* dest, const void* src, size_t n);
其中，dest表示要将数据拷贝到的目标地址，src表示要从中复制数据的源地址，n表示要复制的字节数。

该函数的作用是将src指向的内存区域中的数据复制到dest指向的内存区域中，复制的字节数由n指定。
与memcpy函数不同，memmove函数可以处理源地址和目标地址有重叠部分的情况。

需要注意：在Visual Studio 环境下，memcpy与memmove一样
*/
#include <stdio.h>
#include <string.h>
#include <assert.h>
void* my_memmove(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	assert(dest && src);

	if (dest < src)//前->后
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;

		}
	}
	else//后->前
	{

		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	return ret;
}
void* my_memmove_02(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	assert(dest && src);


	if (dest<src || dest>(char*)src + count)//前->后
	{

	}
	else//后->前
	{

	}

	return ret;
}
int main_95_02()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };//将1.2.3.4.5拷贝到3.4.5.6.7的空间中
	int arr2[] = { 0 };
	//my_memcpy(arr1 + 2, arr1, 20);
	//memmove(arr1 + 2, arr1, 20);
	my_memmove(arr1, arr1 + 2, 20);

	int i = 0;
	for (; i < 10; i++)
	{
		printf("%d ", arr1[i]);
		/*
		调用my_memcpy后, 1, 2会【从前往后】将3~7的空间覆盖【1 2 1 2 1 2 1 8 9 10】memmove可以解决这个问题

		当dest与src出现重叠拷贝时，当dest<src时，需要从前向后拷贝，当dest>src&&dest<src+count时，则需要从后向前拷贝
		*/
	}
	return 0;
}

/*
memcmp

`memcmp`函数是C/C++语言中的一个标准库函数，用于比较两个内存区域的内容是否相同。它的原型如下：

int memcmp(const void *ptr1, const void *ptr2, size_t num);

其中，`ptr1`和`ptr2`参数分别指向要比较的两个内存区域的起始位置，`num`参数指定要比较的字节数。

函数返回值：

如果 `ptr1` 和 `ptr2` 指向的内存区域内容相等，则返回值为 0。
如果 `ptr1` 指向的内存区域小于 `ptr2` 指向的内存区域，则返回值小于 0。
如果 `ptr1` 指向的内存区域大于 `ptr2` 指向的内存区域，则返回值大于 0。

在使用 `memcmp` 函数之前，应该确保指针参数所指向的内存区域是合法的，并且这些内存区域包含足够的数据以供比较。
*/

#include <stdio.h>
#include <string.h>
#include <assert.h>

int main_95_03()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,5,4,3 };
	//int ret = memcmp(arr1, arr2, 8);//0

	int ret = memcmp(arr1, arr2, 9);//-1

	printf("%d\n", ret);
	return 0;
}

/*
memset
`memset`函数是C/C++语言中的一个标准库函数，用于将指定内存区域的前若干个字节设置为特定的值。它的原型如下：

void* memset(void *ptr, int value, size_t num);

其中，`ptr`参数指向要设置的内存区域的起始位置，`value`参数指定要设置的值（以整数形式给出），`num`参数指定要设置的字节数。

函数返回值：

函数返回指向 `ptr` 的指针。这意味着，如果成功地初始化了 `num` 字节，则返回 `ptr`；否则，可能会发生错误并返回空指针。请注意，C++ 标准不要求返回指针。

在使用 `memset` 函数之前，应该确保指针参数所指向的内存区域是合法的，并且这些内存区域包含足够的数据以供设置。
*/

#include <stdio.h>
#include <string.h>
int main_95_04()
{
	/*char arr[10] = "";
	memset(arr, '#', 10);*/

	int arr[10] = { 0 };
	memset(arr, 1, 10);//向数组插入10个字节，字节的每位均为1
	//思考：如何将10个为1的元素设置到arr数组中？
	return 0;
}