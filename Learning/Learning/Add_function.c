#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���������
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
//�����������ֵ
int Max(int x, int y)
{
	return (x >= y ? x : y);
}
//�ж�һ�����Ƿ�Ϊ����
int Judgment_odd_number(int a)
{
	if (a % 2 == 1)
		printf("������һ������\n");
	else
		printf("������������\n");
}
//���1~X֮�������
int Odd_number(int x)
{	
	int i = 1;
	while (i < x)
	{		
		printf("%d  ", i);
		i += 2;
	}	
}
//switchȷ������
int Week(void)
{
	int day = 0;
	printf("\n������1~7������һ�����֣�");
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����������һ\n");
		break;
	case 2:
		printf("���������ڶ�\n");
		break;
	case 3:
		printf("������������\n");
		break;
	case 4:
		printf("������������\n");
		break;
	case 5:
		printf("������������\n");
		break;
	case 6:
		printf("������������\n");
		break;
	case 7:
		printf("������������\n");
		break;
	default:
		printf("���������󣬲��ڹ涨��Χ��");
		break;
	}
}
// switchȷ���Ƿ�Ϊ������
int Work(void)
{
	int day = 0;
	printf("\n������1~7������һ�����֣�");
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("�����ǹ�����\n");
		break;
	case 6:
	case 7:
		printf("��������Ϣ��\n");
		break;
	default:
		printf("���������󣬲��ڹ涨��Χ��");
		break;
	}
}