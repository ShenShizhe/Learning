#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
//��֧�ṹ��һ��������
int main_26(void)
{
	int n = 1, m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)
		{
		case 1:
			n++;
		case 2:
			m++, n++;
			break;
		default:
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m=%d\tn=%d\n", m, n);

	//���н����
	//		m=5     n=3
	return 0;

}