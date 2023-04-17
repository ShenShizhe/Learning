#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
//变量的作用域与生命周期
int global = 2022;
void test0()
{
    printf("test()--%d\n", global);
}
int main_04(void)
{
    {
        int num2 = 2;
    }
    int num1 = 1;
    //printf("num1= %d\n", num1);
    //printf("num2= %d\n", num2);//error，num2不在当前的作用域内
    //test0();//调用test
    //printf("%d\n", global);
    /*运行结果：
            num1= 1
            test()--2022
            2022*/
            /*总结：
                    1.局部变量的作用域是变量所在的局部范围
                    2.全局变量的作用域是整个工程*/
                    /*在同一工程目录下创建一个全局变量：（int g_val=2022;）

                    */
                    //printf("g_val = %d\n", g_val); //error（未声明的标识符）
                    //声明extern外部符号
                    //extern int g_val;
                    //printf("g_val = %d\n", g_val);
                    /*运行结果：
                            test()--2022
                            g_val = 2022*/



    int  a = 10;
    printf("a = %d\n", a);//ok

    //printf("a = %d\n", a);//error
    /*总结：
    * 1.局部变量的生命周期是：进入作用域的生命周期开始，出作用域生命周期结束
    * 2.全局变量的生命周期是：整个程序的生命周期
    */
    return 0;

}
