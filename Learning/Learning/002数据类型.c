#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
/*数据类型
    char 字符数据类型
    short int 短整形
    int 整形
    long 长整形
    long long 更长的整形 C99标准
    float 单精度浮点数
    double 双精度浮点数*/
int main_02 (void)
{   
    /*printf的用法：
                %d--以十进制打印整形
                %c--打印字符
                %f--打印浮点数字(小数)
                %lf--打印双精度浮点数字(小数)<double>
                %p--以地址的形式打印
                %x--以十六进制打印整形*/
    //char ch = 'A';
    //printf("%c\n", ch); /*%c--打印一个字符格式的数据*/
    //int age = 20;
    //printf("%d\n", age);/*%d--打印整形十进制数据*/
    //long num = 100;
    //printf("%d\n", num);
    //float f = 5.0;
    //printf("%f\n", f);
    //double d = 3.14;
    //printf("%lf\n", d);

    /*运行结果：
            A
            20
            100
            5.000000
            3.140000*/

    /*每一种数据类型的大小：*/
    /*printf("char        %d\n", sizeof(char));
    printf("short       %d\n", sizeof(short));
    printf("int         %d\n", sizeof(int));
    printf("long        %d\n", sizeof(long));
    printf("long long   %d\n", sizeof(long long));
    printf("float       %d\n", sizeof(float));
    printf("double      %d\n", sizeof(double));*/
    
    /*运行结果：
                char        1
                short       2
                int         4
                long        4
                long long   8
                float       4
                double      8*/
    //C语言规定sizeof(long)>=sizeof(int)
    /*计算机内空间大小：
                    bit(比特位)
                    1B(Byte 字节)=8bit
                    1KB (Kilobyte 千字节)=1024B
                    1MB (Megabyte 兆字节 简称“兆”)=1024KB
                    1GB (Gigabyte 吉字节 又称“千兆”)=1024MB
                    1TB (Trillionbyte 万亿字节 太字节)=1024GB，其中1024=2^10 ( 2 的10次方)
                    1PB（Petabyte 千万亿字节 拍字节）=1024TB
                    1EB（Exabyte 百亿亿字节 艾字节）=1024PB
                    1ZB (Zettabyte 十万亿亿字节 泽字节)= 1024 EB
                    1YB (Yottabyte 一亿亿亿字节 尧字节)= 1024 ZB
                    1BB (Brontobyte 一千亿亿亿字节)= 1024 YB */
 
    return 0;

}
