# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
# include <time.h>

int main_59(void)
{
	//赋值操作符号
	//赋值操作符可以连续使用
	//int a = 10;
	//int x = 0;
	//int y = 20;
	//a = x = y + 1;//连续赋值
	//x = y + 1, a = x;//等价于上述代码
	//赋值操作符一个“=”，判断操作符"=="
	//***********************************************************
	//***********************************************************
	//复合赋值符
	//int a = 2;
	//a = a + 2;
	////复合赋值符
	//a += 2;
	//a = a >> 1;
	////复合赋值符
	//a >>= 1;
	//a = a & 1;
	////复合赋值符
	//a &= 1;
	//***********************************************************
	//***********************************************************
	//单目操作符[只有一个操作数]
	/*int a = 0;
	if (!a)
	{
		printf("hehe!!\n");
	}
	if (a)
	{
		printf("haha!!\n");
	}*/
	//printf("%d\n", !a);//0


	//int a = 10;
	//int* p = &a;//[&]取地址操作符
	//*p = 20;//[*]解引用操作符

	//sizeof计算变量所占内存空间的大小，单位字节，如果是类型不能省略括号[sizeof int;//error]
	//int a = 10;
	//char c = 'a';
	//char* p = &c;
	//int arr[10] = { 0 };
	//printf("%d\n", sizeof(a));//4[整形的大小]
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(c));//1[字符的大小]
	//printf("%d\n", sizeof(char));
	//printf("%d\n", sizeof(p));//8[指针的大小，与操作系统位数有关，32位为4,64位为8]
	//printf("%d\n", sizeof(char*));
	//printf("%d\n", sizeof(arr));//40[10个整形的大小]
	//printf("%d\n", sizeof(int[10]));//数组的类型：去掉数组名[int[10]]


	return 0;
}