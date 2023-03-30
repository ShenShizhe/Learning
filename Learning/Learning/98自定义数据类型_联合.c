#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
结构体
struct S
{};
*/
/*
枚举
enum S
{};
*/


/*
联合：联合类型定义、联合特点、联合大小计算

联合的特点：
联合的成员是共用同一块内存空间的，这样一个联合变量的大小，至少是最大成员的大小(因为联合至少得有能力保存最大的那个成受)。

联合大小的计算：
1、联合的大小至少是最大成员的大小。
2、当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍。(对于数组则是计算元素的对齐数，而不是元素的个数等其他原因)


联合体--共用体

*/


union Un
{
	char c;
	int i;
};

int check_sys_98_1()
{
	int a = 1;
	return *(char*)&a;

}
int check_sys_98_2()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;//返回1，表示小端；返回0，表示大端

}


union Un_1
{
	int a;//(int类型大小：4、默认对齐数：8)较小值4，对齐数4
	char arr[5];//(char类型大小：1、默认对齐数：8)对齐数1
};

int main_98()
{
	union Un u;
	printf("%d\n", sizeof(u));//4

	printf("%p\n", &u);

	printf("%p\n", &(u.c));
	printf("%p\n", &(u.i));

	/*
	大小端字节序问题：

	int a = 0x 11 22 33 44;
	低地址----------------------->高地址
	...[][][][][11][22][33][44][][][][][][][][][]...（大端字节序存储模式）
	...[][][][][44][33][22][11][][][][][][][][][]... (小端字节序存储模式）

	讨论一个数据，放在内存中的存放字节顺序
	大小端字节序问题

	*/

	int ret = check_sys_98_2();
	if (1 == ret)
		printf("小端\n");
	else
		printf("大端\n");

	union Un_1 u1;
	printf("%d\n", sizeof(u1));//8



	return 0;
}