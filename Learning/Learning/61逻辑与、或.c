# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
# include <time.h>

int main(void)
{

	//int a = 3;
	//int b = 5;
	////�߼���
	//int c = a && b;
	//printf("%d\n", c);
	////�߼���
	//int c = a || b;
	//printf("%d\n", c);

	//int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;//&&��0��ֹͣ����(�м����)
	//printf(" a=%d\n b=%d\n c=%d\n d=%d\n ", a, b, c, d);//1 2 3 4

	//int i = 0, a = 1, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;
	//printf(" a=%d\n b=%d\n c=%d\n d=%d\n ", a, b, c, d);//2 3 3 5

	//int i = 0, a = 1, b = 2, c = 3, d = 4;
	//i = a++ || ++b || d++;// ||������ֹͣ����(����Ϊ��)
	//printf(" a=%d\n b=%d\n c=%d\n d=%d\n ", a, b, c, d);//2 2 3 4


	//����������(��Ŀ������)
	//exp1��exp2:exp3;
	int a = 0, b = 0;

	//if-else���ʽ
	/*if (a > 5)
		b = 3;
	else
		b = -3;*/
	b = (a > 5) ? 3 : (-5);


	return 0;
}