# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
int main_35(void)
{
	//10.��100~200�������
	int i = 0, count = 0;
	for (i = 100; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����[1.�Գ���(����2~i-1������)]
		//����һ
		/*int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			count++;
			printf("%d ", i);
		}*/



		//������(���ÿ������)
		int j = 0;
		for (j = 2; j < sqrt(i); j++)//sqrt��ƽ������ѧ�⺯��
		{
			if (i % j == 0)
				break;
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\nһ����%d������\n", count);
	return 0;

}