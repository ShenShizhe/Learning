#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

int main_28(void)
{
	/*int ch = 0;
	while ((ch = getchar() != EOF))
	{
		if (ch < '0' || ch > '9')
			continue;
		printf("%c\n", ch);
	}*/
	//whileѭ�����������ӣ������ϳ�ʱ[��ʼ�����жϡ�����]�������ֲַ���ɢ�������ڳ���ĵ���
	//int i = 0;//��ʼ��
	//while (i < 10)//�ж�
	//{
	//	//����
	//	i++;//����
	//}

	//forѭ��
	//for(���ʽ1;���ʽ2;���ʽ3)//���ʽ1:��ʼ�����֡����ʽ2���жϲ��֡����ʽ3����������
	//	ѭ�����;

	//����forѭ����ӡ1~10
	for (int i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d ", i);

	}
	printf("\n");
	/*
	forѭ�����������־���ʡ�ԣ�����жϲ���ʡ�ԣ���ô�����Ϊ��
	*/
	//int i = 0, j = 0;
	//for (; i < 10; i++)
	//{
	//	for (; j < 10; j++)
	//		printf("HAHA\n");
	//}
	//���н����
	//	HAHA
	//	HAHA
	//	HAHA
	//	HAHA
	//	HAHA
	//	HAHA
	//	HAHA
	//	HAHA
	//	HAHA
	//	HAHA

	printf("*************\n");
	//*************
	//�ó���ѭ���˼��Σ�
	/*int i = 0, j = 0;
	for (i = 0, j = 0; j = 0; j++)
		j++;
	printf("%d\n", j);
	printf("*************\n");*/
	//do����whileѭ������ӡ1~10������
	int i = 1;
	do
	{

		if (i == 5)
			//break;
			continue;
		printf("%d ", i);
		i++;
	} while (i <= 10);
	return 0;

}