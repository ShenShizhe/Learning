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


//��ϰ������һ������ֵ(�޷���)�����մ�ӡ˳���ӡ����ÿһλ�����磺1234,���1 2 3 4.
int main(void)
{
	unsigned int num = 0;
	scanf("%d", &num);
	//�ݹ�ʵ��
	print(num);



	return 0;
}