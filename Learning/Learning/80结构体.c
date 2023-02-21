#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "Function.h"

//描述一个学生的一些数据：名字、年龄、性别、电话

//struct:结构体关键字 Stu:结构体标签  struct Stu：结构体类型

//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//	char tele[15];
//}Stu;//struct Stu s1;写法与Stu s;相同
////}s1, s2, s3;//s1,s2,s3是三个全局的结构体变量
//int main(void)
//{
//	struct Stu s1 = { "张三",20,"男","111111111" };//
//	Stu s = { "王五",18,"男","23345667888" };//局部的结构体变量
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
	Stu s = { "李四",20,"11111111","男" };
	print_struct1(s);
	print_struct2(&s);

	return 0;
}

//函数栈帧的创建和销毁