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


*/
#include <stdio.h>
#include <string.h>
#include <assert.h>
void* my_memmove(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);

}

int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };//将1.2.3.4.5拷贝到3.4.5.6.7的空间中
	int arr2[] = { 0 };
	//my_memcpy(arr1 + 2, arr1, 20);
	//memmove(arr1 + 2, arr1, 20);
	my_memmove(arr1 + 2, arr1, 20);

	int i = 0;
	for (; i < 10; i++)
	{
		printf("%d ", arr1[i]);//调用my_memcpy后,1,2会【从前往后】将3~7的空间覆盖【1 2 1 2 1 2 1 8 9 10】memmove可以解决这个问题
	}
	//需要注意：在Visual Studio 环境下，memcpy与memmove一样
	return 0;
}