#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*

内置类型[char、short、int、long、float、double]

自定义类型（复杂的对象）--复杂类型[结构体、枚举、联合体]


结构体：结构体类型的声明、结构的自引用、结构体变量的定义和初始化、结构体内存对齐、结构体传参、结构体实现位段(位段的填充&可移植性)

枚举：枚举的定义、枚举的优点、枚举的使用

联合：联合类型定义、联合特点、联合大小计算
*/

/*
声明结构体类型[声明学生类型来创建学生对象或者变量]
描述学生属性：姓名、电话、性别、年龄


*/
//
//struct Student {
//	char name[20];
//	char tele[11];
//	char sex[10];
//	int age;
//}s4, s5, s6;
//
////全局变量[s3,s4, s5, s6;]
//struct Student s3;
//
////结构体自引用[采用指针的方式]
//struct Node
//{
//	int data;
//	struct Node* next;
//
//}Node;//将struct Node类型名改为Node
//
//
//int main()
//{
//	//创建结构体变量
//	struct Student s1;
//	struct Student s2;
//
//
//
//
//	return 0;
//}

//结构体变量的定义和初始化
//struct T
//{
//	double weight;
//	short age;
//};
//
//struct Student {
//	struct T st;
//	char name[20];
//	char tele[11];
//	char sex[10];
//	int age;
//};
//
//int main()
//{
//	//struct Student s1 = { "zhangsan","123456","男",23 };
//
//	struct Student s1 = { {88.88,24},"zhangsan","123456","男",23 };
//
//
//	//printf("%s %s %s %d\n", s1.name, s1.tele, s1.sex, s1.age);
//
//	printf("%lf\n", s1.st.weight);
//
//
//
//	return 0;
//}


/*
结构体内存对齐

1.第一个成员在与结构体变量偏移量为0的地址处。
2其他成员变量要对齐到某个数字(对齐数）的整数倍的地址处。

对齐数=编译器默认的一个对齐数与该成员大小的较小值。【vS默认的值为8、gcc没有默认对齐数（成员大小就是对齐数）】

3.结构体总大小为最大对齐数(每个成员变量都有一个对齐数)的整数倍。
4·如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小就是所有最大对齐数(含嵌套结构体的对齐数)的整数倍。



为什么存在内存对齐?

大部分的参考资料都是如是说的:
1.平台原因(移植原因)∶不是所有的硬件平台都能访问任意地址上的任意数据的;某些硬件平台只能在某些地址处取某些特定类型的数据，否则抛出硬件异常。
⒉性能原因:数据结构(尤其是栈)应该尽可能地在自然边界上对齐。原因在于，为了访问未对齐的内存，处理器需要作两次内存访问;而对齐的内存访问仅需要一次访问。

总体来说︰
结构体的内存对齐是拿空间来换取时间的做法。


我们在设计结构体的时候，我在满足对齐的同时兼顾节省空间就应该：让占用空间小的成员尽量集中在一起
*/

//struct S1
//{
//	char c1;//1
//	int a;//4
//	char c2;//1
//};
//struct S2
//{
//	char c1;//1
//	char c2;//1
//	int a;//4
//};
//struct S3
//{
//	double d;//8
//	char c;//1
//	int i;//4
//
//};
//struct S4
//{
//	char c1;//1
//	struct S3 s3;//16
//	double d;//8
//
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	struct S2 s2 = { 0 };
//	struct S3 s3 = { 0 };
//	struct S4 s4 = { 0 };
//
//	//_Interlocked_operand_
//	printf("%d\n", sizeof(s1));//12
//	printf("%d\n", sizeof(s2));//8
//	printf("%d\n", sizeof(s3));//16
//	printf("%d\n", sizeof(s4));//32
//
//	return 0;
//}


/*



*/

//#pragma pack(8)//设置默认对齐数为8[通常设置为2的次方数]
//struct S
//{
//	char c1;//1
//	double d;//8
//
//};
//#pragma pack()//取消设置的默认对齐数
//
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//16
//	return 0;
//}




//#include <stddef.h>//宏
//struct S
//{
//	char c;//1
//	int i;//4
//	double d;//8
//};
//
//int main()
//{
//	//offsetoff(S, i);计算结构体成员相对于结构体起始位置的偏移量
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//
//	return 0;
//}
