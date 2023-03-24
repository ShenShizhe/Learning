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
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };//��1.2.3.4.5������3.4.5.6.7�Ŀռ���
	int arr2[] = { 0 };
	//my_memcpy(arr1 + 2, arr1, 20);
	//memmove(arr1 + 2, arr1, 20);
	my_memmove(arr1 + 2, arr1, 20);

	int i = 0;
	for (; i < 10; i++)
	{
		printf("%d ", arr1[i]);//����my_memcpy��,1,2�᡾��ǰ���󡿽�3~7�Ŀռ串�ǡ�1 2 1 2 1 2 1 8 9 10��memmove���Խ���������
	}
	//��Ҫע�⣺��Visual Studio �����£�memcpy��memmoveһ��
	return 0;
}