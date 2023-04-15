#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>
#include "Function.h"


//1.求两个整数的最大公约数和最小公倍数，两个整数由键盘输入。

// 函数声明
// 求最大公约数函数
int gcd(int a, int b)
{
	int temp;
	while (b > 0) {
		temp = a % b;
		a = b;
		b = temp;
	}

	return a;
}

// 求最小公倍数函数
int lcm(int a, int b)
{
	int result = a * b / gcd(a, b);

	return result;
}
int main_00_01()
{
	int num1, num2;

	printf("请输入两个正整数: ");
	scanf("%d %d", &num1, &num2);

	printf("最大公约数: %d\n", gcd(num1, num2));
	printf("最小公倍数: %d\n", lcm(num1, num2));

	return 0;
}


///*这段代码可以通过输入两个正整数来计算它们的最大公约数和最小公倍数，并将结果输出。
//其中gcd()函数用于求最大公约数，lcm()函数用于求最小公倍数。
//*/

//2.有一分数序列:2/1,3/2,5/3,8/5,13/8,21/13...求出这个数列的前20项之和。
int main_00_02(void)
{
	double sum = 0;
	double a = 2, b = 1;
	double c;
	for (int i = 1; i <= 20; i++) {
		sum += a / b;
		c = a + b;
		b = a;
		a = c;
	}
	printf("The sum of the first 20 terms is: %f\n", sum);
	return 0;
}
//3.编写个函数,判断其一个四位数是不是玫瑰花数（所谓玫瑰花数即该四位数各位数字的四次方和恰好等于该数本身,如:1634=1^4+6^4+3^4+4^4)。在主函数中从键盘任意输入一个四位数,调用该函数,根据返回值判断该数是否为玫瑰花数,若是则输出1,"否则输出0。
bool isRoseNumber(int num) {
	int sum = 0;
	int temp = num;

	while (temp != 0) {
		int digit = temp % 10;
		sum += digit * digit * digit * digit;
		temp /= 10;
	}

	if (sum == num) {
		return true;
	}
	else {
		return false;
	}
}
int main_00_03(void)
{

	int num;
	printf("Please enter a four-digit number: ");
	scanf("%d", &num);

	if (isRoseNumber(num)) {
		printf("%d is a rose number.\n", num);
	}
	else {
		printf("%d is not a rose number.\n", num);
	}

	return 0;
}
/*
该函数接受一个四位数作为参数，判断其是否为玫瑰花数，并返回 true 或 false。
玫瑰花数是指四位数中各个数字的四次方之和等于该数本身的数，例如：1634 就是一个玫瑰花数，因为 1^4 + 6^4 + 3^4 + 4^4 = 1634。

在上面的代码中，我们通过一个 while 循环来求出 num 中各个数字的四次方之和，并将其保存到 sum 变量中。
然后，我们将 sum 和 num 进行比较，如果相等说明该数是一个玫瑰花数，返回 true，否则返回 false。

在 main 函数中，我们首先要从用户输入中获取一个四位数作为参数，然后调用 isRoseNumber 函数进行判断，并根据返回值输出结果。

运行结果如下：

Please enter a four-digit number: 1634
1634 is a rose number.

Please enter a four-digit number: 1234
1234 is not a rose number.

*/
//4一个数如果恰好等于它的因子之和,这个数就称为"完数"。例如,6的因子为1、2、3,而6=1+2+3,因此6是"完数”"。编程序找出1000之内的所有完数,并按下面格式输出其因子:6的因子是1、2、3.
int main_00_04(void)
{

	int i, j, sum;

	for (i = 2; i <= 1000; i++) {
		sum = 0;
		for (j = 1; j <= i / 2; j++) {
			if (i % j == 0) {
				sum += j;
			}
		}
		if (sum == i) {
			printf("%d的因子是", i);
			for (j = 1; j <= i / 2; j++) {
				if (i % j == 0) {
					printf("%d、", j);
				}
			}
			printf("%d。\n", j);
		}
	}



	return 0;
}
//5.输入一个数,判断输出1到这个数之间既能被3整除又能被7整除的数。
int main_00_05(void)
{

	return 0;
}
//6.判断一个数是否为素数。
int main_00_06(void)
{

	return 0;
}
//7.下面程序段是从键盘上输入的字符中统计数字字符的个数,用换行符结束输入。
int main_00_07(void)
{

	return 0;
}
//8.编程输入一个正整数，判断该数是否既是5的倍数又是7的倍数，若是,输出1,否则输出0
int main_00_08(void)
{

	return 0;
}
//9.编程:
//		x(x+2)	2<x<=10
//y=		1/x		-1<x<=2
//		x-1		x<=-1
//
//输入x,输出y
//
int main_00_09(void)
{

	return 0;
}

//10.找出1000以内各位上的数字之和为15的所有整数，并在屏幕输出
int main_00_10(void)
{

	return 0;
}
//11.输入x、y两个整数，按先大后小的顺序输出x、y。

int main_00_11(void)
{

	return 0;
}
//12.从键盘输入的任何三个整数，求出其中的最小值。

int main_00_12(void)
{

	return 0;
}
//13.输入字符串，将其中的非数字字符删除后，输出整个字符串
int main_00_13(void)
{

	return 0;
}
//14.输入10个整数到数组a中, 并计算数组a中奇数个数并输出。
int main_00_14(void)
{

	return 0;
}
//15.下面程序分别统计输入一行字符中数字, 字母, 空格和其他字符个数。
int main_00_15(void)
{

	return 0;
}
//16.由键盘输入十个整数到数组中, 将他们逆序存放并输出
int main_00_16(void)
{

	return 0;
}
//17.有一个一维数组score，内放10个学生成绩, 函数实现求平均成绩
int main_00_17(void)
{

	return 0;
}

//18.输入字符串, 将其中的非数字字符删除后, 输出整个字符串
int main_00_18(void)
{

	return 0;
}
//19.输入10个整数到数组a中, 并计算数组a中奇数个数并输出
int main_00_19(void)
{

	return 0;
}

//20.分别统计输入一行字符中数字, 字母, 空格和其他字符个数
int main_00_20(void)
{

	return 0;
}
//21.键盘输入十个整数到数组中, 将他们逆序存放并输出
int main_00_21(void)
{

	return 0;
}

//22.有一个一维数组 score，内放10成绩个学生成绩, 函数实现求平均

int main_00_22(void)
{

	return 0;
}

//
//
//bool is_prime(int num) {
//	if (num <= 1) return false; // 1不是质数，直接返回false
//	for (int i = 2; i * i <= num; i++) {
//		if (num % i == 0) return false;
//	}
//	return true;
//}
//
//int main() {
//	int n = 100;
//	printf("1到%d之间的素数有：\n", n);
//	for (int i = 1; i <= n; i++) {
//		if (is_prime(i)) printf("%d ", i);
//	}
//	return 0;
//}

