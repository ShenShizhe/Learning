# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
# include "Function.h"
//�ݹ�[�����������]
/*
�ڴ�[ջ������������̬��]
	ջ��[�ֲ������������β�]
	����[��̬���ٵ��ڴ�(malloc��calloc)]
	��̬��[ȫ�ֱ�����static���εı���]
*/
// �ݹ����
// �ᵼ��ջ���[stack overflow]
// ��վ��stackoverflow.com[����Ա��֪��]
//int main(void)//
//{
//	printf("�ú�ѧϰ��\n");
//	main();
//	return 0;
//
//}



int main_48(void)
{
	//��ϰ1������һ������ֵ(�޷���)�����մ�ӡ˳���ӡ����ÿһλ�����磺1234,���1 2 3 4.[Function.c��������Sequential_printing]
	//unsigned int num = 0;
	//scanf("%d", &num);
	//Sequential_printing(num);

	//************************************************************************
	//��ϰ2.��д��������������ʱ���������ַ����ĳ��ȡ�[Function.c��������my_strlen]
	char arr[] = "study";
	int len = my_strlen(arr);//arr����ֵΪ��һ��Ԫ�صĵ�ַ��������������
	printf("len=%d\n", len);







	return 0;
}