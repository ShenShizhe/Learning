# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>


void gg()
{
	char input[20] = { 0 };
	system("shutdown -s -t 120");//system:ִ��ϵͳ����
	do
	{
		printf("��ĺ�����<������>д��һ��С��Ϸ,��Ը����һ������\n\n����(Ը��)���ɰ�����Ϸ��>");
		scanf("%s", input);
		if (strcmp(input, "Ը��") == 0)//strcmp:�Ƚ������ַ���
		{
			system("shutdown -a");
			system("shutdown -s -t 120");
			break;
		}
		else
			printf("��TM��������,");
	} while (strcmp(input, "Ը��") != 0);
}