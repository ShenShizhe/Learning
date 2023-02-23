#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include "Function.h"


//①越界访问
//int main(void)
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)//形成非法访问，越界		(&arr[])的地址与(&i)在高地址一致
// 栈区默认使用高地址处的空间，再使用低地址
// 数组随着下标的增长，地址是由低到高变化的
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}


//②字符串的拷贝

//算法一
//void my_strcopy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++; dest++;
//	}
//	*dest = *src;
//}
//算法二
//void my_strcopy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
////算法三
//void my_strcopy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//		while (*dest++ = *src++)
//		{
//			;
//		}
//}

//算法四
//#include <assert.h>
//void my_strcopy(char* dest, char* src)
//{
//	/*if (dest != NULL && src != NULL)*/
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//算法五
//#include <assert.h>
//void my_strcopy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//int main(void)
//{
//	//strcopy---字符串拷贝
//	char arr1[] = "################";
//	char arr2[] = "haha";
//	my_strcopy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}



//int main_81(void)
//{
//
//	int num = 10;
//	int* p = &num;
//	*p = 20;
//	printf("%d\n", num);
//	return 0;
//
//}
