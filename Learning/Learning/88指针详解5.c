#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Function.h"

////ָ������
//int* arr[10];
////����ָ��
//int* (*pa)[10] = &arr;
////����ָ��
//int* (*padd)(int, int) = Add;//&Add
//int sum = (*padd)(1, 2);//OK
//int sum = padd(1, 2);//OK
//int sum = add(1, 2);//OK
////����ָ�������
//int* (*padd[6])(int, int);
////ָ����ָ�������ָ��
//int(*(*ppadd)[6])(int, int) = &padd;


//�ص�������ͨ������ָ����ú�����


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
//	//ð����������ֻ�������������顿
//	int  arr[] = { 11,243,58,2,46,32,35,78,57,44 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubbling_sort(arr, sz);
//	int i;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}




//Bubbling_sort�޷�������������
//
//struct Stu
//{
//	char name[10];
//	int age;
//};
//
//struct Stu s[6] = { {"zhangsan",16},{"lisi",34},{"wangwu",23},{"xdd",46},{"lidf",14},{"gjf",26} };//�������������
//float f[] = { 1.2,1.4,2.5,8.3,2.1,3.5,9.1,1.6,8.8,9.4 };//�Ը��������ݽ�������

//qsort��quick sort�� --��������������������
/*
[��һ������]�����������Ԫ�ص�ַ
[�ڶ�������]��������Ԫ�������Ԫ�ظ���
[����������]��ÿ������������ÿ��Ԫ�صĴ�С[��λ���ֽ�]
[���ĸ�����]������ָ�룬�Ƚ�����Ԫ�ط����ĺ����ĵ�ַ[ʹ�����Լ�ʵ��]��������ָ������������ǣ������Ƚ�����Ԫ�صĵ�ַ��
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
//	//char* pc = &pa;//�����������ǻᾯ��
//
//	//��void *�����͵�ָ�룬���Խ����������͵ĵ�ַ,���ܽ��н����ò���
//	char pc = &a;
//	char ch = "w";
//	void* p = &a;
//	p = &ch;
//
//	return 0;
//}


//�Ƚ���������ֵ�ĺ���
//int com_int_arr(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int  arr[] = { 11,243,58,2,46,32,35,78,57,44 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	float f[] = { 1.2,1.4,2.5,8.3,2.1,3.5,9.1,1.6,8.8,9.4 };//�Ը��������ݽ�������
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
//	float f[] = { 1.2,1.4,2.5,8.3,2.1,3.5,9.1,1.6,8.8,9.4 };//�Ը��������ݽ�������
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
//	//�Ƚ����־��ǱȽ��ַ������ַ����Ƚϲ���ֱ����><=�Ƚϣ�Ӧ����strcmp����
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//void test3()
//{
//
//	struct Stu s[6] = { {"zhangsan",16},{"lisi",34},{"wangwu",23},{"xdd",46},{"lidf",14},{"gjf",26} };//�ṹ�����飬�������������
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), com_struct_age);
//}
//int main(void)
//{
//	//test1();
//	//test2();
//	return 0;
//}

//ʵ��New_Bubbling_sort�����ĳ���Ա������֪��δ��������������ͣ�Ҳ����֪�����Ƚϵ�����Ԫ�ص�����
int com_int_arr(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void test1()
{
	int arr[10] = { 9,8,6,12,65,34,21,18,25 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//ʹ��New_Bubbling_sort�ĳ���Աһ��֪���Լ��������ʲô���ݣ���Ӧ��֪����αȽ����������е�Ԫ��
	New_Bubbling_sort(arr, sz, sizeof(arr[0]), com_int_arr);
}
int com_float_arr(const void* e1, const void* e2)
{
	return ((int)(*(float*)e1 > *(float*)e2));
}
void test2()
{
	float f[] = { 1.2,1.4,2.5,8.3,2.1,3.5,9.1,1.6,8.8,9.4 };//�Ը��������ݽ�������
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

	struct Stu s[6] = { {"zhangsan",16},{"lisi",34},{"wangwu",23},{"xdd",46},{"lidf",14},{"gjf",26} };//�ṹ�����飬�������������
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