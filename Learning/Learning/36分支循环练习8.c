# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <string.h>
# include <Windows.h>
# include <stdlib.h>
int main_36(void)
{

	//��100~200�������
	//������(ֻ������������֤)
	int i = 0, count = 0;
	for (i = 101; i <= 200; i += 2)
	{
		//�ж�i�Ƿ�Ϊ����[1.�Գ���(����2~i-1������)]
		//����һ
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
//���£�����������n�־��硷