# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
# include <time.h>

//void test1(int arr1[])//������ʽΪָ�룬���ݴ�С�Բ���ϵͳλ׼[32λϵͳ--4��64λϵͳ---8]
//{
//	printf("%d\n", sizeof(arr1));//ָ���С[8]
//}
//void test2(int arr2[])
//{
//	printf("%d\n", sizeof(arr2));//ָ���С[8]
//}
int main_60(void)
{
	/*int a = 0;
	char b = 'w';
	int arr[10] = { 0 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));

	printf("%d\n", sizeof(b));
	printf("%d\n", sizeof(char));

	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(int[10]));*/


	//short  s = 0;//2
	//int a = 10;//4
	////sizeof�ڲ��ı��ʽ����������
	//printf("%d\n", sizeof(s = a + 5));//2
	//printf("%d\n", s);//0
	//printf("%d\n", sizeof(s));//2

	//~[��λȡ��(������λ)]
	//int a = 0;					//000000000|000000000|000000000|000000000[����]
	//printf("%d\n", ~a);//-1		//111111111|111111111|111111111|111111111[����]------->111111111|111111111|111111111|111111110[[����]------>10000000|00000000|00000000|000000001[ԭ��]
	//printf��ӡ���Ƕ����Ƶ�ԭ�룬����-1��ȡ���õ�ԭ��


	//int a = 11;   //000000000|000000000|000000000|000001011[����]
	//a |= (1 << 2);
	//printf("%d\n", a);//15

	//a &= (~(1 << 2));
	//printf("%d\n", a);//11

	//����[++]�Լ�[--]
	//int a = 10;
	//printf("%d\n", ++a);//ǰ��++����++����ʹ��
	//printf("%d\n", a++);//����++����ʹ�ã���++

	//ǿ�� ����ת��
	//int a = (int)3.14;//(int)[ǿ������ת����ת��Ϊint ����]
	//printf("%d\n", a);//3


	/*int arr1[10] = { 0 };
	char arr2[10] = { '0' };
	printf("%d\n", sizeof(arr1));//40
	printf("%d\n", sizeof(arr2));//10
	test1(arr1);
	test2(arr2);*/

	return 0;
}