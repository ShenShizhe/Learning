#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

int main_29(void)
{
	//1.����n�Ľ׳�
	//2.����1��+2��+3��+����+10!
	//3.��һ�����������в��Ҿ����ĳ������n,��дint binsearch(int x,int v[],int n);���ܣ���v[0]<=v[1]<=v[2]<=����<=[n-1]�������в���x
	//4.��д���룬��ʾ����ַ��������ƶ������м���
	//5.��д����ʵ�֣�ģ���û���¼����������ֻ�ܵ�¼���Ρ�
	//(ֻ���������������룬���������ȷ����ʾ��¼�ɹ�����֮��ʾ����������������������ξ�����������˳�����)

	int n = 1;
	//1.����n�Ľ׳�[Add_function.c������������Factorial_n]
	Factorial_n(n);
	//2.����1��+2��+3��+����+10![Add_function.c������������Factorial_1n]
	Factorial_1n(n);
	//3.��һ�����������в��Ҿ����ĳ������n,��дint binsearch(int x,int v[],int n);���ܣ���v[0]<=v[1]<=v[2]<=����<=[n-1]�������в���x
	//����һ(��˳�����)
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int sz = sizeof(arr) / sizeof(arr[0]);//ȷ�����鳤��
	//for (int i = 0; i < sz; i++)
	//{
	//	if (n == arr[i])
	//	{
	//		printf("�ҵ���,�±�Ϊ��%d\n", i);
	//		break;
	//	}
	//	if (i == sz)
	//		printf("û��������֣�\n");
	//}
	//������(���ֲ��ҷ�)
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 6;
	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
	int left = 0;//���±�
	int right = sz - 1;//���±�
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
			right = mid - 1;
		else if (arr[mid] < k)
			left = mid + 1;
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("�Ҳ���\n");
	return 0;
}