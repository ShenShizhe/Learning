#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "Function.h"

//����һ��ѧ����һЩ���ݣ����֡����䡢�Ա𡢵绰

//struct:�ṹ��ؼ��� Stu:�ṹ���ǩ  struct Stu���ṹ������

//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//	char tele[15];
//}Stu;//struct Stu s1;д����Stu s;��ͬ
////}s1, s2, s3;//s1,s2,s3������ȫ�ֵĽṹ�����
//int main(void)
//{
//	struct Stu s1 = { "����",20,"��","111111111" };//
//	Stu s = { "����",18,"��","23345667888" };//�ֲ��Ľṹ�����
//	return 0;
//}


//
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main(void)
//{
//	char arr[] = "hello world\b";
//	struct T t = { "hehe",{100,'W',"HELLO WORLD",3.14},arr };
//
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}
typedef struct Stu
{
	char name[20];
	short age;
	char tele[15];
	char sex[5];
}Stu;

void print_struct1(Stu temp)
{
	printf("name:%s\n", temp.name);
	printf("age:%d\n", temp.age);
	printf("tele:%s\n", temp.tele);
	printf("sex:%s\n", temp.sex);
}
void print_struct2(Stu* tep) {
	printf("name:%s\n", tep->name);
	printf("age:%d\n", tep->age);
	printf("tele:%s\n", tep->tele);
	printf("sex:%s\n", tep->sex);
}
int main(void)
{
	Stu s = { "����",20,"11111111","��" };
	print_struct1(s);
	print_struct2(&s);

	return 0;
}

//����ջ֡�Ĵ���������