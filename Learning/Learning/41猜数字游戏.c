# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
void menu()
{
	printf("*****************************************\n");
	printf("******    1.Start         0.Quit    *****\n");
	printf("*****************************************\n");
}
void game()
{
	printf("������\n");
}
int main(void)
{
	//��������Ϸ[1.��������һ�������2.������]
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>>\n");
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