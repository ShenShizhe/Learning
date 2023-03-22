#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "Function.h"

/*
strlen��1.����������2.�ݹ鷨��3.ָ��-ָ�뷨��

strlen������ԭ��ͨ��������string.hͷ�ļ��У���ԭ�����£�

size_t strlen(const char *s);


���У�`const char *s`��һ��ָ���ַ�����ʼ��ַ��ָ�룬�ú������ز���`s`��ָ����ַ����ĳ��ȣ�
�������ַ���ĩβ�Ŀ��ַ�'\0'�����ں�������ֵ����Ϊ`size_t`��������ܹ�����ǳ������ַ�����

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

strcpy������ԭ��ͨ��������string.hͷ�ļ��У���ԭ�����£�

char* strcpy(char* dest, const char* src);


���У�`dest`��Ҫ��������Ŀ���ַ���ָ�룬`src`��Դ�ַ���ָ�롣�ú�����Դ�ַ���(src)���Ƶ�Ŀ���ַ���(dest)��
�����ַ���ĩβ�Ŀ��ַ�('\0')������ֵΪ`dest`ָ�롣

��Ҫע����ǣ�`dest`��ָ���Ŀ������������㹻�Ŀռ����洢`src`ָ����ַ�����������ܻᵼ�»����������δ������Ϊ��
���⣬���`src`ָ����ַ������ȴ���`dest`��ָ���Ŀ�����鳤�ȣ���Ŀ���ַ�����������'\0'��β����Ҳ�ᵼ��δ������Ϊ��

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

strcat������ԭ��ͨ��������string.hͷ�ļ��У���ԭ�����£�

char* strcat(char* dest, const char* src);

���У�`dest`��Ҫ׷���ַ�����Ŀ���ַ���ָ�룬`src`��Ҫ׷�ӵ�Ŀ���ַ���ĩβ��Դ�ַ���ָ�롣
�ú�����Դ�ַ���(src)׷�ӵ�Ŀ���ַ���(dest)��ĩβ��������`dest`ָ�롣

��Ҫע����ǣ�`dest`��ָ���Ŀ������������㹻�Ŀռ����洢`src`ָ����ַ�����������ܻᵼ�»����������δ������Ϊ��
���⣬���`src`ָ����ַ������ȴ���`dest`��ָ���Ŀ������ʣ��ռ䣬��Ŀ���ַ�����������'\0'��β����Ҳ�ᵼ��δ������Ϊ��

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

strcmp������ԭ��ͨ��������string.hͷ�ļ��У���ԭ�����£�

int strcmp(const char* s1, const char* s2);

���У�`s1`��`s2`��Ҫ�Ƚϵ������ַ���ָ�롣�ú��������ֵ���Ƚ������ַ����������������������֮һ��

- ���`s1`�ַ���С��`s2`�ַ������򷵻�һ����������
- ���`s1`�ַ�������`s2`�ַ������򷵻�0��
- ���`s1`�ַ�������`s2`�ַ������򷵻�һ����������

��Ҫע����ǣ��ú������ִ�Сд������д��ĸ��Сд��ĸ����Ϊ��ͬ���ַ���
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

/*
strncpy

strncpy������ԭ��ͨ��������string.hͷ�ļ��У���ԭ�����£�

char* strncpy(char* dest, const char* src, size_t n);


���У�`dest`��Ҫ��������Ŀ���ַ���ָ�룬`src`��Դ�ַ���ָ�룬`n`��Ҫ�������ַ�����
�ú�����Դ�ַ���(src)��ǰn���ַ����Ƶ�Ŀ���ַ���(dest)�����src�ĳ���С��n����ʣ�ಿ���ÿ��ַ�('\0')��䣬����ֵΪ`dest`ָ�롣

��Ҫע����ǣ�`dest`��ָ���Ŀ������������㹻�Ŀռ����洢`src`ָ����ַ�����������ܻᵼ�»����������δ������Ϊ��
���⣬���`src`ָ����ַ�������С��n����Ŀ���ַ�����������'\0'��β����Ҳ�ᵼ��δ������Ϊ��

����n���ַ���Դ�ַ�����Ŀ��ռ�
���Դ�ַ����ĳ���С��n���򿽱���Դ�ַ���֮����Ŀ��ĺ���׷��'\0',ֱ��n��
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

strncat������ԭ��ͨ��������string.hͷ�ļ��У���ԭ�����£�

char* strncat(char* dest, const char* src, size_t n);

���У�`dest`��Ҫ׷���ַ�����Ŀ���ַ���ָ�룬`src`��Ҫ׷�ӵ�Ŀ���ַ���ĩβ��Դ�ַ���ָ�룬`n`��Ҫ׷�ӵ��ַ�����
�ú�����Դ�ַ���(src)��ǰn���ַ�׷�ӵ�Ŀ���ַ���(dest)��ĩβ��������`dest`ָ�롣

��Ҫע����ǣ�`dest`��ָ���Ŀ������������㹻�Ŀռ����洢`src`ָ����ַ�����׷�ӵ��ַ���
������ܻᵼ�»����������δ������Ϊ�����⣬���`src`ָ����ַ�������С��n����Ŀ���ַ�����������'\0'��β����Ҳ�ᵼ��δ������Ϊ��
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

strncmp������C�����е��ַ����ȽϺ��������ڱȽ������ַ�����ǰn���ַ��Ƿ���ͬ�����ĺ���ԭ�����£�


int strncmp(const char *s1, const char *s2, size_t n);


���У�`s1`��`s2`����Ҫ�Ƚϵ������ַ�����`n`����Ҫ�Ƚϵ��ַ�����

��������ֵ���£�

- ��`s1`��`s2`��ǰn���ַ�����ȣ��򷵻�0��
- ��` s1`��`s2`��ǰn���ַ�����ȣ��򷵻�����֮���һ��������ַ���ASCII���ֵ����`s1[i] - s2[i]`����
- ��` s1`��`s2`�ĳ���С��n����Ƚϵ�����һ���ַ�������Ϊֹ��

`strncmp`����ͨ�������ַ������򡢲��ҺͱȽϲ����������ڰ��ֵ�������ʱʹ�á�
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
strstr����������������KMP�㷨

`strstr`������C�����е��ַ������Һ�����������һ���ַ����в�����һ���ַ����ĳ���λ�á����ĺ���ԭ�����£�

char* strstr(const char* str1, const char* str2);


���У�`str1`����Ҫ�����ҵ��ַ�����`str2`����Ҫ���ҵ��ַ�����

��������ֵ���£�

- ��`str2`��`str1`���Ӵ����򷵻�`str2`��`str1`�е�һ�γ��ֵ�λ�ã���ָ���λ�õ�ָ�룩��
- ��`str2`����`str1`���Ӵ����򷵻�`NULL`��

`strstr`����ͨ�����ڴ��ı��в���ĳ���ؼ��ֻ������ַ�����λ�ã�������ʵ���ַ���ƥ���㷨ʱʹ�á�
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



strtok�����ĺ���ԭ�����£�

char * strtok(char * str, const char * sep);

���У�`str` �Ǵ��ֽ���ַ�����`sep` ����Ϊ�ָ������ַ�������������ֵ��ָ����һ�����ַ�����ָ�룬���û�и�������ַ������򷵻� NULL��

��Ҫע����ǣ�`strtok` �������޸������ `str` �ַ��������ָ���λ���滻Ϊ NULL �ַ��������ʹ���� `strtok` ����֮��
ԭʼ���ַ��������Ѿ����޸��ˡ������Ҫ����ԭʼ���ַ����������Ƚ��临��һ���ٽ��в�����


sep ������һ���ַ����������������ָ������ַ�����
��һ������ָ��һ���ַ���������0�����߶����sep�ַ����е�һ�����߶���ָ����ָ�ı��
strtok�����ҵ�str�е���һ����ǣ���������\0��β������һ��ָ�������ǵ�ָ�롣
	(ע:strtok������ı䱻�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸ġ�)
strtok�����ĵ�һ��������ΪNULL���������ҵ�str�е�һ����ǣ�strtok���������������ַ����е�λ�á�
strtok�����ĵ�һ������ΪNuLL����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ����ǡ�
����ַ����в����ڸ���ı�ǣ��򷵻�NULLָ�롣
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

strerror������ԭ��ͨ��������string.hͷ�ļ��У���ԭ�����£�

char* strerror(int errnum);


���У�`errnum`��һ��������������ʾ����š��ú�������ָ�������Ϣ�ַ�����ָ�룬������`errnum`����������Ĵ�����Ϣ��

��Ҫע����ǣ�`strerror`�������صĴ�����Ϣ�ַ���������ƽ̨���졣һЩʵ�ֽ��ú�������Ϊ������汾����֧�ֶ��̣߳��������Ա���ʹ��ȫ�ֱ����洢������Ϣ�ַ�����
char *strerror(int errnum);

���ش����룬����Ӧ�Ĵ�����Ϣ
*/
#include <errno.h>
#include <string.h>
#include <stdio.h>
int main_93_10()
{
	//errno��һ��ȫ�ֵĴ������������C���ԵĿ⺯����ִ�й����з������󣬾ͻ�Ѷ�Ӧ�Ĵ����븳ֵ��errno��
	//char* str = strerror(errno);//�������������Ϣһһ��Ӧ
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