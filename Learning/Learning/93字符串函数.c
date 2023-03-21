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

/*
strncpy

拷贝num个字符从源字符串到目标空间
如果源字符串的长度小于num，则拷贝完源字符串之后，在目标的后面追加'\0',直到num个
*/
#include <stdio.h>
#include <string.h>

void my_strncpy(char* dest, const char* src, size_t n)
{
	size_t i = 0;
	for (; i < n && src[i] != '\0'; i++) {
		dest[i] = src[i];
	}
	for (; i < n; i++) {
		dest[i] = '\0';
	}
}
int main_93_05()
{
	char arr1[5] = "abc";
	char arr2[] = "hello bit";
	my_strncpy(arr1, arr2, 4);
	printf("%s\n", arr1);
	return 0;
}
/*

strncat


*/
#include <stdio.h>
#include <string.h>
int main_93_06()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	strncat(arr1, arr2, 3);
	printf("%s\n", arr1);
	return 0;
}

/*

strncmp

strncmp函数是C语言中的字符串比较函数，用于比较两个字符串的前n个字符是否相同。它的函数原型如下：


int strncmp(const char *s1, const char *s2, size_t n);


其中，`s1`和`s2`是需要比较的两个字符串，`n`是需要比较的字符数。

函数返回值如下：

- 若`s1`和`s2`的前n个字符都相等，则返回0；
- 若` s1`和`s2`的前n个字符不相等，则返回它们之间第一个不相等字符的ASCII码差值（即`s1[i] - s2[i]`）；
- 若` s1`或`s2`的长度小于n，则比较到其中一个字符串结束为止。

`strncmp`函数通常用于字符串排序、查找和比较操作，比如在按字典序排列时使用。
*/
#include <stdio.h>
#include <string.h>

int main_93_07()
{
	const char* p1 = "abcdef";
	char* p2 = "abcdfr";
	int ret = strncmp(p1, p2, 5);
	printf("%d\n", ret);


	return 0;
}
/*
strstr————————KMP算法

`strstr`函数是C语言中的字符串查找函数，用于在一个字符串中查找另一个字符串的出现位置。它的函数原型如下：

char* strstr(const char* str1, const char* str2);


其中，`str1`是需要被查找的字符串，`str2`是需要查找的字符串。

函数返回值如下：

- 若`str2`是`str1`的子串，则返回`str2`在`str1`中第一次出现的位置（即指向该位置的指针）；
- 若`str2`不是`str1`的子串，则返回`NULL`。

`strstr`函数通常用于从文本中查找某个关键字或者子字符串的位置，比如在实现字符串匹配算法时使用。
*/
#include <stdio.h>
#include <string.h>
#include <assert.h>
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	char* s1 = str1;
	char* s2 = str2;
	char* cur = str1;
	if (*str2 == '\0')
		return (char*)str1;
	while (*cur)
	{
		s1 = cur;
		s2 = str2;
		while ((*s1 == *s2) && *s1 && *s2)
		{
			*s1++;
			*s2++;
		}
		if (*s2 == '\0')
			return cur;
		if (*s1 == '\0')
			return NULL;
		*cur++;
	}
	return NULL;
}
int main_93_08()
{
	char* p1 = "abcdefghijk";
	char* p2 = "def";
	//char* ret = strstr(p1, p2);
	//ret == NULL ? printf("No\n") : printf("%s\n", ret);//defghijk
	char* ret = my_strstr(p1, p2);
	ret == NULL ? printf("No\n") : printf("%s\n", ret);//defghijk
	return 0;
}

/*
strtok



strtok函数的函数原型如下：

char * strtok(char * str, const char * sep);

其中，`str` 是待分解的字符串，`sep` 是作为分隔符的字符串。函数返回值是指向下一个子字符串的指针，如果没有更多的子字符串，则返回 NULL。

需要注意的是，`strtok` 函数会修改输入的 `str` 字符串，将分隔符位置替换为 NULL 字符，因此在使用完 `strtok` 函数之后，
原始的字符串可能已经被修改了。如果需要保留原始的字符串，可以先将其复制一份再进行操作。


sep 参数是一个字符串，定义了用作分隔符的字符集合
第一个参数指定一个字符串，包含0个或者多个由sep字符串中的一个或者多个分隔符分割的标记
strtok函数找到str中的下一个标记，并将其用\0结尾，返回一个指向这个标记的指针。
	(注:strtok函数会改变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改。)
strtok函数的第一个参数不为NULL，函数将找到str中第一个标记，strtok函数将保存它在字符串中的位置。
strtok函数的第一个参数为NuLL，函数将在同一个字符串中被保存的位置开始，查找下一个标记。
如果字符串中不存在更多的标记，则返回NULL指针。
*/



#include <stdio.h>
#include <string.h>

int main_93_09()
{
	char  arr[] = "zhangsan@qq.com";
	char* p = "@";

	char buf[1024] = { 0 };
	strcpy(buf, arr);

	/*char* ret = strtok(arr, p);
	printf("%s\n", ret);
	ret = strtok(NULL, ret);
	printf("%s\n", ret);*/


	char* ret = NULL;
	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
	}
	return 0;
}


/*
strerror

char *strerror(int errnum);

返回错误码，所对应的错误信息
*/
#include <errno.h>
#include <string.h>
#include <stdio.h>
int main_93_10()
{
	//errno是一个全局的错误码变量，当C语言的库函数在执行过程中发生错误，就会把对应的错误码赋值到errno中
	//char* str = strerror(errno);//错误码与错误信息一一对应
	/*
	0---No error
	1---Operation not permitted
	2---No such file or directory
	3---No such process
	4---Interrupted function call
	5---Input/output error
	6---No such device or address
	*/
	//printf("%s\n", str);

	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
		printf("%s\n", strerror(errno));
	else
		printf("open file success!\n");
	return 0;
}
