# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>


int main(void)
{
	/*
	常用文档
	www.cplusplus.com
	http://en.cppreference.com（英文版）
	http://zh.cppreference.com（中文版）
*/
/*函数
[1.库函数:IO函数、字符串操作函数、字符操作函数、内存操作函数、时间/日期函数、数学函数、其他库函数]
[2.自定义函数]

*/

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
// 	printf("%d\n", z);
//}
//****************************************************
// 	   (两个数相加(求和)Add_function.c——————Add)

	//int a = 10, b = 20;
	//Add(a, b);
//****************************************************
	//strlen[string length ---求字符串长度]
	//strcpy[string copy ---字符串拷贝]


	//char arr1[] = "study-c";
	//char arr2[] = "########";
	//strcpy(arr2, arr1);//将arr1拷贝到arr2中(会将末尾的'\0'一同拷贝)
	//printf("%s\n", arr2);
//****************************************************
	////memset[memory set---内存设置]
	//char arr[] = "Hello World!!";
	//memset(arr, '*', 5);
	//printf("%s\n", arr);
	///*运行结果:
	//			*****World!!*/
//****************************************************
	//(求两个数最大值Add_function.c——————Max）
	//int a = 10, b = 20;
	//Max(a, b);
//****************************************************
//（交换两个数Add_function.c——————Swap）
	//int a = 3, b = 4;
	//printf("a=%d,b=%d\n", a, b);
	//Swap(&a, &b);
	//printf("a=%d,b=%d\n", a, b);
//****************************************************
	return 0;

}