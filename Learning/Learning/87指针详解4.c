#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "Function.h"

//����1
//(*(void)(*)()0)();
// //��0ǿ��ת���ɣ�void(*)()����ָ������-0����һ�������ĵ�ַ������0��ַ���ĺ�����
// ����2
//void (*signal(int, void(*)(int)))(int);
/*
signal��һ����������
signal�����Ĳ�����������int��������ָ�롿���ú���ָ��ָ��ĺ����Ĳ���Ϊ��int��,��������Ϊ��void��
signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��ĺ����Ĳ���Ϊ��int��,��������Ϊ��void��

*/
//typedef unsigned int uint;//��typedef����������ʶ��
//typedef void(*)int pfun_t;//error
//��д��
//typedef void(*pfun_t)(int);//ok,����void(*)(int)��������Ϊpfun_t
//pfun_t signal(int, pfun_t);

//
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
////����ָ������
//int main(void)
//{
//	//ָ������
//	int* arr[5];//ָ������
//
//	int(*pa)(int, int) = add;//��add��sub��mul��div����������һ��
//	//��Ҫһ�����飬��������Դ���ĸ������ĵ�ַ--����ָ�������
//	int(*parr[4])(int, int) = { add,sub,mul,div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));//5 -1 6 0
//	}
//	return 0;
//}


//my_srtrcpy(char* dest, const char* src);
//
////1.дһ������ָ��pf,ָ��my_srtrcpy
//char* (*pf)(char*, const char*);
//
////2.дһ������ָ�����飬�ܹ����4��my_srtrcpy�����ĵ�ַ
//char* (*pfArr[4])(char*, const char*);



//������
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//
//int xhy(int x, int y)
//{
//	return x ^ y;
//}
//void menu_jsq()
//{
//	printf("********************************************\n");
//	printf("********************************************\n");
//	printf("**  0.exit 1.add  2.sum 3.mul 4.div 5.xhy **\n");
//	printf("********************************************\n");
//	printf("********************************************\n");
//
//}
//int main(void)
//{
//	int input = 0, x = 0, y = 0;
//	do
//	{
//		menu_jsq();
//		printf("��ѡ��>>>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 0:
//			printf("���˳�\n");
//			break;
//		case 1:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", add(x, y));
//			break;
//		case 2:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", sub(x, y));
//			break;
//		case 3:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", mul(x, y));
//			break;
//		case 4:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", div(x, y));
//			break;
//		default:
//			printf("����ѡ������,������ѡ�񣡣���\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//int fun3(int x)
//{
//	static int a = 3;
//	a = a + x;
//	return a;
//}
//
//

//ָ����ָ�������ָ��
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//
//int xhy(int x, int y)
//{
//	return x ^ y;
//}
//void menu_jsq()
//{
//	printf("********************************************\n");
//	printf("********************************************\n");
//	printf("**  0.exit 1.add  2.sum 3.mul 4.div 5.xhy **\n");
//	printf("********************************************\n");
//	printf("********************************************\n");
//
//}
//void calc(int (*pf)(int, int))
//{
//	int x = 0, y = 0;
//	printf("��������������������");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main(void)
//{
//	int input = 0, x = 0, y = 0;
//	do
//	{
//		menu_jsq();
//		printf("��ѡ��>>>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 0:
//			printf("���˳�\n");
//			break;
//		case 1:
//			calc(add);
//			break;
//		case 2:
//			calc(sub);
//			break;
//		case 3:
//			calc(mul);
//			break;
//		case 4:
//			calc(div);
//			break;
//		case 5:
//			calc(xhy);
//			break;
//		default:
//			printf("����ѡ������,������ѡ�񣡣���\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//ָ����ָ�������ָ��

//int hs(int x, int y)
//{
//	return x + y;
//}
//int main(void)
//{
//
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//ȡ������ĵ�ַ
//	int (*pfArr[4])(int, int);//pfArr��һ������--����ָ������
//	int(*(*ppfArr[4]))(int, int) = &pfArr;//ppfArr��һ��ָ����ָ�������ָ��
//	//ppfArr��һ������ָ�룬ָ��ָ����������ĸ�Ԫ��
//	//ָ��������ÿ��Ԫ�ص�������һ������ָ�롾int(*)(int ,int )��
//
//	return 0;
//}



