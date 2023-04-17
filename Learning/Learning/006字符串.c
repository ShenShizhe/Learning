#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
/*字符串：
        "abcd"
        ""//空字符串
*/
int main_06(void)
{
    char arr1[] = "abc";//运用数组对字符串进行存储
    //"abc"=='a','b','c','\0'（'\0'：字符结束的标志,'\0'的值是0）
    char arr2[] = { 'a','b','c' };
    // {'a','b','c'}末尾没有结束的标志,因此会随机产生其他结果，并打印一些随机值
    //printf("%s\n", arr1);
    //运行结果：abc
    //printf("%s\n", arr2);
    //运行结果：abc烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫虜惈桗
    /*将arr2修改为char arr2[] = { 'a','b','c',0 };时：运行结果为：abc
    */

    //在计算机上进行二进制存储（ASSII码）
    //strlen--string lenth (计算字符串的长度)
    printf("%d\n", strlen(arr1));//运行结果：3
    printf("%d\n", strlen(arr2));//运行结果：42(随机值)
    return 0;

}
