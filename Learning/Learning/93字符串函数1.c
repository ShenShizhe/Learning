#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "Function.h"

/*
strlen【1.计数器法、2.递归法、3.指针-指针法】

字符串以'\0'作为结束标志，strlen函数返回是在字符串中'\0'前面出现的字符个数（不包含'\0'）
参数指向的字符串必须要以'\0'结束
函数的返值为：size_t，是无符号整形

*/
#include <stdio.h>
#include <assert.h>
#include <string.h>
int my_strlen_count(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str)//while(*str!='0')
	{
		count++; str++;
	}
	return count;
}
int main_93_01_01(void)
{
	int len = my_strlen_count("abcdf");
	printf("%d\n", len);
	/*错误示范：
	char arr[] = { 'a','b','c','d','e','f' };
	int len = my_strlen(arr);*/

	//strlen返回参数为:size_t(unsigned int),进行运算的结果一定是大于0的数字
	strlen("abc") - strlen("abcdef") > 0 ? printf("YES\n") : printf("NO\n");//YES
	//my_strlen_count返回参数为int
	my_strlen_count("abc") - my_strlen_count("abcdef") > 0 ? printf("YES\n") : printf("NO\n");//NO

	return 0;
}


#include <assert.h>
#include <stdio.h>
int string_length_recursive(char* str) {
	assert(str != NULL);
	if (*str == '\0') {
		return 0;
	}
	else {
		return 1 + string_length_recursive(str + 1);
	}
}

int main_93_01_02() {
	char str[] = "Hello,world!";
	int len = string_length_recursive(str);
	printf("'%s' 该字符串长度为： %d\n", str, len);
	return 0;
}

#include <stdio.h>
#include <assert.h>
int string_length_pointer(char* str) {
	assert(str != NULL);
	char* p = str;
	char* q = str;
	while (*q) {
		q++;
	}
	return q - p;
}

int main_93_01_03() {
	char str[] = "Hello, world!";
	int len = string_length_pointer(str);
	printf(" '%s' 该字符串长度为： %d\n", str, len);
	return 0;
}


/*

strcpy
字符串必须以'\0'结束
会将源字符串中的'\0'拷贝到目标空间
目标空间必须足够大，以确保能存放源字符串
目标空间必须可变


*/

#include <stdio.h>
#include <string.h>
#include <assert.h>
char* my_strcpy(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	//while (*src)
	//{
	//	*dest = *src;
	//	dest++;
	//	src++;
	//}
	//*dest = *src;//拷贝'\0'

	//拷贝src指向的字符串到dest指向的空间，包含'\0'
	while (*dest++ = *src++)
	{
		;
	}
	//返回目的空间的起始地址
	return ret;
}
int main_93_02_01()
{

	char arr1[] = "abcdefghi";
	char arr2[] = "hello";
	/*
	错误的定义，没有'\0'，拷贝操作时，容易形成越界访问
	char arr2[] = { 'h','e','l','l','o' };

	错误的定义，arr2为常量字符串，不过改
	char* arr2="abcdef";
	*/
	my_strcpy(arr1, arr2);//arr2拷贝到arr1中
	printf("%s\n", arr1);
	return 0;
}

/*
strcat

源字符串必须以'\0'结束
目标空间必须足够大，能容纳下源字符串的内容
目标空间可修改

*/
#include <stdio.h>
#include <string.h>
#include <assert.h>
char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	//找到目的字符串中的'\0'
	while (*dest)
	{
		dest++;
	}
	//追加
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main_93_03()
{
	char arr1[30] = "hello";
	char arr2[] = "world";

	my_strcat(arr1, arr2);//arr2追加到arr1中
	printf("%s\n", arr1);
	return 0;
}
/*
strcmp

第一个字符串大于第二个字符串，则返回大于0的数字，等于则返回0，小于则返回小于0的数字

*/


#include <stdio.h>
#include <string.h>
#include <assert.h>
int  my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;//相等
		str1++; str2++;
	}
	if (*str1 > *str2)
		return 1;//大于
	else
		return -1;//小于

}
int main_93_04()
{
	char* p1 = "abcdef";
	char* p2 = "aqcd";
	int ret = my_strcmp(p1, p2);//按照字符的ASCII码进行比较
	printf("%d\n", ret);
	return 0;
}