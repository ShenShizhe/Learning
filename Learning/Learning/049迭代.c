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
	//练习1.求n的阶乘。（不考虑溢出）[Function.c————Factorial_n]
	/*int n = 0, ret = 0;
	scanf("%d", &n);
	ret = Factorial_n(n);
	printf("%d\n", ret);*/
	//************************************************************************
	//练习2.求第n个斐波那契数
	//斐波那契数列： 1 1 2 3 5 8 13 21 ...[Function.c————Fibonacci_sequence]

	/*int n = 0, ret = 0;
	scanf("%d", &n);
	ret = Fibonacci_sequence(n);
	printf("ret=%d\n", ret);*/
	//************************************************************************
	//练习3. 汉诺塔问题[Function.c————Tower_of_Hanoi_move、Tower_of_Hanoi]
	//假设总共需要移动n个盘子[1.将A柱上的n-1个盘子借助C柱移向B柱、2.将A柱上仅剩的最后一个盘子移向C柱、3.将B柱上的n-1个盘子借助A柱移向C柱]
	/*int n = 0;
	printf("需要移动的盘子数目(n):");
	scanf("%d", &n);
	Tower_of_Hanoi(n, 'A', 'B', 'C');*/
	//************************************************************************
	//练习4. 青蛙跳台阶问题[Function.c————Frog_jumping]
	//有n个台阶，一只青蛙可以一次跳1个或者2个台阶，跳到第n个台阶有多少种跳法？---《剑指offer》
	long int n;
	printf("请输入台阶的总数(n):");
	scanf("%d", &n);
	long int frequency = Frog_jumping(n);
	printf("%ld\n", frequency);

	return 0;

}
