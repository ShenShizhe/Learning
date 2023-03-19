#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>
#include "Function.h"
/*
喝汽水问题，1瓶汽水一元钱，两个空瓶可以换一瓶汽水，20元可以喝多少汽水？

20 10 5 2 1
*/

int main_92_01_01(void)
{
	int money = 0, total = 0, empty = 0;
	scanf("%d", &money);
	total = money; empty = money;
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("total=%d", total);
	return 0;
}

int main_92_01_02(void)
{
	int money = 0, total = 0;
	scanf("%d", &money);

	if (money == 0)
		total = 0;
	else
		total = 2 * money - 1;
	printf("total=%d", total);
	return 0;
}

/*
输入一个整形数组，使得奇数位于数组的前半部分，偶数位于后半分
*/
void print_92_02(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void move_92_02(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//从左边找偶数
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		//右边找奇数
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}
	}
}
int main_92_02(void)
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move_92_02(arr, sz);
	print_92_02(arr, sz);
	return 0;
}

int main_92_03(void)
{
	int a[5] = { 5,4,3,2,1 };
	int* ptr = (int*)(&a + 1);
	printf("%d,%d", *(a + 1), *(ptr - 1));//4,1
	return 0;
}

int main_92_04(void)
{

	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
	int* ptr1 = (int*)(&aa + 1);
	int* ptr2 = (int*)(aa + 1);
	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//1,6
}

/*
实现一个函数，可以坐旋字符串中的K个字符

例：
	ABCD左旋一个字符-->BCDA
	ABCD左旋两个字符-->CDAB

*/

#include <stdio.h>
#include <string.h>

void rotateLeft(char* s, int k) {
	if (s == NULL || k <= 0) {
		return;
	}
	int n = strlen(s);
	k %= n;
	char tmp;
	for (int i = 0; i < k; i++) {
		tmp = s[0];
		for (int j = 0; j < n - 1; j++) {
			s[j] = s[j + 1];
		}
		s[n - 1] = tmp;
	}
}

int main_92_03_01()
{
	char s1[] = "ABCD";
	rotateLeft(s1, 1);
	printf("%s\n", s1); //BCDA
	rotateLeft(s1, 2);
	printf("%s\n", s1); //CDAB
	return 0;
}

#include <string.h>
#include <stdio.h>
#include <assert.h>
void left_move(char* arr, int k)
{
	assert(arr);
	int i = 0, len = strlen(arr);
	for (i = 0; i < k; i++)
	{
		//左旋转一个字符
		char tmp = *arr;
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			*(arr + j) = *(arr + j + 1);
		}
		*(arr + len - 1) = tmp;
	}
}
int main_92_03_02(void)
{
	char arr[] = "abcdef";
	left_move(arr, 2);
	printf("%s\n", arr);
	return 0;
}

void reverse_92(char* left, char* right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}


void left_move_92_02(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	assert(k < len);
	reverse_92(arr, arr + k - 1);//逆序左边
	reverse_92(arr + k, arr + len - 1);//逆序右边
	reverse_92(arr, arr + len - 1);//逆序整体

}

int main_92_03_03(void)
{
	char arr[] = "abcdef";
	left_move_92_02(arr, 2);
	printf("%s\n", arr);
	return 0;
}
/*
写一个函数，判断一个字符串是否为另一个字符串旋转之后的字符串

*/
int is_left_move(char* s1, char* s2)
{

	int len = strlen(s1);
	int i = 0;
	for (; i < len; i++)
	{
		left_move(s1, 1);
		int ret = strcmp(s1, s2);
		if (ret == 0)
			return 1;
	}
	return 0;
}



int main_92_04_01()
{
	char arr1[] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move(arr1, arr2);
	ret == 1 ? printf("YES\n") : printf("NO\n");
	return 0;
}


#include <string.h>
int is_left_move_92_04_02(char* str1, char* str2)
{
	//在str1字符串中追加一个str1字符串
	//strcat(str1, str1);//该函数不能用于自己追加自己

	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
		return 0;
	strncat(str1, str1, len1);

	//判断str2指向的字符串是否为str1指向的字串
	//strstr--找字串
	char* ret = strstr(str1, str2);
	if (ret == NULL)
		return 0;
	else
		return 1;

}


int main_92_04_02()
{
	char arr1[30] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move_92_04_02(arr1, arr2);
	ret == 1 ? printf("YES\n") : printf("No\n");
	return 0;
}


/*

杨氏矩阵

有一个数学矩阵，矩阵的每行从左到右、每列从上到下均递增，编写程序在这样的矩阵中查找某个数字是否存在

要求：时间复杂度小于O(N)
*/
int Find_Num_92_05_01(int arr[3][3], int k, int row, int col)
{
	int x = 0, y = col - 1;
	while (y >= 0 && x <= row - 1)
	{
		if (arr[x][y] > k)
			y--;
		else if (arr[x][y] < k)
			x++;
		else
			return 1;
	}
	return 0;
}
int main_92_05_01()
{
	int arr[3][3] = { {1,2,3},
					  {4,5,6},
					  {7,8,9} };
	int k = 7;
	int ret = Find_Num_92_05_01(arr, k, 3, 3);
	ret == 1 ? printf("YES\n") : printf("No\n");

	return 0;
}


int Find_Num_92_05_02(int arr[3][3], int k, int* px, int* py)
{
	int x = 0, y = *py - 1;
	while (y >= 0 && x <= *px - 1)
	{
		if (arr[x][y] > k)
			y--;
		else if (arr[x][y] < k)
			x++;
		else
		{
			*px = x; *py = y;
			return 1;
		}
	}
	*px = -1; *py = -1;
	return 0;
}
int main_92_05_02()
{
	int arr[3][3] = { {1,2,3},
					  {4,5,6},
					  {7,8,9} };
	int k = 7, x = 3, y = 3;
	//返回型参数
	int ret = Find_Num_92_05_02(arr, k, &x, &y);
	ret == 1 ? printf("YES,%d,%d\n", x, y) : printf("No\n");

	return 0;
}