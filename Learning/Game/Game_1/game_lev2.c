# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>


void game_lev2()
{
	//1.���������//RAND_MAX---0~32767
	int ret = 0, guess = 0;



	//2.������ 
	/*printf("������\n");*/
	while (1)
	{
		ret = rand() % 100 + 1;//���������(1~100)
		//printf("%d\n", ret);
		printf("��Ϸ�ȼ���Lev2(�����˵�ѡ��)\n");
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