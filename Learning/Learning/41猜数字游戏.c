# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
# include <time.h>
void menu()
{
	printf("*****************************************\n");
	printf("*****************************************\n");
	printf("******    1.Start         0.Quit    *****\n");
	printf("*****************************************\n");
	printf("*****************************************\n");
}
void game()
{
	//1.���������//RAND_MAX---0~32767
	int ret = 0, guess = 0;

	ret = rand() % 100 + 1;//���������(1~100)
	//printf("%d\n", ret);
	//2.������ 
	/*printf("������\n");*/
	while (1)
	{
		printf("������֣�>");
		scanf("%d", &guess);
		if (guess > ret)
			printf("�´��ˣ�\n");
		else if (guess < ret)
			printf("��С�ˣ�\n");
		else
		{
			printf("*********************\n");
			printf("** ��ϲ�㣬�����ˣ�**\n");
			printf("*********************\n");
			printf("\n\n");
			break;
		}
	}
}

int main_41(void)
{
	//����ʱ�����Ϊ��ʼ��[��ǰ�����ʱ���ȥ���������ʼʱ��(1970.1.1.0.0.0)�Ĳ�ֵ](xxx��λ��)
	srand((unsigned int)time(NULL));//time����(time-t*)
	//��������Ϸ[1.��������һ�������2.������]
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>>>>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����!!!\n");
			break;
		}
	} while (input);
	return 0;

}