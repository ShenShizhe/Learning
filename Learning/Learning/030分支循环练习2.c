#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <string.h>
# include <Windows.h>
# include <stdlib.h>
int main_30(void)
{


	//4.编写代码，演示多个字符从两端移动，向中间汇聚
	/*效果示例：
	Welcome to study C !!!
	######################
	W####################!
	We##################!!
	Wel################!!!
	Welc############## !!!
	*/
	char arr1[] = "Welcome to study C !!!", arr2[] = "######################";
	//求数组左下标和右下标[方法一]
	//int left = 0, right = sizeof(arr1) / sizeof(arr1[0]) - 2;
	//求数组左下标和右下标[方法二]
	int left = 0, right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left], arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//休息1秒
		system("cls");//执行系统命令的一个函数[cls:清空屏幕]
		left++, right--;
	}
	printf("%s\n", arr2);
	return 0;
}
