#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
枚举：枚举的定义、枚举的优点、枚举的使用



我们可以使用#define定义常量，为什么非要使用枚举 ? 枚举的优点 :
1.增加代码的可读性和可维护性
2.和#define定义的标识符比较枚举有类型检查, 更加严谨。
3.防止了命名污染(封装)
4.便于调试
5.使用方便，一次可以定义多个常量


*/


//1、枚举的定义
enum Sex//性别是枚举
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
