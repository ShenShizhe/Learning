#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Function.h"

////指针数组
//int* arr[10];
////数组指针
//int* (*pa)[10] = &arr;
////函数指针
//int* (*padd)(int, int) = Add;//&Add
//int sum = (*padd)(1, 2);//OK
//int sum = padd(1, 2);//OK
//int sum = add(1, 2);//OK
////函数指针的数组
//int* (*padd[6])(int, int);
////指向函数指针数组的指针
//int(*(*ppadd)[6])(int, int) = &padd;


//回调函数【通过函数指针调用函数】


//void myfun(char* str)
//{
//	_crt_internal_printf_legacy_wide_specifier
//		printf("hehe:%s", str);
//}
//void test_t(void(*p)(char*))
//{
//	printf("test\n");
//	p("haha");
//}
//int main(void)
//{
//
//	test_t(myfun);
//
//	return 0;
//}


//int main(void)
//{
//
//	//冒泡排序函数【只能排序整形数组】
//	int  arr[] = { 11,243,58,2,46,32,35,78,57,44 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubbling_sort(arr, sz);
//	int i;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}




//Bubbling_sort无法处理下列数据
//
//struct Stu
//{
//	char name[10];
//	int age;
//};
//
//struct Stu s[6] = { {"zhangsan",16},{"lisi",34},{"wangwu",23},{"xdd",46},{"lidf",14},{"gjf",26} };//按年龄进行排序
//float f[] = { 1.2,1.4,2.5,8.3,2.1,3.5,9.1,1.6,8.8,9.4 };//对浮点型数据进行排序

//qsort【quick sort】 --可以排序任意类型数据
/*
[第一个参数]：待排序的首元素地址
[第二个参数]：待排序元素数组的元素个数
[第三个参数]：每个数组待排序的每个元素的大小[单位：字节]
[第四个参数]：函数指针，比较两个元素方法的函数的地址[使用者自己实现]，函数的指针的两个参数是：【待比较两个元素的地址】
*/
/*void qsort
(
	void* base,
	size_t num,
	size_t width,
	int(*cmp)(const void* el, const void* e2)
);*/

//int main()
//{
//
//	int a = 10;
//	int* pa = &a;
//	//char* pc = &pa;//操作允许，但是会警告
//
//	//【void *】类型的指针，可以接收任意类型的地址,不能进行解引用操作
//	char pc = &a;
//	char ch = "w";
//	void* p = &a;
//	p = &ch;
//
//	return 0;
//}


//比较两个整形值的函数
//int com_int_arr(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int  arr[] = { 11,243,58,2,46,32,35,78,57,44 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	float f[] = { 1.2,1.4,2.5,8.3,2.1,3.5,9.1,1.6,8.8,9.4 };//对浮点型数据进行排序
//
//	qsort(arr, sz, sizeof(arr[0]), com_int_arr);
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int com_float_arr(const void* e1, const void* e2)
//{
//	/*if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;*/
//
//	return ((int)(*(float*)e1 > *(float*)e2));
//
//}
//void test2()
//{
//	float f[] = { 1.2,1.4,2.5,8.3,2.1,3.5,9.1,1.6,8.8,9.4 };//对浮点型数据进行排序
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), com_float_arr);
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%.1f ", f[i]);
//	}
//}
//struct Stu
//{
//	char name[10];
//	int age;
//};
//int com_struct_age(const void* e1, const void* e2)
//{
//	//return *(int*)e1 - *(int*)e2;
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//
//}
//int com_struct_name(const void* e1, const void* e2)
//{
//	//比较名字就是比较字符串，字符串比较不能直接用><=比较，应该用strcmp函数
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//void test3()
//{
//
//	struct Stu s[6] = { {"zhangsan",16},{"lisi",34},{"wangwu",23},{"xdd",46},{"lidf",14},{"gjf",26} };//结构体数组，按年龄进行排序
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), com_struct_age);
//}
//int main(void)
//{
//	//test1();
//	//test2();
//	return 0;
//}

//实现New_Bubbling_sort函数的程序员，他不知道未来排序的数据类型，也不能知道待比较的两个元素的类型
int com_int_arr(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void test1()
{
	int arr[10] = { 9,8,6,12,65,34,21,18,25 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//使用New_Bubbling_sort的程序员一定知道自己排序的是什么数据，就应该知道如何比较排序数组中的元素
	New_Bubbling_sort(arr, sz, sizeof(arr[0]), com_int_arr);
}
int com_float_arr(const void* e1, const void* e2)
{
	return ((int)(*(float*)e1 > *(float*)e2));
}
void test2()
{
	float f[] = { 1.2,1.4,2.5,8.3,2.1,3.5,9.1,1.6,8.8,9.4 };//对浮点型数据进行排序
	int sz = sizeof(f) / sizeof(f[0]);
	New_Bubbling_sort(f, sz, sizeof(f[0]), com_float_arr);
}
struct Stu
{
	char name[10];
	int age;
};
int com_struct_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int com_struct_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
void test3()
{

	struct Stu s[6] = { {"zhangsan",16},{"lisi",34},{"wangwu",23},{"xdd",46},{"lidf",14},{"gjf",26} };//结构体数组，按年龄进行排序
	int sz = sizeof(s) / sizeof(s[0]);
	//New_Bubbling_sort(s, sz, sizeof(s[0]), com_struct_age);
	New_Bubbling_sort(s, sz, sizeof(s[0]), com_struct_name);
}
int main(void)
{

	test1();
	test2();
	test3();
	return 0;
}