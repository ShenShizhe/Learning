# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
# include <time.h>

//void test1(int arr1[])//传参形式为指针，数据大小以操作系统位准[32位系统--4，64位系统---8]
//{
//	printf("%d\n", sizeof(arr1));//指针大小[8]
//}
//void test2(int arr2[])
//{
//	printf("%d\n", sizeof(arr2));//指针大小[8]
//}
int main_60(void)
{
	/*int a = 0;
	char b = 'w';
	int arr[10] = { 0 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));

	printf("%d\n", sizeof(b));
	printf("%d\n", sizeof(char));

	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(int[10]));*/


	//short  s = 0;//2
	//int a = 10;//4
	////sizeof内部的表达式不参与运算
	//printf("%d\n", sizeof(s = a + 5));//2
	//printf("%d\n", s);//0
	//printf("%d\n", sizeof(s));//2

	//~[按位取反(二进制位)]
	//int a = 0;					//000000000|000000000|000000000|000000000[补码]
	//printf("%d\n", ~a);//-1		//111111111|111111111|111111111|111111111[补码]------->111111111|111111111|111111111|111111110[[反码]------>10000000|00000000|00000000|000000001[原码]
	//printf打印的是二进制的原码，补码-1后取反得到原码


	//int a = 11;   //000000000|000000000|000000000|000001011[补码]
	//a |= (1 << 2);
	//printf("%d\n", a);//15

	//a &= (~(1 << 2));
	//printf("%d\n", a);//11

	//自增[++]自减[--]
	//int a = 10;
	//printf("%d\n", ++a);//前置++，先++，后使用
	//printf("%d\n", a++);//后置++，先使用，后++

	//强制 类型转换
	//int a = (int)3.14;//(int)[强制类型转换，转换为int 类型]
	//printf("%d\n", a);//3


	/*int arr1[10] = { 0 };
	char arr2[10] = { '0' };
	printf("%d\n", sizeof(arr1));//40
	printf("%d\n", sizeof(arr2));//10
	test1(arr1);
	test2(arr2);*/

	return 0;
}