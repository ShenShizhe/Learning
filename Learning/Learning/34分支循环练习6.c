#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

int main_34(void)
{
	//9.��ӡ�������֮�������
	int year = 0, count = 0;//������[year����]
	for (year = 1000; year <= 2000; year++)
	{
		//�ж�year�Ƿ�Ϊ����:[1.�ܱ�4�������Ҳ��ܱ�100����2.�ܱ�400����������]

		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			printf("%d ", year);
			count++;
		}
		//else if (year % 400 == 0)
		//{
		//	printf("%d ", year);
		//	count++;
		//}
	}
	printf("һ����%d������\n", count);
	return 0;

}