# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <string.h>
# include <Windows.h>
# include <stdlib.h>
int main_37(void)
{
	//11.��1~100��'9'������֣����ֵĸ���[1.��λ��9��%10����9 2.ʮλ��9������/10�̵���9]
	int i = 1, count = 0;
	for (int i = 0; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
	printf("\n9һ��������%d��\n", count);
	return 0;

}