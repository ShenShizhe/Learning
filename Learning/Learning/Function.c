# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <string.h>
# include <Windows.h>
# include <stdlib.h>
# include <math.h>
//1.���������(���)
int Add_two_number(int x, int y)
{
	return x + y;
}
//2.�����������ֵ
int Max(int x, int y)
{
	int z;
	z = (x >= y ? x : y);
	printf("%d\n", z);
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
	//����һ(ѭ�����)
	//int factorial = 1;
	//for (int i = 1; i <= n; i++)
	//	factorial *= i;
	//printf("%d\n", factorial);
	//return 0;
	//������(�ݹ鷽��)
	(n <= 1) ? 1 : (n * Factorial_n(n - 1));
	/*if (n <= 1)
		return 1;
	else
		return n * Factorial_n(n - 1);*/

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
//13.������������
void Swap(int* a, int* b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}
//14. дһ�����������ж�һ�����ǲ���������
int is_prime_number(int x)
{
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
			return 0;
	}
	return 1;
}
//prime number
//15. дһ�������ж�һ���ǲ������ꡣ
int is_leap_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		return 1;
	else
		return 0;
}
//16. дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
int binary_search(int arr[], int k, int sz)
{
	//�㷨��ʵ��
	int left = 0;//���±�
	int right = sz - 1;//���±�
	while (left <= right)
	{
		int mid = (left + right) / 2;//�м��±�
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}


//17. дһ��������ÿ����һ������������ͻὫnum ��ֵ����1��
void Add(int* p)
{
	(*p)++;
}
//18.����һ������ֵ(�޷���)�����մ�ӡ˳���ӡ����ÿһλ�����磺1234,���1 2 3 4.
void Sequential_printing(int n)//1234
{
	if (n > 9)
		Sequential_printing(n / 10);//123
	printf("%d ", n % 10);//4
}
//19.��д��������������ʱ���������ַ����ĳ��ȡ�
int my_strlen(char* str)
{
	//�����ַ�������
	//����һ
	/*int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;*/
	//������
	(*str != '\0') ? (1 + my_strlen(str + 1)) : 0;

	//if (*str != '\0')
	//	return 1 + my_strlen(str + 1);
	//else
	//	return 0;
}
//20.���n��쳲�������
int Fibonacci_sequence(int n)
{
	//����һ(�ݹ�)
	//(n <= 2) ? 1 : (Fibonacci_sequence(n - 1) + Fibonacci_sequence(n - 2));

	//if (n <= 2)
	//{

	//	return 1;
	//}
	//else
	//{
	//	return Fibonacci_sequence(n - 1) + Fibonacci_sequence(n - 2);
	//}
	//������(ѭ��)
	int a = 1, b = 1, c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
//21.��ŵ������
void Tower_of_Hanoi_move(int x, int y)
{
	printf("%c->%c\n", x, y);
}
//Tower_of_Hanoi_move�е�ʵ����Tower_of_Hanoi�����е��β����Ӧ����Tower_of_Hanoi�������β�a��b��c����Ӧ��ֵҲ�����й��ɵı仯
void Tower_of_Hanoi(int n, char a, char b, char c)
{
	if (n == 1)
	{
		Tower_of_Hanoi_move(a, c);
	}
	else
	{
		Tower_of_Hanoi(n - 1, a, c, b);//��A���ϵ�n-1�����ӽ���C������B��
		Tower_of_Hanoi_move(a, c);//��A�������һ����������C��
		Tower_of_Hanoi(n - 1, b, a, c);//��B���ϵ�n-1�����ӽ���A������C��
	}
}
//22.������̨������
int Frog_jumping(long int n)
{
	if (n == 1)
	{
		return 1;
	}
	if (n == 2)
	{
		return 2;
	}
	return Frog_jumping(n - 1) + Frog_jumping(n - 2);
}
//23.ð������
void Bubbling_sort(int arr[], int sz)
{
	//ȷ����Ҫ���������
	//int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz - 1; i++)
	{
		//����һ����Ҫ����������Ѿ�����
		int flag = 1;
		//ÿһ��ð�����������
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;//�����������ݲ���ȫ����
			}
		}
		if (flag)
		{

			break;
		}
	}
}
//24.strlen���ַ����ĳ���
int my_strlen_pointer5(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}