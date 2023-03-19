#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>
#include "Function.h"


//1.���������������Լ������С�����������������ɼ������롣

// ��������
// �����Լ������
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

// ����С����������
int lcm(int a, int b)
{
	int result = a * b / gcd(a, b);

	return result;
}
int main_00_01()
{
	int num1, num2;

	printf("����������������: ");
	scanf("%d %d", &num1, &num2);

	printf("���Լ��: %d\n", gcd(num1, num2));
	printf("��С������: %d\n", lcm(num1, num2));

	return 0;
}


///*��δ������ͨ�������������������������ǵ����Լ������С��������������������
//����gcd()�������������Լ����lcm()������������С��������
//*/

//2.��һ��������:2/1,3/2,5/3,8/5,13/8,21/13...���������е�ǰ20��֮�͡�
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
//3.��д������,�ж���һ����λ���ǲ���õ�廨������νõ�廨��������λ����λ���ֵ��Ĵη���ǡ�õ��ڸ�������,��:1634=1^4+6^4+3^4+4^4)�����������дӼ�����������һ����λ��,���øú���,���ݷ���ֵ�жϸ����Ƿ�Ϊõ�廨��,���������1,"�������0��
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
�ú�������һ����λ����Ϊ�������ж����Ƿ�Ϊõ�廨���������� true �� false��
õ�廨����ָ��λ���и������ֵ��Ĵη�֮�͵��ڸ���������������磺1634 ����һ��õ�廨������Ϊ 1^4 + 6^4 + 3^4 + 4^4 = 1634��

������Ĵ����У�����ͨ��һ�� while ѭ������� num �и������ֵ��Ĵη�֮�ͣ������䱣�浽 sum �����С�
Ȼ�����ǽ� sum �� num ���бȽϣ�������˵��������һ��õ�廨�������� true�����򷵻� false��

�� main �����У���������Ҫ���û������л�ȡһ����λ����Ϊ������Ȼ����� isRoseNumber ���������жϣ������ݷ���ֵ��������

���н�����£�

Please enter a four-digit number: 1634
1634 is a rose number.

Please enter a four-digit number: 1234
1234 is not a rose number.

*/
//4һ�������ǡ�õ�����������֮��,������ͳ�Ϊ"����"������,6������Ϊ1��2��3,��6=1+2+3,���6��"������"��������ҳ�1000֮�ڵ���������,���������ʽ���������:6��������1��2��3.
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
			printf("%d��������", i);
			for (j = 1; j <= i / 2; j++) {
				if (i % j == 0) {
					printf("%d��", j);
				}
			}
			printf("%d��\n", j);
		}
	}



	return 0;
}
//5.����һ����,�ж����1�������֮����ܱ�3�������ܱ�7����������
int main_00_05(void)
{

	return 0;
}
//6.�ж�һ�����Ƿ�Ϊ������
int main_00_06(void)
{

	return 0;
}
//7.���������ǴӼ�����������ַ���ͳ�������ַ��ĸ���,�û��з��������롣
int main_00_07(void)
{

	return 0;
}
//8.�������һ�����������жϸ����Ƿ����5�ı�������7�ı���������,���1,�������0
int main_00_08(void)
{

	return 0;
}
//9.���:
//		x(x+2)	2<x<=10
//y=		1/x		-1<x<=2
//		x-1		x<=-1
//
//����x,���y
//
int main_00_09(void)
{

	return 0;
}

//10.�ҳ�1000���ڸ�λ�ϵ�����֮��Ϊ15������������������Ļ���
int main_00_10(void)
{

	return 0;
}
//11.����x��y�������������ȴ��С��˳�����x��y��

int main_00_11(void)
{

	return 0;
}
//12.�Ӽ���������κ�����������������е���Сֵ��

int main_00_12(void)
{

	return 0;
}
//13.�����ַ����������еķ������ַ�ɾ������������ַ���
int main_00_13(void)
{

	return 0;
}
//14.����10������������a��, ����������a�����������������
int main_00_14(void)
{

	return 0;
}
//15.�������ֱ�ͳ������һ���ַ�������, ��ĸ, �ո�������ַ�������
int main_00_15(void)
{

	return 0;
}
//16.�ɼ�������ʮ��������������, �����������Ų����
int main_00_16(void)
{

	return 0;
}
//17.��һ��һά����score���ڷ�10��ѧ���ɼ�, ����ʵ����ƽ���ɼ�
int main_00_17(void)
{

	return 0;
}

//18.�����ַ���, �����еķ������ַ�ɾ����, ��������ַ���
int main_00_18(void)
{

	return 0;
}
//19.����10������������a��, ����������a���������������
int main_00_19(void)
{

	return 0;
}

//20.�ֱ�ͳ������һ���ַ�������, ��ĸ, �ո�������ַ�����
int main_00_20(void)
{

	return 0;
}
//21.��������ʮ��������������, �����������Ų����
int main_00_21(void)
{

	return 0;
}

//22.��һ��һά���� score���ڷ�10�ɼ���ѧ���ɼ�, ����ʵ����ƽ��

int main_00_22(void)
{

	return 0;
}

//
//
//bool is_prime(int num) {
//	if (num <= 1) return false; // 1����������ֱ�ӷ���false
//	for (int i = 2; i * i <= num; i++) {
//		if (num % i == 0) return false;
//	}
//	return true;
//}
//
//int main() {
//	int n = 100;
//	printf("1��%d֮��������У�\n", n);
//	for (int i = 1; i <= n; i++) {
//		if (is_prime(i)) printf("%d ", i);
//	}
//	return 0;
//}

