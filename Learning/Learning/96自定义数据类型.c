#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*

��������[char��short��int��long��float��double]

�Զ������ͣ����ӵĶ���--��������[�ṹ�塢ö�١�������]


�ṹ�壺�ṹ�����͵��������ṹ�������á��ṹ������Ķ���ͳ�ʼ�����ṹ���ڴ���롢�ṹ�崫�Ρ��ṹ��ʵ��λ��(λ�ε����&����ֲ��)

ö�٣�ö�ٵĶ��塢ö�ٵ��ŵ㡢ö�ٵ�ʹ��

���ϣ��������Ͷ��塢�����ص㡢���ϴ�С����
*/

/*
�����ṹ������[����ѧ������������ѧ��������߱���]
����ѧ�����ԣ��������绰���Ա�����


*/
//
//struct Student {
//	char name[20];
//	char tele[11];
//	char sex[10];
//	int age;
//}s4, s5, s6;
//
////ȫ�ֱ���[s3,s4, s5, s6;]
//struct Student s3;
//
////�ṹ��������[����ָ��ķ�ʽ]
//struct Node
//{
//	int data;
//	struct Node* next;
//
//}Node;//��struct Node��������ΪNode
//
//
//int main()
//{
//	//�����ṹ�����
//	struct Student s1;
//	struct Student s2;
//
//
//
//
//	return 0;
//}

//�ṹ������Ķ���ͳ�ʼ��
//struct T
//{
//	double weight;
//	short age;
//};
//
//struct Student {
//	struct T st;
//	char name[20];
//	char tele[11];
//	char sex[10];
//	int age;
//};
//
//int main()
//{
//	//struct Student s1 = { "zhangsan","123456","��",23 };
//
//	struct Student s1 = { {88.88,24},"zhangsan","123456","��",23 };
//
//
//	//printf("%s %s %s %d\n", s1.name, s1.tele, s1.sex, s1.age);
//
//	printf("%lf\n", s1.st.weight);
//
//
//
//	return 0;
//}


/*
�ṹ���ڴ����

1.��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ����
2������Ա����Ҫ���뵽ĳ������(�����������������ĵ�ַ����

������=������Ĭ�ϵ�һ����������ó�Ա��С�Ľ�Сֵ����vSĬ�ϵ�ֵΪ8��gccû��Ĭ�϶���������Ա��С���Ƕ���������

3.�ṹ���ܴ�СΪ��������(ÿ����Ա��������һ��������)����������
4�����Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ������������������������ṹ��������С����������������(��Ƕ�׽ṹ��Ķ�����)����������



Ϊʲô�����ڴ����?

�󲿷ֵĲο����϶�������˵��:
1.ƽ̨ԭ��(��ֲԭ��)�ò������е�Ӳ��ƽ̨���ܷ��������ַ�ϵ��������ݵ�;ĳЩӲ��ƽֻ̨����ĳЩ��ַ��ȡĳЩ�ض����͵����ݣ������׳�Ӳ���쳣��
������ԭ��:���ݽṹ(������ջ)Ӧ�þ����ܵ�����Ȼ�߽��϶��롣ԭ�����ڣ�Ϊ�˷���δ������ڴ棬��������Ҫ�������ڴ����;��������ڴ���ʽ���Ҫһ�η��ʡ�

������˵�U
�ṹ����ڴ�������ÿռ�����ȡʱ���������


��������ƽṹ���ʱ��������������ͬʱ��˽�ʡ�ռ��Ӧ�ã���ռ�ÿռ�С�ĳ�Ա����������һ��
*/

//struct S1
//{
//	char c1;//1
//	int a;//4
//	char c2;//1
//};
//struct S2
//{
//	char c1;//1
//	char c2;//1
//	int a;//4
//};
//struct S3
//{
//	double d;//8
//	char c;//1
//	int i;//4
//
//};
//struct S4
//{
//	char c1;//1
//	struct S3 s3;//16
//	double d;//8
//
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	struct S2 s2 = { 0 };
//	struct S3 s3 = { 0 };
//	struct S4 s4 = { 0 };
//
//	//_Interlocked_operand_
//	printf("%d\n", sizeof(s1));//12
//	printf("%d\n", sizeof(s2));//8
//	printf("%d\n", sizeof(s3));//16
//	printf("%d\n", sizeof(s4));//32
//
//	return 0;
//}


/*



*/

//#pragma pack(8)//����Ĭ�϶�����Ϊ8[ͨ������Ϊ2�Ĵη���]
//struct S
//{
//	char c1;//1
//	double d;//8
//
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶�����
//
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//16
//	return 0;
//}




//#include <stddef.h>//��
//struct S
//{
//	char c;//1
//	int i;//4
//	double d;//8
//};
//
//int main()
//{
//	//offsetoff(S, i);����ṹ���Ա����ڽṹ����ʼλ�õ�ƫ����
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//
//	return 0;
//}
