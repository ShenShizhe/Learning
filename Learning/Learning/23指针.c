#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
//指针
int main_23 (void)
{
    
    int a = 10;    //创建一个变量存放10，并生成一个a的地址
    printf("a的地址：%p\n", &a);//打印a的地址
    int *p = &a;   //将a的地址交由p存储 (*:解引用操作符)
    printf("p的值：  %p\n", p);//打印p的值
    *p = 20;       //将20赋值给a的地址
    printf("a的值为：%d\n", a);
    char ch = 'a';
    char* pc = &ch;
    printf("%d\n", sizeof(pc));//sizeof查看当前系统指针的大小（针大小在32位平台是4个字节，64位平台是8个字节）
    return 0;

}