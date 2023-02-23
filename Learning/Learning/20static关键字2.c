#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
//static(修饰全局变量)
// 改变了变量的作用域，让静态的全局变量只能在自己所在的源文件内部使用,出了源文件就没法使用了
//代码1
//add.c
//extern int g_val = 2018;//extern--声明外部符号
//test.c
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//代码2
//add.c
static int g_val = 2018;
//test.c
int main_20()
{
	printf("%d\n", g_val);
	return 0;
}