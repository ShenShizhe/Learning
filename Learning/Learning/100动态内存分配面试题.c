#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>



/*

1.���д���������ֱ���������
2.��������ڴ�й©������

str��ֵ���ݵ���ʽ��p,p��GetMemory�������βΣ�ֻ�ܺ����ڲ���Ч��GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷŲ����޷��ҵ������Ի�����ڴ�й©
*/
void GetMemory_1_1(char* p)
{
	p = (char*)malloc(100);
}
void Test_100_1_1(void)
{
	char* str = NULL;
	GetMemory_1_1(str);
	strcpy(str, "he1lo wor1d");//NULL������Ч��ַ�������ڴ�ʧ�ܣ��������
	printf(str);
}

int main_100_1_1()
{
	Test_100_1_1();
	return 0;
}



//������ʽһ
void GetMemory_1_2(char** p)
{
	*p = (char*)malloc(100);
}
void Test_100_1_2(void)
{
	char* str = NULL;
	GetMemory_1_2(&str);
	strcpy(str, "he1lo wor1d");
	printf(str);
	free(str); str = NULL;
}

int main_100_1_2()
{
	Test_100_1_2();
	return 0;
}

//������ʽ��

char* GetMemory_1_3(char* p)
{
	p = (char*)malloc(100);
	return p;
}
void Test_100_1_3(void)
{
	char* str = NULL;
	str = GetMemory_1_3(str);
	strcpy(str, "he1lo wor1d");
	printf(str);
	free(str); str = NULL;
}
int main_100_1_3()
{
	Test_100_1_3();
	return 0;
}

/*
����ջ�ռ��ַ�����⣬���ڷǷ������ڴ������

������static���ξֲ����������������ھ�̬�����Ӷ�ʹ���������ڱ䳤

*/

char* GetMemory_2_1(void)
{
	char p[] = "hello world";
	return p;//�ֲ�����p����ջ������ջ�Ժ󽫱����٣����غ�p�ĵ�ַ�ͻᱻ���٣�
}
void Test_100_2_1(void)
{
	char* str = NULL;
	str = GetMemory_2_1();//�Ƿ��ķ����ڴ�
	printf(str);//��ӡ���ֵ
}
int main_100_2_1()
{
	Test_100_2_1();
	return 0;
}
//���ķ�ʽһ
char* GetMemory_2_2(void)
{
	static char p[] = "hello world";
	return p;
}
void Test_100_2_2(void)
{
	char* str = NULL;
	str = GetMemory_2_2();
	printf(str);
}
int main_100_2_2()
{
	Test_100_2_2();
	return 0;
}
//���ķ�ʽ��

int* Test_100_2_3(void)
{
	int* ptr = malloc(100);//���������ᱻ����
	return ptr;
}
int main_100_2_3()
{
	int* p = Test_100_2_3();
	return 0;
}



/*
�����ͷŶ�̬���ٵ��ڴ棬�����ڴ��й©
*/


void GetMemory_3_1(char** p, int num) {
	*p = (char*)malloc(num);
}
void Test_100_3_1(void) {
	char* str = NULL;
	GetMemory_3_1(&str, 100);
	strcpy(str, "hello");
	printf(str);//�����ͷ�	
}

int main_100_3_1()
{
	Test_100_3_1();
	return 0;
}

//�Ľ���ʽһ
void GetMemory_3_2(char** p, int num) {
	*p = (char*)malloc(num);
}
void Test_100_3_2(void) {
	char* str = NULL;
	GetMemory_3_2(&str, 100);
	strcpy(str, "hello");
	printf(str);
	free(str); str = NULL;
}
int main_100_3_2()
{
	Test_100_3_2();
	return 0;
}

/*
�Ƿ������ڴ�

free��ɺ�Ҫ��ʱ��ָ���ÿ�

*/

void Test_100_4_1(void) {
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);
	if (str != NULL) {
		strcpy(str, "wor1d");//�Ƿ������ڴ�
		printf(str);
	}
}
int main_100_4_1()
{
	Test_100_4_1();
	return 0;
}
//�Ľ���ʽһ
void Test_100_4_2(void) {
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//free�ͷ�strָ��Ŀռ�󣬲������str��ΪNULL
	str = NULL;
	if (str != NULL) {
		strcpy(str, "wor1d");
		printf(str);
	}
}
int main_100_4_2()
{
	Test_100_4_2();
	return 0;
}

/*

C/C++�����ڴ����ļ�������:
	1.ջ�� (stack ):��ִ�к���ʱ�������ھֲ������Ĵ洢��Ԫ��������ջ�ϴ���������ִ�н���ʱ��Щ�洢��Ԫ�Զ����ͷš�
		ջ�ڴ�������������ڴ�������ָ��У�Ч�ʺܸߣ����Ƿ�����ڴ��������ޡ�ջ����Ҫ������к���������ľֲ������������������������ݡ����ص�ַ�ȡ�
	2���� ( heap ) :һ���ɳ���Ա�����ͷţ�������Ա���ͷţ��������ʱ������OS���ա����䷽ʽ����������
	3���ݶΣ���̬����( static)���ȫ�ֱ�������̬���ݡ������������ϵͳ�ͷš�
	4.�����:��ź����壨���Ա������ȫ�ֺ���)�Ķ����ƴ��롣

*/