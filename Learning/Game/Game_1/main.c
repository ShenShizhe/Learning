# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
# include <time.h>



int main(void)
{
	system("color a");
	gg();
	int count = 0;
	system("cls");
	do {
		do
		{
			usermenu();
			char usermenu_input[20] = { 0 };
			scanf("%s", usermenu_input);
			if (strcmp(usermenu_input, "1") == 0)
			{
				system("cls");
				gamemenu();
				char gamemenu_input[20] = { 0 };
				scanf("%s", gamemenu_input);
				system("cls");
				if (strcmp(gamemenu_input, "1") == 0)
				{
					printf("������ʾ�����ַ�Χ(1~1000)\n");
					do
					{
						game_lev1();
						system("cls");
						printf("����һ�֣�������ô������\n\n");
						system("shutdown -a");
						system("shutdown -s -t 60");
						count++;
					} while (count <= 10);
					system("shutdown -a");
					printf("�����ע���������˳�������������������ĺ�����(������)\n");
					printf("\n����һ�֣�\n");
				}
				if (strcmp(gamemenu_input, "2") == 0)
				{
					printf("������ʾ�����ַ�Χ(1~100)\n");
					do
					{
						game_lev2();
						system("cls");
						printf("\n���ǿ����(���������^_^)\n");
						count++;

					} while (count < 1);
					system("shutdown -a");
					printf("\n�����ע���������˳�������������������ĺ�����(������)\n");
					printf("\n����һ�֣�\n");
				}
				else if (strcmp(gamemenu_input, "0") == 0)
					do
					{
					} while (1);
			}
			else if (strcmp(usermenu_input, "0") == 0)
			{
				gg();
				system("cls");
			}
		} while (count <= 0);
		usermenu();
		char usermenu_input_1[20] = { 0 };
		scanf("%s", usermenu_input_1);
		if (strcmp(usermenu_input_1, "0") == 0)
			break;
	} while (count <= 0);
	return 0;
}