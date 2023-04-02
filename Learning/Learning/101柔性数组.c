#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
/*
Ҳ�������û����˵���������� ( flexible array )������������ȷʵ�Ǵ��ڵġ�
C99�У��ṹ�е����һ��Ԫ��������δ֪��С�����飬��ͽ������������须��Ա��I

*/
/*

����������ص㣺

�ṹ�е����������Աǰ���������һ��������Ա��
sizeof���ص����ֽṹ��С����������������ڴ档
�������������Ա�Ľṹ��malloc ()���������ڴ�Ķ�̬���䣬���ҷ�����ڴ�Ӧ�ô��ڽṹ�Ĵ�С������Ӧ���������Ԥ�ڴ�С��


�ŵ㣺

��һ���ô��ǡ÷����ڴ��ͷ�
	������ǵĴ�������һ���������õĺ����У������������˶����ڴ���䣬���������ṹ�巵�ظ��û���
	�û�����free�����ͷŽṹ�壬�����û�����֪������ṹ���ڵĳ�ԱҲ��Ҫfree�������㲻��ָ���û�����������¡�
	���ԣ�������ǰѽṹ����ڴ��Լ����ԱҪ���ڴ�һ���Է�����ˣ������ظ��û�һ���ṹ��ָ�룬�û���һ��free�Ϳ��԰����е��ڴ�Ҳ���ͷŵ���
�ڶ����ô���:���������ڷ����ٶ�.
	�������ڴ���������߷����ٶȣ�Ҳ�����ڼ����ڴ���Ƭ��(��ʵ���Ҹ��˾���Ҳû����ˣ��������ܲ���Ҫ����ƫ�����ļӷ���Ѱַ)


*/

struct SD
{
	int n;
	int arr[10];//��ͳ��д��

};

struct S
{
	int n;
	int arr[];//δ֪��С--(���������Ա�������С�ɵ���)
};

struct D
{
	int n;
	int* arr;
};

//����һ�����������ʹ�ã����ٵĿռ���n�������ģ�����Ч�ʸ���
int main_101_1()
{
	//struct S s;
	//printf("%d\n", sizeof(s));//4

	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
	ps->n = 100;
	int i = 0;
	for (; i < 5; i++)
		ps->arr[i] = i;//0 1 2 3 4
	struct S* ptr = realloc(ps, 44);
	if (ptr != NULL)
		ps = ptr;
	for (i = 5; i < 10; i++)
		ps->arr[i] = i;
	for (i = 0; i < 10; i++)
		printf("%d ", ps->arr[i]);
	//�ͷ�

	free(ps);
	ps = NULL;
	return 0;
}

//��������ʹ��ָ������������׳����ڴ���Ƭ���о�����
int main_101_2()
{
	struct D* ps = (struct S*)malloc(sizeof(struct D));
	ps->arr = malloc(5 * sizeof(int));
	int i = 0;
	for (; i < 5; i++)
		ps->arr[i] = i;
	for (i = 0; i < 5; i++)
		printf("%d ", ps->arr[i]);
	//������С
	int* ptr = realloc(ps->arr, 10 * sizeof(int));
	if (ptr != NULL)
		ps->arr = ptr;
	for (i = 5; i < 10; i++)
		ps->arr[i] = i;
	for (i = 0; i < 10; i++)
		printf("%d ", ps->arr[i]);

	//�ͷ�
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;

	return 0;
}





