#define _CRT_SECURE_NO_WARNINGS 1

/*
01.��������

������������ a �� b �������ǵĳ������� a/b ��Ҫ�󲻵�ʹ�ó˺� '*'������ '/' �Լ�������� '%' ��
*/
#include <limits.h>
#include <stdbool.h>
int divide(int dividend, int divisor) {
	if (divisor == 0 || (dividend == INT_MIN && divisor == -1)) {
		return INT_MAX;
	}

	bool negative = (dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0);
	long long dvd = labs(dividend), dvs = labs(divisor), res = 0;
	while (dvd >= dvs) {
		long long k = 1, tmp = dvs;
		while ((tmp << 1) <= dvd) {
			k <<= 1;
			tmp <<= 1;
		}
		dvd -= tmp;
		res += k;
	}

	return negative ? -res : res;
}

int main_999_01(void)
{
	int res = divide(15, 3);
	printf("The quotient is: %d\n", res); // ������Ϊ 5

	return 0;
}

/*
002. �����Ƽӷ�

�������� 01 �ַ��� a �� b ����������ǵĺͣ����Զ������ַ�������ʽ�����

����Ϊ �ǿ� �ַ�����ֻ�������� 1 �� 0��



ʾ�� 1:

����: a = "11", b = "10"
���: "101"
ʾ�� 2:

����: a = "1010", b = "1011"
���: "10101"


��ʾ��

ÿ���ַ��������ַ� '0' �� '1' ��ɡ�
1 <= a.length, b.length <= 10^4
�ַ���������� "0" ���Ͷ�����ǰ���㡣

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* addBinary(char* a, char* b) {
	// ���������ַ����ĳ���
	int len_a = strlen(a), len_b = strlen(b);

	// �������ַ�������󳤶ȣ�����ʼ��Ϊ 0
	int max_len = len_a > len_b ? len_a : len_b;
	int carry = 0;
	char* result = calloc(max_len + 2, sizeof(char));
	if (result == NULL) {
		return NULL;
	}

	// ����������λ��ӣ���¼��λ���
	for (int i = 0; i < max_len; i++) {
		int bit_a = i < len_a ? a[len_a - i - 1] - '0' : 0;
		int bit_b = i < len_b ? b[len_b - i - 1] - '0' : 0;
		int sum_ab = bit_a + bit_b + carry;
		carry = sum_ab / 2;
		result[i] = sum_ab % 2 + '0';
	}

	// ������λ�н�λ������Ҫ��������һλ
	if (carry) {
		result[max_len] = '1';
		max_len++;
	}

	// ��ת����ַ����������ĩβ�Ŀ��ַ�
	for (int i = 0; i < max_len / 2; i++) {
		char tmp = result[i];
		result[i] = result[max_len - i - 1];
		result[max_len - i - 1] = tmp;
	}
	result[max_len] = '\0';

	return result;
}

int main_999_02() {
	char a[] = "1010";
	char b[] = "1011";
	char* result = addBinary(a, b);
	printf("%s\n", result);
	free(result);
	return 0;
}



















/*
19. ������ʽƥ��

��ʵ��һ����������ƥ�����'. '��'*'��������ʽ��ģʽ�е��ַ�'.'��ʾ����һ���ַ�����'*'��ʾ��ǰ����ַ����Գ�������Σ���0�Σ���
�ڱ����У�ƥ����ָ�ַ����������ַ�ƥ������ģʽ�����磬�ַ���"aaa"��ģʽ"a.a"��"ab*ac*a"ƥ�䣬����"aa.a"��"ab*a"����ƥ�䡣

ʾ�� 1:

����:
s = "aa"
p = "a"
���: false
����: "a" �޷�ƥ�� "aa" �����ַ�����
ʾ�� 2:

����:
s = "aa"
p = "a*"
���: true
����: ��Ϊ '*' �������ƥ���������ǰ�����һ��Ԫ��, ������ǰ���Ԫ�ؾ��� 'a'����ˣ��ַ��� "aa" �ɱ���Ϊ 'a' �ظ���һ�Ρ�
ʾ�� 3:

����:
s = "ab"
p = ".*"
���: true
����: ".*" ��ʾ��ƥ�����������'*'�������ַ���'.'����
ʾ�� 4:

����:
s = "aab"
p = "c*a*b"
���: true
����: ��Ϊ '*' ��ʾ������������� 'c' Ϊ 0 ��, 'a' ���ظ�һ�Ρ���˿���ƥ���ַ��� "aab"��
ʾ�� 5:

����:
s = "mississippi"
p = "mis*is*p*."
���: false



s ����Ϊ�գ���ֻ������ a-z ��Сд��ĸ��
p ����Ϊ�գ���ֻ������ a-z ��Сд��ĸ�Լ��ַ� . �� *���������� '*'��
*/
#include <string.h>
#include <stdbool.h>

bool match(char* str, char* pattern) {
	if (*str == '\0' && *pattern == '\0') { // �ַ�����ģʽ��Ϊ�գ�ƥ��ɹ�
		return true;
	}
	if (*str != '\0' && *pattern == '\0') { // ģʽΪ�գ��ַ����ǿգ�ƥ��ʧ��
		return false;
	}
	if (*(pattern + 1) == '*') { // ��ǰģʽ�ַ�����һ���ַ���*
		if (*pattern == '.' || *pattern == *str) { // ��ǰģʽ�ַ��ܹ�ƥ�䵱ǰ�ַ����ַ�����ô�����������1��*��ʾ0���ַ���2��*��ʾ����ַ���
			return match(str, pattern + 2) || match(str + 1, pattern);
		}
		else { // ��ǰģʽ�ַ�����ƥ�䵱ǰ�ַ����ַ���*ֻ�ܱ�ʾ0���ַ���
			return match(str, pattern + 2);
		}
	}
	else { // ��ǰģʽ�ַ�����һ���ַ�����*
		if (*pattern == '.' || *pattern == *str) { // ��ǰģʽ�ַ��ܹ�ƥ�䵱ǰ�ַ����ַ���������Ƚ���һ���ַ���
			return match(str + 1, pattern + 1);
		}
		else { // ��ǰģʽ�ַ�����ƥ�䵱ǰ�ַ����ַ���ƥ��ʧ�ܡ�
			return false;
		}
	}
}


int main_999_19(void)
{
	if (match("aa", "a")) {
		printf("Match!\n");
	}
	else {
		printf("Mismatch.\n");
	}

	return 0;
}