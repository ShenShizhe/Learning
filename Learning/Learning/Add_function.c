# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <string.h>
# include <Windows.h>
# include <stdlib.h>
//1.���������
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
//2.�����������ֵ
int Max(int x, int y)
{
	return (x >= y ? x : y);
}
//3.�ж�һ�����Ƿ�Ϊ����
int Judgment_odd_number(int a)
{
	if (a % 2 == 1)
		printf("������һ������\n");
	else
		printf("������������\n");
	return 0;
}
//4.���1~X֮�������
int Odd_number_x(int x)
{
	int i = 1;
	while (i < x)
	{
		printf("%d  ", i);
		i += 2;
	}
	return 0;
}
//5.switchȷ������
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
	return 0;
}
//6.switchȷ���Ƿ�Ϊ������
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
	return 0;
}
//7.����Ļ�ϴ�ӡ1~x������
int Number_x(int x)
{
	int i = 1;
	while (i <= x)
	{
		printf("%d ", i);
		i++;
	}
	return 0;
}
//8.����n�Ľ׳�
int Factorial_n(int n)
{
	int factorial = 1;
	for (int i = 1; i <= n; i++)
		factorial *= i;
	printf("%d\n", factorial);
	return 0;
}
//9.����1��+2��+3��+����+10!(1~n�Ľ׳˺�)
int Factorial_1n(int x)
{
	int j = 0, ret = 1, sum = 0;
	for (j = 1; j <= x; j++)
	{
		ret = ret * j;
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}
//10.�Ӵ�С���������
int number_max_min(void)
{
	int number1 = 0, number2 = 0, number3 = 0;
	printf("��������������\n");
	scanf("%d%d%d", &number1, &number2, &number3);
	if (number1 < number2)
	{
		int temp = number1;
		number1 = number2;
		number2 = temp;
	}
	if (number1 < number3)
	{
		int temp = number1;
		number1 = number3;
		number3 = temp;
	}
	if (number2 < number3)
	{
		int temp = number2;
		number2 = number3;
		number3 = temp;
	}
	printf("%d %d %d\n", number1, number2, number3);//�㷨ʵ��number1���number2��֮��number3��С
	return 0;
}
//11.�������������������Լ��(շת�����)
int Common_divisor(void)
{
	int number1 = 0, number2 = 0, remainder = 0;
	printf("��������������\n");
	scanf("%d%d", &number1, &number2);
	while (remainder = number1 % number2)
	{
		//remainder = number1 % number2;
		number1 = number2;
		number2 = remainder;
	}
	printf("%d\n", number2);
	return 0;
}
//12.��һ�����������в��Ҿ����ĳ������n,��дint binsearch(int x,int v[],int n)
//���ܣ���v[0]<=v[1]<=v[2]<=����<=[n-1]�������в���x(���ֲ��ҷ�)
int Lookup_arrays_sequentially(int arr[], int n)
{
	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
	int left = 0;//���±�
	int right = sz - 1;//���±�
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > n)
			right = mid - 1;
		else if (arr[mid] < n)
			left = mid + 1;
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("�Ҳ���\n");
	return 0;
}


