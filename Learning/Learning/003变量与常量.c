#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
//变量与常量（局部变量、全局变量）
int number = 20; //全局变量（定义在代码块（{}）之外的变量）
int main_03(void)
{
    /*年龄 20*/
    //short age = 20; //向内存申请2个字节=16bit位，用来存放20
    /*体重 95.6*/
    //float weight = 95.6f;//向内存申请4个字节，存放小数

    int number = 10;//局部变量 （定义在代码块（{}）内部）
    /*printf("%d\n", number);*/
    /*运行结果：
              10*/
              /*局部变量与全局变量的名字建议不要相同
                当局部变量与全局变量名字相同时，局部变量优先*/

                /*计算两个数的和*/
    int num1, num2, sum = 0;//C语言规定，变量应定义在当前代码块之前

    //输入数据使用输入函数scanf
    scanf("%d%d", &num1, &num2);//取地址符号：&
    sum = num1 + num2;
    printf("sum= %d\n", sum);
    return 0;

}
