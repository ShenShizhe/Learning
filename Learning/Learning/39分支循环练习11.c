# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>


int main_39(void)
{
	//13.��10�������е����ֵ
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int max = arr[0];//���ֵ(�������Ԫ�ش��棬�������max������������Ԫ�ص��������)
	int i = 0;//�±�
	int sz = sizeof(arr) / sizeof(arr[0]);//���鳤��
	for (i = 1; i < sz; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	printf("max=%d\n", max);
	return 0;

}