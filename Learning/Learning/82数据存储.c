#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "Function.h"
//�������ڴ��еĴ洢��ԭ�롢���롢����
//C�������ͣ��������͡�char\short\int\long\float\double�����Զ�������(��������)����
//������ռ�ռ�����壺1����С������ʹ�õķ�Χ	2����ο����ڴ�ռ���ӽ�

/*
���ͣ�
char
	unsigned char[0~255]
	signed char[-128~-127]
short
	unsigned short
	signed shot
int
	unsigned int
	signed int
long
	unsigned long
	signed long


�����ͣ�
float
double

�������ͣ�

��������
�ṹ������
ö������
��������

ָ�����ͣ�
int *pi;
char *pc;
float *pf;
void *pv;

�����ͣ�
void ��ʾ�����ͣ������ͣ�,ͨ��Ӧ���ں��������ͷ��أ������Ĳ�����ָ�������
*/

/*
��С�ˣ�
��ˣ��洢��ģʽ����ָ���ݵĵ�λ�������ڴ�ĸߵ�ַ�У������ݵĸ�λ���������ڴ�ĵ͵�ַ��
С�ˣ��洢��ģʽ����ָ���ݵĵ�λ�������ڴ�ĵ͵�ַ�У������ݵĸ�λ���������ڴ�ĸߵ�ַ��

*/

//��Ƴ����жϵ�ǰ�豸���ֽ�����ʲô��
//˼·���жϵ�һ���ֽ��Ƿ����λ���ֽ�һ�£�һ����ΪС���ֽ���洢ģʽ����֮����Ϊ����ֽ���洢ģʽ
//����һ
//int main(void)
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		printf("����С���ֽ���洢ģʽ����\n");
//	else
//		printf("���Ǵ���ֽ���洢ģʽ����\n");
//	return 0;
//}
//��������

//дһ���������жϣ�����1ΪС�ˣ�����0Ϊ���
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;//����1��С�ˣ�0�����
//}

//������
int check_sys()
{
	int a = 1;
	return *(char*)&a;
}
int main_82(void)
{
	int ret = check_sys();
	if (ret == 1)
		printf("����С���ֽ���洢ģʽ����\n");
	else
		printf("���Ǵ���ֽ���洢ģʽ����\n");
	return 0;
}