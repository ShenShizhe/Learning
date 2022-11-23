# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
# include <time.h>

//创建一个结构体类型[struct Stu]
//学生[名字、年龄、学号]
struct Stu
{
	//成员变量
	char name[10];
	int age;
	char id[20];
};
int main(void)
{
	//访问一个结构的成员[. 结构体 .成员名][->结构体指针->成员名]

	int a = 10;
	//使用struct Stu这个类型创建了一个学生对象s1,并初始化
	struct Stu s1 = { "张三",18,"888888" };
	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);
	//结构体变量.成员名


	struct Stu* ps = &s1;
	printf("%s\n", (*ps).name);
	printf("%d\n", (*ps).age);
	printf("%s\n", (*ps).id);


	printf("%s\n", ps->name);//[ps->name]等价于[(*ps).name]
	printf("%d\n", ps->age);
	printf("%s\n", ps->id);
	//结构体指针->成员名

	return 0;
}