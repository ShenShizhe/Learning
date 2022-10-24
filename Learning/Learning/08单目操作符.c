#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
int main_08(void)
{
    //单目操作符 双目操作符 三目操作符
    int a = 10, b = 20, c = 0, d = -1, e = +2;//-:表示负值，+：表示正值(通常省略不写)
    a = a + b;//此处的+为单目操作符，即需要两个操作数(a与b)
    /*  在C语言中：0表示假，非0表示真

    */
    printf("%d\n", a);
    printf("%d\n", !c);//对c进行逻辑取反,非0则为真取反后值为0,0为假取反后值为1
    printf("%d\n", sizeof(a));//sizeof计算的是变量整形所占空间的大小(单位：字节)
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof a);
    //printf("%d\n", sizeof int);//error,求变量名的大小时可以省略括号，求类型时不可省略
    //sizeof求数组的大小
    int arr[10] = { 0 };//十个整形元素的数组
    printf("%d\n", sizeof(arr));//10 * sizeof{int} = 40
    //计算数组的元素个数(数组总大小/单个数组大小)
    int ar = sizeof(arr) / sizeof(arr[0]);
    printf("数组的元素个数:%d\n", ar);

    /*运行结果：
            30
            1
            4
            4
            4
            40
            数组的元素个数:10*/
    return 0;

}