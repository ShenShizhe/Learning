# ifndef __FUNCTION_H__
# define __FUNCTION_H__
//1.两个数相加(求和)
int Add_two_number(int x, int y);
//2.求两个数最大值
int Max(int x, int y);
//3.判断一个数是否为奇数
int Judgment_odd_number(int a);
//4.输出1~X之间的奇数
int Odd_number_x(int x);
//5.switch确定星期
int Week(void);
//6.switch确定是否为工作日
int Work(void);
//7.在屏幕上打印1~x的数字
int Number_x(int x);
//8.计算n的阶乘
int Factorial_n(int n);
//9.计算1！+2！+3！+……+10!(1~n的阶乘和)
int Factorial_1n(int x);
//10.从大到小输出三个数
int number_max_min(void);
//11.给定两个数，求其最大公约数(辗转相除法)
int Common_divisor(void);
//12.在一个有序数组中查找具体的某个数字n,编写int binsearch(int x,int v[],int n)
//功能：在v[0]<=v[1]<=v[2]<=……<=[n-1]的数组中查找x(二分查找法)
int Lookup_arrays_sequentially(int arr[], int n);
//13.交换两个整数
void Swap(int* a, int* b);
//14. 写一个函数可以判断一个数是不是素数。
int is_prime_number(int x);
//prime number
//15. 写一个函数判断一年是不是闰年。
int is_leap_year(int y);
//16. 写一个函数，实现一个整形有序数组的二分查找。
int binary_search(int arr[], int k, int sz);
//17. 写一个函数，每调用一次这个函数，就会将num 的值增加1。
void Add(int* p);
//18.接受一个整数值(无符号)，按照打印顺序打印他的每一位。例如：1234,输出1 2 3 4.
void print(int n);




# endif