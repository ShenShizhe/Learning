#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
//��֧��ѭ��
/*
�����г��������ֽṹ��ѭ��ṹ��ѡ��ṹ��ѭ���ṹ
 ��֧�ṹ��if��switch
 ѭ���ṹ��while��for��do while
*/
int main_25(void)
{
	//if���1---����֧********************
	/*if (���ʽ)
		���;*/
		//if���2---˫��֧********************
		//if(���ʽ)//���ʽ��ֵΪ��(��0),��ִ�����1,����ִ�����2
		//    ���1;
		//else
		//    ���2;
		//if���3---���֧********************
		//if(���ʽ1)//���ʽ��ֵΪ��(��0),��ִ�����1,����ִ�����2
		//    ���1;
		//else if(���ʽ2)
		//    ���2;
		//else
		//    ���3;


	int age = 90;
	if (age < 18)
		printf("δ����\n");
	else if (age >= 18 && age < 28)
		printf("����\n");
	else if (age >= 28 && age < 50)
		printf("׳��\n");
	else if (age >= 50 && age < 90)
		printf("����\n");
	else
		printf("��������\n");

	//������������Ҫִ�ж������ʱ����Ҫʹ��{}--�����
	//else���Զ��������������if����ƥ�䣬�׳�������else������
	/*int a = 0;
	int b = 2;
	if (a == 1)						//if���1
		if (b == 2)					//if���2
			printf("hehe\n");
		else						//else�Զ������������ifԤ���2����ƥ��
			printf("haha\n");*/
			//�����ʽ�漰�����������ʱ��Ӧ�þ�����������ǰ�������ͺ�


			//�ж�һ�����Ƿ�Ϊ����[Add_function.c������������Judgment_odd_number]
	Judgment_odd_number(age);
	//���1~X֮�������[Add_function.c������������Odd_number]
	Odd_number_x(age);
	//switch ��� switchȷ����������[Add_function.c������������Week]
	Week();//switch �ڵĲ������ͱ���Ϊ���� case �����Ϊ���γ������ʽ
	// switchȷ���Ƿ�Ϊ������[Add_function.c������������Work]
	Work();



	return 0;

}