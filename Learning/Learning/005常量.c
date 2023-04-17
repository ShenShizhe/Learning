#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# define MAX 10
/*常量:
        1.字面的常量
        2.const修饰的常变量
        3.#define 定义的标识符常量
        4.枚举常量
*/
int g_val = 2022;
int main_05(void)
{
    /*int num1,num2,sum = 0;
    scanf("%d%d", &num1,&num2);*/
    /*scanf是C语言内部的函数（不安全），VS提供的函数为scanf_s（代码不具有可移植性）
    因此在头文件中加入（#define _CRT_SECURE_NO_WARNINGS 1）来解决该问题
    添加地址：C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\IDE\VC\VCProjectItems
    （单击VS软件图标，选择属性，打开文件所在位置的上层目录：（IDE\VC\VCProjectItems）
    文件名：newc++file.cpp
    */
    //sum = num1 + num2;
    //printf("%d\n", sum);
    /*运行结果：
            1
            2
            3*/

            /************************************************************************************/
            //1.字面的常量
            /*int num = 4;
            printf("%d\n", num);
            num = 8;
            printf("%d\n", num);*/
            /*运行结果：
                        4
                        8*/
                        //2.const修饰的常变量
                        /*const int num = 4;
                        printf("%d\n", num);*/
                        //num = 8;//error,const--常属性， 修饰的常变量num不可变
                        //printf("%d\n", num);
                        /************/
                        //int arr[10] = {0};//ok
                        /************/
                        //int n = 10;
                        //int arr[n] = { 0 };//error（表达式必须含有常量值），即说明该处的n不是常量而是一个变量
                        /************/
                        //const int n;
                        //int arr[n] = { 0 };//error(此时n是变量，但是具有常属性)，所有我们称此时的n为常变量

                        //3.#define 定义的标识符常量
                        //int arr[MAX] = {0};//ok
                        //printf("%d\n", MAX);
                        /*运行结果：
                                    10*/


                                    //4.枚举常量
                                    /*枚举：一一列举
                                    * 性别：男、女
                                    * 三原色：红、黄、蓝
                                    * 星期：一、二、、、七

                                    枚举的关键： enum
                                    枚举常量：MALE,FEMALE,SECRET,
                                    */
                                    //创建一个区别性别的枚举
    enum Sex
    {
        MALE,
        FEMALE,
        SECRET,
    };

    //enum Sex s = MALE;
    //printf("%d\n", MALE); //运行结果：0
    //printf("%d\n", FEMALE);//运行结果：1
    //printf("%d\n", SECRET);//运行结果：2
    /************/
    //创建一个区别颜色的枚举
    enum Color
    {
        RED,
        YELLOW,
        BLUE,
    };
    //运用枚举
    enum Color color = BLUE;
    //RED = 6;//error,枚举常量不可更改，通过枚举创建出的变量可变
    return 0;

}
