#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include "Function.h"


//��Խ�����
//int main(void)
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)//�γɷǷ����ʣ�Խ��		(&arr[])�ĵ�ַ��(&i)�ڸߵ�ַһ��
// ջ��Ĭ��ʹ�øߵ�ַ���Ŀռ䣬��ʹ�õ͵�ַ
// ���������±����������ַ���ɵ͵��߱仯��
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}


//���ַ����Ŀ���

//�㷨һ
//void my_strcopy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++; dest++;
//	}
//	*dest = *src;
//}
//�㷨��
//void my_strcopy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
////�㷨��
//void my_strcopy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//		while (*dest++ = *src++)
//		{
//			;
//		}
//}

//�㷨��
//#include <assert.h>
//void my_strcopy(char* dest, char* src)
//{
//	/*if (dest != NULL && src != NULL)*/
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//�㷨��
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
//	//strcopy---�ַ�������
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
