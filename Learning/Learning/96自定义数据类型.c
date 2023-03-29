#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*

内置类型[char、short、int、long、float、double]

自定义类型（复杂的对象）--复杂类型[结构体、枚举、联合体]


结构体：1、结构体类型的声明、2、结构的自引用、3、结构体变量的定义和初始化、4、结构体内存对齐、5、结构体传参、6、结构体实现位段(位段的填充&可移植性)

枚举：枚举的定义、枚举的优点、枚举的使用

联合：联合类型定义、联合特点、联合大小计算


*/

/*
1、结构体类型的声明

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


//2.结构体自引用[采用指针的方式]

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

//3、结构体变量的定义和初始化
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
4、结构体内存对齐

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

/*
5、结构体传参

函数传参的时候,参数是需要压栈,会有时间和空间上的系统开销。
如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的下降.

结论:结构体传参的时候，要传结构体的地址。
*/


//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
////void Init(struct S tmp)
////{
////	tmp.a = 100;
////	tmp.c = 'q';
////	tmp.d = 3.14;
////}
//void Init_96(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//
//}
//
//void print_96(const struct S ps)
//{
//	printf("%d %c %lf\n", ps.a, ps.c, ps.d);
//
//
//}

//int main()
//{
//	//struct S s1 = { 100,'w',3.14, };
//	//printf("%d\n", s1.a, s1.c, s1.d);
//
//	struct S s = { 0 };
//	Init_96(&s);
//	print_96(s);
//
//
//
//	return 0;
//}




/*

6、结构体实现位段【位：二进制位】

	位段和结构体的类似的，有两个不同：

	1.位段的成员必须是整形（例如：int，unsigned int或signed int，short,char）,不能含有float、double
	2.位段的成员变量后有一个冒号和一个数字

	位段的内存分配
	1.位段的成员可以是int unsigned int signed int或者是char （属于整形家族）类型
	2.位段的空间上是按照需要以4个字节( int )或者1个字节( char )的方式来开辟的。
	3.位段涉及很多不确定因素，位段是不跨平台的，注重可移植的程序应该避免使用位段。


	位段的跨平台问题
	1. int位段被当成有符号数还是无符号数是不确定的。
	2位段中最大位的数目不能确定。(16位机器最大16，32位机器最大32，写成27,在16位机器会出问题。
	3.位段中的成员在内存中从左向右分配，还是从右向左分配标准尚未定义。
	4.当一个结构包含两个位段，第二个位段成员比较大，无法容纳于第一个位段剩余的位时，是舍弃剩余的位还是利用，这是不确定的。

	总结︰
	跟结构相比，位段可以达到同样的效果，但是可以很好的节省空间，但是有跨平台的问题存在。

*/
//
//struct S
//{
//	int a : 2;//取值2个比特位
//	int b : 5;//
//	int c : 10;//
//	int d : 30;//
//
//};
////共47bit--6个字节（48bit）
//
//int main()
//{
//	struct S s;
//
//	printf("%d\n", sizeof(s));//8
//
//	return 0;
//}


//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//
//
//	return 0;
//}