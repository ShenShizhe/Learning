#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

int main_33(void)
{
	//8.�������������������Լ��(շת�����)
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