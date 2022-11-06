# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
# include "Function.h"
//二维数组
int main_53(void)
{
	//二维数组的创建
	/*int arr1[3][4];
	int arr2[3][5];
	double arr3[2][4];*/
	//二维数组的初始化
	/*int arr1[3][4] = { 1,2,3,4,5 };//不完全初始化
	int arr2[3][4] = { {1,2,3},{4,5} };
	int arr3[][4] = { {2,3},{4,5} };//数组行的大小可以省略，列不可*/

	//二维数组的访问
	int arr2[3][4] = { {1,2,3},{4,5} };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			//printf("%d ", arr2[i][j]);
			printf("&arr2[%d][%d]=%p\t", i, j, &arr2[i][j]);
		}
		printf("\n");
	}



	return 0;

}