#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>
#include "Function.h"
//1.
int main__91__01(void)
{
	unsigned long pulArray[] = { 6,7,8,9,10 };
	unsigned long* pulPtr;
	pulPtr = pulArray;
	*(pulPtr + 3) += 3;

	printf("%d,%d", *pulPtr, *(pulPtr + 3));//6,12
	return 0;
}
//2.дһ�������������ַ���������
int main__91__02(void)
{
	char arr[256] = { 0 };
	//scanf("%s", arr);
	gets(arr);//��ȡһ��
	reverse(arr);
	printf("�������ַ�����%s\n", arr);

	return 0;
}
//3.������ͣ���Sn=a+aa+aaa+aaaa+aaaaa��ǰ����֮�ͣ�����a��һ�����֡�����Sn=2+22+222+2222+22222��
int main__91__03(void)
{
	int a = 0, n = 0;
	scanf("%d%d", &a, &n);
	int sum = 0;
	int i = 0;

	int ret = 0;

	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}
//4.��һ�������������

int main__91__04(void)
{
	int i = 0;
	for (i = 0; i <= 99999999; i++)
	{
		//�ж�i�Ƿ�Ϊ������
		//1.����i��λ����nλ��
		int n = 1, temp = i, sum = 0;
		while (temp /= 10)
		{
			n++;
		}
		//2.����i��ÿһλ��n�η�֮��sum;
		temp = i;
		while (temp)
		{
			sum += (int)pow(temp % 10, n);
			temp /= 10;
		}


		//3.�Ƚ�i==sum

		if (i == sum && i > 10)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
//5.���ַ���*����ӡһ������
/*
	   *
	 * * *
   * * * * *
 * * * * * * *
   * * * * *
	 * * *
	   *

*/

int main__91__05(void)
{

	int line = 0;
	scanf("%d", &line);
	//��ӡ�ϰ벿��
	int i = 0;
	for (i = 0; i < line; i++)
	{
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//��ӡ�°벿��
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}