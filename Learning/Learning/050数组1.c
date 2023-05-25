# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
# include "Function.h"
//数组
int main_50(void)
{
	//创建一个数组
	/*
	int arr[10];
	int:数组类型
	arr：数组名
	10：数组个数//为常量表达式，指定数组大小，不可以用变量
	[]:数组语法
	*/
	//数组的初始化：在数组创建时给数组的内容一些合理的初始值(初始化)
	//int arr1[10] = { 1,2,3 };//不完全初始化[剩下的元素默认为0]
	//char arr2[5] = { 'a','b' };
	//char arr3[5] = "ab";//第三个元素为'\0',后两个默认值0
	//char arr4[5] = { 'a',98 };
	char arr5[] = "abcdef";
	//sizeof计算arr5所占空间的大小[七个元素，每个元素为一个字符]
	printf("%d\n", sizeof(arr5));//7
	//strlen求字符串长度['\0'之前的字符个数]
	printf("%d\n", strlen(arr5));//6

	/*sizeof与strlen的对比：
	* 1.sizeof与strlen没有必然联系
	* 2.strlen是求字符串长度，只能针对字符创求长度————库函数(使用需要引头文件[# include <string.h>])
	* 3.sizeof是计算变量、数组、数据类型的大小[单位：字节(Byte)]————操作符
	*/

	return 0;

}
