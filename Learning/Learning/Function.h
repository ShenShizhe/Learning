# ifndef __FUNCTION_H__
# define __FUNCTION_H__
//1.���������(���)
int Add_two_number(int x, int y);
//2.�����������ֵ
int Max(int x, int y);
//3.�ж�һ�����Ƿ�Ϊ����
int Judgment_odd_number(int a);
//4.���1~X֮�������
int Odd_number_x(int x);
//5.switchȷ������
int Week(void);
//6.switchȷ���Ƿ�Ϊ������
int Work(void);
//7.����Ļ�ϴ�ӡ1~x������
int Number_x(int x);
//8.����n�Ľ׳�
int Factorial_n(int n);
//9.����1��+2��+3��+����+10!(1~n�Ľ׳˺�)
int Factorial_1n(int x);
//10.�Ӵ�С���������
int number_max_min(void);
//11.�������������������Լ��(շת�����)
int Common_divisor(void);
//12.��һ�����������в��Ҿ����ĳ������n,��дint binsearch(int x,int v[],int n)
//���ܣ���v[0]<=v[1]<=v[2]<=����<=[n-1]�������в���x(���ֲ��ҷ�)
int Lookup_arrays_sequentially(int arr[], int n);
//13.������������
void Swap(int* a, int* b);
//14. дһ�����������ж�һ�����ǲ���������
int is_prime_number(int x);
//prime number
//15. дһ�������ж�һ���ǲ������ꡣ
int is_leap_year(int y);
//16. дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
int binary_search(int arr[], int k, int sz);
//17. дһ��������ÿ����һ������������ͻὫnum ��ֵ����1��
void Add(int* p);
//18.����һ������ֵ(�޷���)�����մ�ӡ˳���ӡ����ÿһλ�����磺1234,���1 2 3 4.
void Sequential_printing(int n);
//19.��д��������������ʱ���������ַ����ĳ��ȡ�
int my_strlen(char* str);
//20.���n��쳲�������
int Fibonacci_sequence(int n);
//21.��ŵ������
void Tower_of_Hanoi_move(int x, int y);
void Tower_of_Hanoi(int n, char a, char b, char c);
//22.������̨������
int Frog_jumping(long int n);
//23.ð������
void Bubbling_sort(int arr[], int sz);
//24.strlen���ַ����ĳ���
int my_strlen_pointer(char* str);
# endif