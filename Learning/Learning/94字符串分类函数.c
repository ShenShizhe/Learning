#define _CRT_SECURE_NO_WARNINGS 1

/*
�ַ������ຯ��:�ж����Ƿ�Ϊ��Ӧ���ַ���ʽ�����򷵻ط�0�����֣���֮�򷵻�0

iscntrl		�κο����ַ�
isspace		�հ��ַ�:'�ո�'����ҳ'\f'������'\n'���س�'\r'���Ʊ��'\t'���ߴ�ֱ�Ʊ��'\v'
isdigit		ʮ��������0~9
isxdigit	ʮ���������֣���������ʮ�������֣�Сд��ĸa~f����д��ĸA~F
islower		Сд��ĸa~z
isupper		��д��ĸA~Z
isalpha		��ĸa~z��A~Z
isalnum		��ĸ�������֣�a~z,A~Z,0~9
ispunct		�����ţ��κβ��������ֻ�����ĸ��ͼ���ַ����ɴ�ӡ)
isgraph		�κ�ͼ���ַ�
isprint		�κοɴ�ӡ�ַ�������ͼ���ַ��Ϳհ��ַ�
*/

#include <ctype.h>
#include <stdio.h>
int main_94_01()
{
	char ch = '@';
	int ret = islower(ch);
	printf("%d\n", ret);
	return 0;
}

/*
�ַ�ת��������
tolower		תСд��ĸ
toupper		ת��д��ĸ
*/
#include <ctype.h>
int main_94_02()
{
	/*char ch = tolower('Q');
	putchar(ch);*/

	/*char ch = toupper("q");
	putchar(ch);*/


	char arr[] = "I Am A Student";
	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);
		}
		i++;
	}
	printf("%s\n", arr);//i am a student
	return 0;
}