#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
//static(���κ���)
//�����ⲿ����(Add.c[Add])
/*
int Add(int x, int y)---->static int Add(int x, int y)//error,���޷�����
�˴���static �ı��˺�������������(������),��ͨ����ͨ�����������ⲿ��������
*/
extern int Add(int, int);
int main_21(void)
{
	int a = 10, b = 20;
	int sum = Add(a, b);
	printf("%d", sum);
	return 0;
}