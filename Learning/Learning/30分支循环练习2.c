#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <string.h>
# include <Windows.h>
# include <stdlib.h>
int main_30(void)
{


	//4.��д���룬��ʾ����ַ��������ƶ������м���
	/*Ч��ʾ����
	Welcome to study C !!!
	######################
	W####################!
	We##################!!
	Wel################!!!
	Welc############## !!!
	*/
	char arr1[] = "Welcome to study C !!!", arr2[] = "######################";
	//���������±�����±�[����һ]
	//int left = 0, right = sizeof(arr1) / sizeof(arr1[0]) - 2;
	//���������±�����±�[������]
	int left = 0, right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left], arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//��Ϣ1��
		system("cls");//ִ��ϵͳ�����һ������[cls:�����Ļ]
		left++, right--;
	}
	printf("%s\n", arr2);
	return 0;
}