#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <string.h>
int main_31(void)
{
	//5.��д����ʵ�֣�ģ���û���¼����������ֻ�ܵ�¼���Ρ�
	//(ֻ���������������룬���������ȷ����ʾ��¼�ɹ�����֮��ʾ����������������������ξ�����������˳�����)
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("���������룺\n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//�ȺŲ��������Ƚ������ַ����Ƿ����[�⺯��--strcmp]
		{
			printf("��¼�ɹ���\n");
			break;
		}
		else if (i < 2)
			printf("���������������������룡\n");
	}
	if (i == 3)
		printf("��������������˳�����\n");
	return 0;

}