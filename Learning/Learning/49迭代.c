# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
# include "Function.h"

int main_49(void)
{
	//************************************************************************
	//��ϰ1.��n�Ľ׳ˡ��������������[Function.c��������Factorial_n]
	/*int n = 0, ret = 0;
	scanf("%d", &n);
	ret = Factorial_n(n);
	printf("%d\n", ret);*/
	//************************************************************************
	//��ϰ2.���n��쳲�������
	//쳲��������У� 1 1 2 3 5 8 13 21 ...[Function.c��������Fibonacci_sequence]

	/*int n = 0, ret = 0;
	scanf("%d", &n);
	ret = Fibonacci_sequence(n);
	printf("ret=%d\n", ret);*/
	//************************************************************************
	//��ϰ3. ��ŵ������[Function.c��������Tower_of_Hanoi_move��Tower_of_Hanoi]
	//�����ܹ���Ҫ�ƶ�n������[1.��A���ϵ�n-1�����ӽ���C������B����2.��A���Ͻ�ʣ�����һ����������C����3.��B���ϵ�n-1�����ӽ���A������C��]
	/*int n = 0;
	printf("��Ҫ�ƶ���������Ŀ(n):");
	scanf("%d", &n);
	Tower_of_Hanoi(n, 'A', 'B', 'C');*/
	//************************************************************************
	//��ϰ4. ������̨������[Function.c��������Frog_jumping]
	//��n��̨�ף�һֻ���ܿ���һ����1������2��̨�ף�������n��̨���ж�����������---����ָoffer��
	long int n;
	printf("������̨�׵�����(n):");
	scanf("%d", &n);
	long int frequency = Frog_jumping(n);
	printf("%ld\n", frequency);

	return 0;

}