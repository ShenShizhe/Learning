#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <string.h>
/*
结构体-描述复杂对象
结构体是指我们自己创造出来的一种类型
当我们描述人时需要：名字、身高、年龄、省份证号……
当我们描述书时需要：书名、作者、出版社、定价、书号……

结构体关键字：struct
*/

//创建一个结构体类型
struct Book
{
    char name[20];//C语言程序设计
    short price;//55
};//此处分号不可缺少，作用：结束类型定义
int main_24 (void)
{
    //利用结构体类型，创建一个该类型的结构体变b1.name,b1.price量
    struct Book b1 ={"C语言程序设计",55};
    struct Book* pb = &b1;//b1的执政变量
    //修改(结构体变量.成员)采用：[b1.name="C++";]//error,因为此处的name为数组本质为地址,而非变量]】
    strcpy(b1.name, "C++");//strcpy--string copy --字符串拷贝--库函数--string.h
    printf("书名：%s\t价格：%d\n",b1.name,b1.price);
    printf("书名：%s\t价格：%d\n", (*pb).name, (*pb).price);//采用b1的指针输出b1的属性[.:结构体变量.成员]
    //b1.name,b1.price均可以赋值修改
    printf("书名：%s\t价格：%d\n", pb->name, pb->price);//pb指向对象的名称[结构体指针->成员]

    return 0;

}