#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
//ѭ�����
int main_27(void)
{   //���ʽ��expr ��䣺stmt
	//while (���ʽ)
	//{
	//	ѭ�����;
	//}
	//����Ļ�ϴ�ӡ1~x������[Add_function.c������������Number]
	int x = 10, i = 0;
	Number_x(x);
	//**********************************
	printf("\n");
	while (i <= x)
	{
		i++;
		if (i == 5)
			continue;
		//break;
		printf("%d ", i);

	}
	//printf("\n");
	//getchar���÷�
	//int ch1 = getchar();
	//putchar(ch1);//���ch
	//printf("%c\n", ch1);//���ch

	//***************************
	printf("\n");
	/*int ch = 0;*/
	//�Ӽ��̻�ȡCtrl+Zʱֹͣ
	//while (ch = getchar() != EOF)//EOF--end of file[���ʣ��ļ�������־��ֵ��-1]
	//{
	//	putchar(ch);
	//}
	//*************************************
	//demo1
	//int ret = 0;
	//char password[20] = { 0 };
	//printf("���������룺>");
	//scanf("%s", password);//�������룬�������password������
	//printf("��ȷ��(Y/N)��>");
	//ret = getchar();//Y/N
	//if (ret == 'Y')
	//{
	//	printf("ȷ�ϳɹ���\n");
	//}
	//else
	//{
	//	printf("����ȷ�ϣ�\n");
	//}

	/*���н����
	���������룺 > 123456
	��ȷ��(Y / N)�� > ����ȷ�ϣ�*/
	//printf("%d\n", '\n');
	/*
	'\n'��ASIICֵΪ10������˵��(scanf�س�ʱ�Ѿ����е�����),
	����=[ʵ�����������'\n'],��scanfֻ��ȡ��ʵ�ʵ����룬����'\n'�����뻺������
	��getchar ��ȡ���뻺����ʱ��������'\n'�󣬳����ֱ��ִ�У��Ӷ��������û���������Ĺ���
	*/
	//*************************************
	//demo2
	//int ret = 0;
	//char password[20] = { 0 };
	//printf("���������룺>");
	//scanf("%s", password);//�������룬�������password������
	////��������ʣ��һ��'\n',��Ҫ��ȡ'\n'�Ӷ�ʹ����ﵽ��������Ч��
	//getchar();//��Ҫ��ȡ'\n'
	//printf("��ȷ��(Y/N)��>");
	//ret = getchar();//Y/N
	//if (ret == 'Y')
	//{
	//	printf("ȷ�ϳɹ���\n");
	//}
	//else
	//{
	//	printf("����ȷ�ϣ�\n");
	//}
	/*���н����
		���������룺 > 123345 78
		��ȷ��(Y / N)�� > ����ȷ�ϣ�*/
		//���û���������뺬�пո�ʱ��ʣ��Ĳ��ֽ�������ڶ���getchar();,���³�������쳣
	//*************************************
	//demo3
	int ret = 0, ch = 0;
	char password[20] = { 0 };
	printf("���������룺>");
	scanf("%s", password);
	while ((ch = getchar()) != '\n')
	{
		;//�����,����while���getchar
	}
	printf("��ȷ��(Y/N)��>");
	ret = getchar();//Y/N
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ���\n");
	}
	else
	{
		printf("����ȷ�ϣ�\n");
	}
	return 0;

}