# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
# include <time.h>




void game()
{
	//system("color a");
	//����ʱ�����Ϊ��ʼ��[��ǰ�����ʱ���ȥ���������ʼʱ��(1970.1.1.0.0.0)�Ĳ�ֵ](xxx��λ��)
	srand((unsigned int)time(NULL));//time����(time-t*)
	//��������Ϸ[1.��������һ�������2.������]
	int input = 0;
	do
	{
		//menu();
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

}