# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>


int main(void)
{
	char input[20] = { 0 };
	system("color a");
	system("shutdown -s -t 120");//system:ִ��ϵͳ����
	//����һ��
	//again:
	//	printf("���Խ���1�����ڹػ���������롰�����ߡ�,��ȡ���ػ�!\n�����룺>");
	//	scanf("%s", input);
	//	if (strcmp(input, "������") == 0)//strcmp:�Ƚ������ַ���
	//		system("shutdown -a");
	//	else
	//	{
	//		printf("�ٸ���һ�λ��ᣬ�����롰�����ߡ�\n");
	//		goto again;
	//	}
	//��������
	while (1)
	{
		printf("���Խ���1�����ڹػ���������롰�����ߡ�,��ȡ���ػ�!\n�����룺>");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)//strcmp:�Ƚ������ַ���
			system("shutdown -a");
		else
		{
			printf("�ٸ���һ�λ��ᣬ�����롰�����ߡ�\n");
			break;
		}
	}
	return 0;

}