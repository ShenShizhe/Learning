#define _CRT_SECURE_NO_WARNINGS 1

/*
01.整数除法

给定两个整数 a 和 b ，求它们的除法的商 a/b ，要求不得使用乘号 '*'、除号 '/' 以及求余符号 '%' 。
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
	printf("The quotient is: %d\n", res); // 输出结果为 5

	return 0;
}

/*
002. 二进制加法

给定两个 01 字符串 a 和 b ，请计算它们的和，并以二进制字符串的形式输出。

输入为 非空 字符串且只包含数字 1 和 0。



示例 1:

输入: a = "11", b = "10"
输出: "101"
示例 2:

输入: a = "1010", b = "1011"
输出: "10101"


提示：

每个字符串仅由字符 '0' 或 '1' 组成。
1 <= a.length, b.length <= 10^4
字符串如果不是 "0" ，就都不含前导零。

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* addBinary(char* a, char* b) {
	// 计算两个字符串的长度
	int len_a = strlen(a), len_b = strlen(b);

	// 计算结果字符串的最大长度，并初始化为 0
	int max_len = len_a > len_b ? len_a : len_b;
	int carry = 0;
	char* result = calloc(max_len + 2, sizeof(char));
	if (result == NULL) {
		return NULL;
	}

	// 从右往左逐位相加，记录进位情况
	for (int i = 0; i < max_len; i++) {
		int bit_a = i < len_a ? a[len_a - i - 1] - '0' : 0;
		int bit_b = i < len_b ? b[len_b - i - 1] - '0' : 0;
		int sum_ab = bit_a + bit_b + carry;
		carry = sum_ab / 2;
		result[i] = sum_ab % 2 + '0';
	}

	// 如果最高位有进位，则需要额外增加一位
	if (carry) {
		result[max_len] = '1';
		max_len++;
	}

	// 反转结果字符串，并添加末尾的空字符
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
19. 正则表达式匹配

请实现一个函数用来匹配包含'. '和'*'的正则表达式。模式中的字符'.'表示任意一个字符，而'*'表示它前面的字符可以出现任意次（含0次）。
在本题中，匹配是指字符串的所有字符匹配整个模式。例如，字符串"aaa"与模式"a.a"和"ab*ac*a"匹配，但与"aa.a"和"ab*a"均不匹配。

示例 1:

输入:
s = "aa"
p = "a"
输出: false
解释: "a" 无法匹配 "aa" 整个字符串。
示例 2:

输入:
s = "aa"
p = "a*"
输出: true
解释: 因为 '*' 代表可以匹配零个或多个前面的那一个元素, 在这里前面的元素就是 'a'。因此，字符串 "aa" 可被视为 'a' 重复了一次。
示例 3:

输入:
s = "ab"
p = ".*"
输出: true
解释: ".*" 表示可匹配零个或多个（'*'）任意字符（'.'）。
示例 4:

输入:
s = "aab"
p = "c*a*b"
输出: true
解释: 因为 '*' 表示零个或多个，这里 'c' 为 0 个, 'a' 被重复一次。因此可以匹配字符串 "aab"。
示例 5:

输入:
s = "mississippi"
p = "mis*is*p*."
输出: false



s 可能为空，且只包含从 a-z 的小写字母。
p 可能为空，且只包含从 a-z 的小写字母以及字符 . 和 *，无连续的 '*'。
*/
#include <string.h>
#include <stdbool.h>

bool match(char* str, char* pattern) {
	if (*str == '\0' && *pattern == '\0') { // 字符串和模式都为空，匹配成功
		return true;
	}
	if (*str != '\0' && *pattern == '\0') { // 模式为空，字符串非空，匹配失败
		return false;
	}
	if (*(pattern + 1) == '*') { // 当前模式字符的下一个字符是*
		if (*pattern == '.' || *pattern == *str) { // 当前模式字符能够匹配当前字符串字符，那么有两种情况：1、*表示0个字符；2、*表示多个字符。
			return match(str, pattern + 2) || match(str + 1, pattern);
		}
		else { // 当前模式字符不能匹配当前字符串字符，*只能表示0个字符。
			return match(str, pattern + 2);
		}
	}
	else { // 当前模式字符的下一个字符不是*
		if (*pattern == '.' || *pattern == *str) { // 当前模式字符能够匹配当前字符串字符，则继续比较下一个字符。
			return match(str + 1, pattern + 1);
		}
		else { // 当前模式字符不能匹配当前字符串字符，匹配失败。
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