#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
//static(����ȫ�ֱ���)
// �ı��˱������������þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��,����Դ�ļ���û��ʹ����
//����1
//add.c
//extern int g_val = 2018;//extern--�����ⲿ����
//test.c
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//����2
//add.c
static int g_val = 2018;
//test.c
int main_20()
{
	printf("%d\n", g_val);
	return 0;
}