#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
//static(修饰函数)
//声明外部函数(Add.c[Add])
/*
int Add(int x, int y)---->static int Add(int x, int y)//error,将无法解析
此处的static 改变了函数的链接属性(作用域),普通函数通过声明具有外部链接属性
*/
extern int Add(int, int);
int main_21(void)
{
	int a = 10, b = 20;
	int sum = Add(a, b);
	printf("%d", sum);
	return 0;
}