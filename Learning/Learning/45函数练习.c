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



int main(void)
{
	//1. дһ�����������ж�һ�����ǲ���������[Add_function.c������������is_prime_number]
	//for (int i = 1; i < 20; i++)
	//{
	//	if (is_prime_number(i) == 1)
	//		printf("%d ", i);
	//}
	//2. дһ�������ж�һ���ǲ������ꡣ[Add_function.c������������is_leap_year]
	//for (int year = 1000; year <= 2000; year++)
	//{
	//	if (1 == is_leap_year(year))
	//		printf("%d ", year);
	//}
	//3. дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�[Add_function.c������������]
	//�ҵ������±꣬���򷵻�-1
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 9;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int ret = binary_search(arr, k, sz);
	//if (ret == -1)
	//	printf("�Ҳ��������֣�\n");
	//else
	//	printf("�ҵ���,�±��ǣ�%d\n", ret);

	//4. дһ��������ÿ����һ������������ͻὫnum ��ֵ����1��
	int num = 0;

	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);



	return 0;
}
