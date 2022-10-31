#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
//分支和循环
/*
生活中常见的三种结构：循序结构、选择结构、循环结构
 分支结构：if、switch
 循环结构：while、for、do while
*/
int main_25(void)
{
	//if语句1---单分支********************
	/*if (表达式)
		语句;*/
		//if语句2---双分支********************
		//if(表达式)//表达式的值为真(非0),则执行语句1,否则执行语句2
		//    语句1;
		//else
		//    语句2;
		//if语句3---多分支********************
		//if(表达式1)//表达式的值为真(非0),则执行语句1,否则执行语句2
		//    语句1;
		//else if(表达式2)
		//    语句2;
		//else
		//    语句3;


	int age = 90;
	if (age < 18)
		printf("未成年\n");
	else if (age >= 18 && age < 28)
		printf("青年\n");
	else if (age >= 28 && age < 50)
		printf("壮年\n");
	else if (age >= 50 && age < 90)
		printf("老年\n");
	else
		printf("长命百岁\n");

	//当条件陈立，要执行多条语句时，需要使用{}--代码块
	//else将自动与其相离最近的if进行匹配，易出现悬空else的问题
	/*int a = 0;
	int b = 2;
	if (a == 1)						//if语句1
		if (b == 2)					//if语句2
			printf("hehe\n");
		else						//else自动与相离最近的if预语句2进行匹配
			printf("haha\n");*/
			//当表达式涉及常量与变量的时，应该尽量将常量提前，变量滞后


			//判断一个数是否为奇数[Add_function.c——————Judgment_odd_number]
	Judgment_odd_number(age);
	//输出1~X之间的奇数[Add_function.c——————Odd_number]
	Odd_number_x(age);
	//switch 语句 switch确定今天日期[Add_function.c——————Week]
	Week();//switch 内的参数类型必须为整形 case 后必须为整形常量表达式
	// switch确定是否为工作日[Add_function.c——————Work]
	Work();



	return 0;

}