# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
# include "Function.h"
//����
int main_50(void)
{
	//����һ������
	/*
	int arr[10];
	int:��������
	arr��������
	10���������//Ϊ�������ʽ��ָ�������С���������ñ���
	[]:�����﷨
	*/
	//����ĳ�ʼ���������鴴��ʱ�����������һЩ����ĳ�ʼֵ(��ʼ��)
	//int arr1[10] = { 1,2,3 };//����ȫ��ʼ��[ʣ�µ�Ԫ��Ĭ��Ϊ0]
	//char arr2[5] = { 'a','b' };
	//char arr3[5] = "ab";//������Ԫ��Ϊ'\0',������Ĭ��ֵ0
	//char arr4[5] = { 'a',98 };
	char arr5[] = "abcdef";
	//sizeof����arr5��ռ�ռ�Ĵ�С[�߸�Ԫ�أ�ÿ��Ԫ��Ϊһ���ַ�]
	printf("%d\n", sizeof(arr5));//7
	//strlen���ַ�������['\0'֮ǰ���ַ�����]
	printf("%d\n", strlen(arr5));//6

	/*sizeof��strlen�ĶԱȣ�
	* 1.sizeof��strlenû�б�Ȼ��ϵ
	* 2.strlen�����ַ������ȣ�ֻ������ַ����󳤶ȡ��������⺯��(ʹ����Ҫ��ͷ�ļ�[# include <string.h>])
	* 3.sizeof�Ǽ�����������顢�������͵Ĵ�С[��λ���ֽ�(Byte)]��������������
	*/

	return 0;

}