#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "Function.h"
//int main(void)
//{
//	//�ַ�ָ��
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";
//	//ָ������-����-���ָ�������
//	int* arr[10];
//	char* ch[5];
//	//����ָ��-ָ������
//	//int* p3;//����ָ��-ָ�����ε�ָ��
//	//char* p4;//�ַ�ָ��-ָ���ַ���ָ��
//	int arr2[5];//����
//	int(*pa)[5] = &arr2;//ȡ�������ַ��pa����һ������ָ��
//
//	int(*parr3[10])[5];
//	return 0;
//}

//һά����Ĵ���
//void test(int arr[]) {}//ok
//void test(int arr[10]) {}//ok
//void test(int* arr) {}//ok
//void test2(int* arr[20]) {}//ok
//void test2(int** arr) {}//ok
//int main(void)
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	tetst2(arr2);
//	return 0;
//}

//��ά����Ĵ���
//void test1(int arr[3][5]) {}//ok
//void test1(int arr[][5]) {}//ok
//void test1(int arr[3][]) {}//error
//void test1(int arr[][]) {}//error
//void test1(int *arr) {}//error
//void test1(int **arr) {}//error
//void test1(int (*arr)[5]) {}//ok

//int main(void)
//{
//	int arr[3][5] = { 0 };
//	test1(arr);//��ά���鴫��
//	return 0;
//}
/*
�ܽ᣺��ά����Ĵ��Σ������βε����ֻ��ʡ�Ե�һ��[]�ڵ�����

��Ϊ����һ����ά���飬���Բ�֪���ж����У����Ǳ���Ҫ֪��һ�ж���Ԫ�أ������ŷ�������
*/

//һ��ָ�봫��
//void printperr(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main(void)
//
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printperr(p, sz);//һ��ָ��p����������
//	return 0;
//}


//����������Ϊһ��ָ��ʱ�������ܽ���ʲô������
//void test1(int* p) {}
//void test2(char* p) {}
//int main(void)
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);//ok
//	test1(p1);//ok
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);//ok
//	test(pc);//ok
//	return 0;
//}


//����ָ��
//void test(int** ptr) {}
//int main(void)
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);//ok
//	test(&p);//ok
//	int* arr[10];
//	test(arr);//ok,���ζ���Ϊָ������
//	return 0;
//}

/*
����ָ��--ָ�������ָ��
����ָ��--ָ������ָ��--��ź�����ַ��ָ��

*/
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//
//int main(void)
//{
//	int a = 10, b = 20;
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	//printf("%d\n", Add(a, b));
//	//&�������뺯�������Ǻ����ĵ�ַ
//	//printf("%p\n", &add);//00007FF64DF814C9�������ĵ�ַ��
//	//printf("%p\n", add);
//
//	//����ָ��
//	int(*pa)(int, int) = add;
//	printf("%d\n", pa(2, 3));//ok
//	printf("%d\n", (*pa)(2, 3));//ok
//	printf("%d\n", *pa(2, 3));//error
// 	printf("%d\n", (**pa)(2, 3));//ok
// 	printf("%d\n", (***pa)(2, 3));//ok

// 
//
//	return 0;
//
//}

//void printstr(char* str)
//{
//	printf("%s\n", str);
//}
//int main(void)
//{
//	void(*p)(char*) = printstr;
//	(*p)("hell world!");
//	return 0;
//}