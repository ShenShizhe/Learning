#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "Function.h"

/*
strlen��1.����������2.�ݹ鷨��3.ָ��-ָ�뷨��

�ַ�����'\0'��Ϊ������־��strlen�������������ַ�����'\0'ǰ����ֵ��ַ�������������'\0'��
����ָ����ַ�������Ҫ��'\0'����
�����ķ�ֵΪ��size_t�����޷�������

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
	/*����ʾ����
	char arr[] = { 'a','b','c','d','e','f' };
	int len = my_strlen(arr);*/

	//strlen���ز���Ϊ:size_t(unsigned int),��������Ľ��һ���Ǵ���0������
	strlen("abc") - strlen("abcdef") > 0 ? printf("YES\n") : printf("NO\n");//YES
	//my_strlen_count���ز���Ϊint
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
	printf("'%s' ���ַ�������Ϊ�� %d\n", str, len);
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
	printf(" '%s' ���ַ�������Ϊ�� %d\n", str, len);
	return 0;
}


/*

strcpy
�ַ���������'\0'����
�ὫԴ�ַ����е�'\0'������Ŀ��ռ�
Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ���
Ŀ��ռ����ɱ�


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
	//*dest = *src;//����'\0'

	//����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
	while (*dest++ = *src++)
	{
		;
	}
	//����Ŀ�Ŀռ����ʼ��ַ
	return ret;
}
int main_93_02_01()
{

	char arr1[] = "abcdefghi";
	char arr2[] = "hello";
	/*
	����Ķ��壬û��'\0'����������ʱ�������γ�Խ�����
	char arr2[] = { 'h','e','l','l','o' };

	����Ķ��壬arr2Ϊ�����ַ�����������
	char* arr2="abcdef";
	*/
	my_strcpy(arr1, arr2);//arr2������arr1��
	printf("%s\n", arr1);
	return 0;
}

/*
strcat

Դ�ַ���������'\0'����
Ŀ��ռ�����㹻����������Դ�ַ���������
Ŀ��ռ���޸�

*/
#include <stdio.h>
#include <string.h>
#include <assert.h>
char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	//�ҵ�Ŀ���ַ����е�'\0'
	while (*dest)
	{
		dest++;
	}
	//׷��
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

	my_strcat(arr1, arr2);//arr2׷�ӵ�arr1��
	printf("%s\n", arr1);
	return 0;
}
/*
strcmp

��һ���ַ������ڵڶ����ַ������򷵻ش���0�����֣������򷵻�0��С���򷵻�С��0������

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
			return 0;//���
		str1++; str2++;
	}
	if (*str1 > *str2)
		return 1;//����
	else
		return -1;//С��

}
int main_93_04()
{
	char* p1 = "abcdef";
	char* p2 = "aqcd";
	int ret = my_strcmp(p1, p2);//�����ַ���ASCII����бȽ�
	printf("%d\n", ret);
	return 0;
}