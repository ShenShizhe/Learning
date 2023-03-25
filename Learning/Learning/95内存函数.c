#define _CRT_SECURE_NO_WARNINGS 1


/*

memcpy

void* memcpy(void* dest, const void* src, size_t num);

����memcpy��source��λ�ÿ�ʼ�����num���ֽڵ����ݵ�destination���ڴ�λ�á�
���������������\O'��ʱ�򲢲���ͣ������
���source��destination���κε��ص������ƵĽ������δ����ġ�

C���Ա�׼�涨��memcpyֻҪ�����ص����ڴ濽�����ɣ�memmove�����ص��ڴ�Ŀ���

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

	struct S arr3[] = { {"����",20},{"����",24},{"����",45} };
	struct S arr4[3] = { 0 };
	/*memcpy(arr2, arr1, sizeof(arr1));
	memcpy(arr4, arr3, sizeof(arr3));*/
	my_memcpy(arr2, arr1, sizeof(arr1));
	my_memcpy(arr4, arr3, sizeof(arr3));
	return 0;
}

/*
memmove
memmove������ԭ�����£�

void* memmove(void* dest, const void* src, size_t n);
���У�dest��ʾҪ�����ݿ�������Ŀ���ַ��src��ʾҪ���и������ݵ�Դ��ַ��n��ʾҪ���Ƶ��ֽ�����

�ú����������ǽ�srcָ����ڴ������е����ݸ��Ƶ�destָ����ڴ������У����Ƶ��ֽ�����nָ����
��memcpy������ͬ��memmove�������Դ���Դ��ַ��Ŀ���ַ���ص����ֵ������

��Ҫע�⣺��Visual Studio �����£�memcpy��memmoveһ��
*/
#include <stdio.h>
#include <string.h>
#include <assert.h>
void* my_memmove(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	assert(dest && src);

	if (dest < src)//ǰ->��
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;

		}
	}
	else//��->ǰ
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


	if (dest<src || dest>(char*)src + count)//ǰ->��
	{

	}
	else//��->ǰ
	{

	}

	return ret;
}
int main_95_02()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };//��1.2.3.4.5������3.4.5.6.7�Ŀռ���
	int arr2[] = { 0 };
	//my_memcpy(arr1 + 2, arr1, 20);
	//memmove(arr1 + 2, arr1, 20);
	my_memmove(arr1, arr1 + 2, 20);

	int i = 0;
	for (; i < 10; i++)
	{
		printf("%d ", arr1[i]);
		/*
		����my_memcpy��, 1, 2�᡾��ǰ���󡿽�3~7�Ŀռ串�ǡ�1 2 1 2 1 2 1 8 9 10��memmove���Խ���������

		��dest��src�����ص�����ʱ����dest<srcʱ����Ҫ��ǰ��󿽱�����dest>src&&dest<src+countʱ������Ҫ�Ӻ���ǰ����
		*/
	}
	return 0;
}

/*
memcmp

`memcmp`������C/C++�����е�һ����׼�⺯�������ڱȽ������ڴ�����������Ƿ���ͬ������ԭ�����£�

int memcmp(const void *ptr1, const void *ptr2, size_t num);

���У�`ptr1`��`ptr2`�����ֱ�ָ��Ҫ�Ƚϵ������ڴ��������ʼλ�ã�`num`����ָ��Ҫ�Ƚϵ��ֽ�����

��������ֵ��

��� `ptr1` �� `ptr2` ָ����ڴ�����������ȣ��򷵻�ֵΪ 0��
��� `ptr1` ָ����ڴ�����С�� `ptr2` ָ����ڴ������򷵻�ֵС�� 0��
��� `ptr1` ָ����ڴ�������� `ptr2` ָ����ڴ������򷵻�ֵ���� 0��

��ʹ�� `memcmp` ����֮ǰ��Ӧ��ȷ��ָ�������ָ����ڴ������ǺϷ��ģ�������Щ�ڴ���������㹻�������Թ��Ƚϡ�
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
`memset`������C/C++�����е�һ����׼�⺯�������ڽ�ָ���ڴ������ǰ���ɸ��ֽ�����Ϊ�ض���ֵ������ԭ�����£�

void* memset(void *ptr, int value, size_t num);

���У�`ptr`����ָ��Ҫ���õ��ڴ��������ʼλ�ã�`value`����ָ��Ҫ���õ�ֵ����������ʽ��������`num`����ָ��Ҫ���õ��ֽ�����

��������ֵ��

��������ָ�� `ptr` ��ָ�롣����ζ�ţ�����ɹ��س�ʼ���� `num` �ֽڣ��򷵻� `ptr`�����򣬿��ܻᷢ�����󲢷��ؿ�ָ�롣��ע�⣬C++ ��׼��Ҫ�󷵻�ָ�롣

��ʹ�� `memset` ����֮ǰ��Ӧ��ȷ��ָ�������ָ����ڴ������ǺϷ��ģ�������Щ�ڴ���������㹻�������Թ����á�
*/

#include <stdio.h>
#include <string.h>
int main_95_04()
{
	/*char arr[10] = "";
	memset(arr, '#', 10);*/

	int arr[10] = { 0 };
	memset(arr, 1, 10);//���������10���ֽڣ��ֽڵ�ÿλ��Ϊ1
	//˼������ν�10��Ϊ1��Ԫ�����õ�arr�����У�
	return 0;
}