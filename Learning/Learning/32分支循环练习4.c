#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

int main_32(void)
{
	//6.�Ӵ�С���������
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
	//7.��ӡ1~100����3�ı���������
	for (int i = 1; i <= 100; i++)
		if (i % 3 == 0)
			printf("%d ", i);
	return 0;

}