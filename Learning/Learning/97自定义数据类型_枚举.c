#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
ö�٣�ö�ٵĶ��塢ö�ٵ��ŵ㡢ö�ٵ�ʹ��



���ǿ���ʹ��#define���峣����Ϊʲô��Ҫʹ��ö�� ? ö�ٵ��ŵ� :
1.���Ӵ���Ŀɶ��ԺͿ�ά����
2.��#define����ı�ʶ���Ƚ�ö�������ͼ��, �����Ͻ���
3.��ֹ��������Ⱦ(��װ)
4.���ڵ���
5.ʹ�÷��㣬һ�ο��Զ���������


*/


//1��ö�ٵĶ���
enum Sex//�Ա���ö��
{

	MALE = 2,
	FEMALE = 4,
	SECRET = 8,
};


enum Color
{
	RED,
	GREEN,
	BLUE,
};
int main_97_1()
{
	enum Sex s = MALE;
	//s = FEMALE;
	enum Color c = BLUE;

	printf("%d %d %d\n", RED, GREEN, BLUE);//0 1 2
	printf("%d %d %d\n", MALE, FEMALE, SECRET);//2 4 8
	return 0;
}
