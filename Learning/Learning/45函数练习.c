# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
/*��ϰ
1. дһ�����������ж�һ�����ǲ���������
2. дһ�������ж�һ���ǲ������ꡣ
3. дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
4. дһ��������ÿ����һ������������ͻὫnum ��ֵ����1��
*/



int main_45(void)
{
	//1. дһ�����������ж�һ�����ǲ���������
	int a = 101;
	int b = prime_number(a);
	printf("%d\n", b);
	return 0;

}