#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
//�ؼ���
typedef unsigned int uint_32;
int main_18(void)
{
	auto int a = 10;//�ֲ�����-�Զ�����(ͨ����д)
	register int b = 10;//�����b����ɼĴ�������(�ڴ�-->CPU-->���ٻ���-->�Ĵ���)
	/*
	int ����ı���Ϊ�з�����(signed int b = 1;<--->int b = 1;)
	����޷����ζ���Ϊ��unsigned int b = 1;
	*/
	//��unsigned int ������Ϊuint_32, ����uint_32Ҳ��һ��������


	//�۲�num1��num2,������������������һ����
	unsigned int num1 = 0;
	uint_32 num2 = 0;
	return 0;

	return 0;

}