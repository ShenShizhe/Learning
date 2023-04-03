#define _CRT_SECURE_NO_WARNINGS 1


/*
1. 为什么使用文件
	我们前面学习结构体时，写了通讯录的程序，当通讯录运行起来的时候，可以给通讯录中增加、删除数据，此时数据是存放在内存中，当程序退出的时候，通讯录中的数据自然就不存在了，
	等下次运行通讯录程序的时候，数据又得重新录入，如果使用这样的通讯录就很难受。

	我们在想既然是通讯录就应该把信息记录下来，只有我们自己选择删除数据的时候，数据才不复存在。这就涉及到了数据持久化的问题，我们一般数据持久化的方法有，
	把数据存放在磁盘文件、存放到数据库等方式。使用文件我们可以将数据直接存放在电脑的硬盘上，做到了数据的持久化。
*/



/*
2. 什么是文件

	磁盘上的文件是文件。但是在程序设计中，我们一般谈的文件有两种：程序文件、数据文件（从文件功能的角度来分类的）。
	2.1 程序文件
		包括源程序文件（后缀为.c）,目标文件（windows环境后缀为.obj）,可执行程序（windows环境后缀为.exe）。
	2.2 数据文件
		文件的内容不一定是程序，而是程序运行时读写的数据，比如程序运行需要从中读取数据的文件，或者输出内容的文件。

	在以前各章所处理数据的输入输出都是以终端为对象的，即从终端的键盘输入数据，运行结果显示到显示器上。
	其实有时候我们会把信息输出到磁盘上，当需要的时候再从磁盘上把数据读取到内存中使用，这里处理的就是磁盘上文件。


	2.3 文件名
		一个文件要有一个唯一的文件标识，以便用户识别和引用。文件名包含3部分：文件路径+文件名主干+文件后缀例如： c:\code\test.txt为了方便起见，文件标识常被称为文件名。
*/
//3. 文本文件和二进制文件
#include <stdio.h>
int main_102_1()
{
	int a = 10000;
	FILE* pf = fopen("test.txt", "wb");
	fwrite(&a, 4, 1, pf);//二进制形式写入文件
	fclose(pf);
	pf = NULL;

	return 0;
}
/*4. 文件的打开和关闭
4.1 文件指针
缓冲文件系统中，关键的概念是“文件类型指针”，简称“文件指针”。每个被使用的文件都在内存中开辟了一个相应的文件信息区，用来存放文件的相关信息（如文件的名字，文件状态及文件当前的位置等）。
这些信息是保存在一个结构体变量中的。该结构体类型是有系统声明的，取名FILE.
例如，VS编译环境提供的stdio.h 头文件中有以下的文件类型申明
*/
//struct _iobuf {
//	char* _ptr;
//	int _cnt;
//	char* _base;
//	int _flag;
//	int _file;
//	int _charbuf;
//	int _bufsiz;
//	char* _tmpfname;
//};
//typedef struct _iobuf FILE;

/*不同的C编译器的FILE类型包含的内容不完全相同，但是大同小异。每当打开一个文件的时候，系统会根据文件的情况自动创建一个FILE结构的变量，并填充其中的信息，使用者不必关心细节。
一般都是通过一个FILE的指针来维护这个FILE结构的变量，这样使用起来更加方便。下面我们可以创建一个FILE* 的指针变量:

FILE * pf;//文件指针变量

定义pf是一个指向FILE类型数据的指针变量。可以使pf指向某个文件的文件信息区（是一个结构体变量）。通过该文件信息区中的信息就能够访问该文件。
也就是说，通过文件指针变量能够找到与它关联的文件。

4.2 文件的打开和关闭
文件在读写之前应该先打开文件，在使用结束之后应该关闭文件。在编写程序的时候，在打开文件的同时，都会返回一个FILE * 的指针变量指向该文件，也相当于建立了指针和文件的关系。

ANSIC 规定使用fopen函数来打开文件，fclose来关闭文件

//打开文件
FILE * fopen(const char* filename, const char* mode);
//关闭文件
int fclose(FILE* stream);
*/
/*
文件使用方式				含义如果									指定文件不存在
------------------------------------------------------------------------------ -
“r”（只读）		为了输入数据，打开一个已经存在的文本文件				出错
“w”（只写）		为了输出数据，打开一个文本文件						建立一个新的文件
“a”（追加）		向文本文件尾添加数据								建立一个新的文件
“rb”（只读）		为了输入数据，打开一个二进制文件						出错
“wb”（只写）		为了输出数据，打开一个二进制文件					建立一个新的文件
“ab”（追加）		向一个二进制文件尾添加数据								出错
“r + ”（读写）		为了读和写，打开一个文本文件							出错
“w + ”（读写）		为了读和写，建议一个新的文件						建立一个新的文件
“a + ”（读写）		打开一个文件，在文件尾进行读写						建立一个新的文件
“rb + ”（读写）	为了读和写打开一个二进制文件							出错
“wb + ”（读写）	为了读和写，新建一个新的二进制文件					建立一个新的文件
“ab + ”（读写）	打开一个二进制文件，在文件尾进行读和写				建立一个新的文件
*/

//fopen fclose example
#include <stdio.h>
#include <string.h>
#include <errno.h>
int main_102_2()
{
	//打开文件

	//FILE* pf = fopen("test.txt", "r");//相对路径[../上一级路径，./当前路径]
	FILE* pf = fopen("D:\\Compiler\\VisualStudioSetup\\project\\Learning\\Learning\\Learning\\test.txt", "r");//绝对路径

	//文件操作
	if (pf == NULL)//打开失败
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	else
	{
		//打开成功
		fputs("fopen example", pf);

		fclose(pf);//关闭文件
		pf = NULL;
	}

}


/*5. 文件的顺序读写

功能				函数名			适用于
字符输入函数		fgetc			所有输入流
字符输出函数		fputc			所有输出流
文本行输入函数	fgets			所有输入流
文本行输出函数	fputs			所有输出流
格式化输入函数	fscanf			所有输入流
格式化输出函数	fprintf			所有输出流
二进制输入		fread			文件
二进制输出		fwrite			文件


从键盘输入，输出到屏幕。键盘&屏幕都是外部设备

键盘--标准输入设备--stdin，屏幕--标准输出设备--stdout。是一个程序默认打开的两个流设备

默认打开的三个流：stdin,stdout,stderr.类型：FILE*

*/

#include <stdio.h>
#include <string.h>
#include <errno.h>
int main_102_3()
{
	FILE* pfWrite = fopen("test.txt", "w");
	if (pfWrite == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	else
	{
		//写入文件
		fputc('h', pfWrite);
		fputc('e', pfWrite);
		fputc('l', pfWrite);
		fputc('l', pfWrite);
		fputc('o', pfWrite);

		//关闭文件
		fclose(pfWrite);
		pfWrite = NULL;
	}

	return 0;
}


#include <stdio.h>
#include <string.h>
#include <errno.h>
int main_102_4()
{
	FILE* pfRead = fopen("test.txt", "r");
	if (pfRead == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	else
	{
		//读取文件
		for (int i = 0; i < 5; i++)
			printf("%c", fgetc(pfRead));

		//关闭文件
		fclose(pfRead);
		pfRead = NULL;
	}

	return 0;
}


#include <stdio.h>
#include <string.h>
#include <errno.h>
int main_102_5()
{
	char buf[1024] = { 0 };
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
		return 0;
	else
	{
		for (int i = 0; i < 2; i++)
		{
			fgets(buf, 1024, pf);
			//printf("%s", buf);//换一行输出
			puts(buf);//换一行再输出
		}
		fclose(pf);
		pf = NULL;
	}
	return 0;
}

#include <stdio.h>
#include <string.h>
#include <errno.h>
int main_102_6()
{
	char buf[1024] = { 0 };
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
		return 0;
	else
	{
		fputs("hello\n", pf);
		fputs("world\n", pf);

		fclose(pf);
		pf = NULL;
	}
	return 0;
}

#include <stdio.h>
#include <string.h>
#include <errno.h>
int main_102_7()
{
	//从键盘读取一行文本信息
	char buf[1024] = { 0 };
	fgets(buf, 1024, stdin);//从标准输入流读取,等价于[gets(buf);]
	fputs(buf, stdout);//输出到标准输出流,等价于[puts(buf);]

	return 0;
}

struct S
{

	int n;
	float score;
	char arr[10];

};

int main_102_8()
{
	struct	S s = { 100,3.14,"hello" };
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
		return 0;
	else
	{
		fprintf(pf, "%d %f %s", s.n, s.score, s.arr);

		fclose(pf);
		pf = NULL;
	}
	return 0;
}

int main_102_9()
{
	struct	S s = { 0 };
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
		return 0;
	else
	{
		fscanf(pf, "%d %f %s", &(s.n), &(s.score), &(s.arr));
		printf("%d %f %s", s.n, s.score, s.arr);

		fclose(pf);
		pf = NULL;
	}
	return 0;
}

int main_102_10()
{
	struct	S s = { 0 };

	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), &(s.arr));
	fprintf(stdout, "%d %f %s", s.n, s.score, s.arr);

	return 0;
}


/*
scanf/printf 是针对标准输入/输出流的 格式化输入/输出语句
fscanf/fprintf 是针对所有流的输入流/输出流的 格式化输入/输出语句

sscanf/sprintf sscanf是从字符串中读取格式化的数据 sprintf是把格式化的数据输出成(存储到)字符串

*/



int main_102_11()
{
	struct S s = { 100,3.14,"hello" };
	struct S tmp = { 0 };

	char buf[1024] = { 0 };
	//把格式化的数据转换成字符串存储到buf
	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);//将结构体数据转换为字符串
	//printf("%s\n", buf);
	//从buf中读取格式化的数据到tmp
	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), &(tmp.arr));
	printf("%d %f %s \n", tmp.n, tmp.score, tmp.arr);

	return 0;
}


//6. 文件的随机读写
/*
6.1 fseek
根据文件指针的位置和偏移量来定位文件指针
int fseek ( FILE * stream, long int offset, int origin );
*/
//fseek example 
int main_102_12()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
		return 0;
	//1.定位文件指针
	fseek(pf, 4, SEEK_CUR);//SEEK_CUR--文件指针当前的位置,SEEK_END--文件的末尾的位置(向前偏移，偏移量为负)，SEEK_SET--文件起始位置(向后偏移，偏移量为正)
	//2.读取文件
	int ch = fgetc(pf);
	printf("%c\n", ch);

	fclose(pf);
	pf = NULL;
	return 0;
}
/*
6.2 ftell
返回文件指针相对于起始位置的偏移量
long int ftell ( FILE * stream );


*/

int main_102_13()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
		return 0;
	//fseek(pf, 4, SEEK_CUR);
	fgetc(pf);
	int pos = ftell(pf);
	printf("%d\n", pos);

	fclose(pf);
	pf = NULL;
	return 0;
}

/*
6.3 rewind

让文件指针的位置回到文件的起始位置
例子：
long int ftell ( FILE * stream );

*/
int main_102_14()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
		return 0;

	int ch = fgetc(pf);
	printf("%c\n", ch);
	rewind(pf);
	ch = fgetc(pf);
	printf("%c\n", ch);

	fclose(pf);
	pf = NULL;
	return 0;
}

//7. 文件读取结束的判定
/*
牢记：在文件读取过程中，不能用feof函数的返回值直接用来判断文件的是否结束。而是应用于当文件读取结束的时候，判断是读取失败结束，还是遇到文件尾结束。
1. 文本文件读取是否结束，判断返回值是否为EOF （ fgetc ），或者NULL （ fgets ）
例如：fgetc 判断是否为EOF ，fgets 判断返回值是否为NULL .
2. 二进制文件的读取结束判断，判断返回值是否小于实际要读的个数。
例如：fread判断返回值是否小于实际要读的个数。

//feof();//EOF--end of file--文件结束标志
*/


int main_102_15()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
		return 0;
	int ch = fgetc(pf);
	printf("%d\n", ch);//文件为空：-1

	fclose(pf);
	pf = NULL;
	return 0;
}


int main_102_16()
{

	//printf("%s\n", strerror(errno));//strerror--把错误码对应的错误信息字符串地址返回

	//perror
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("error");
		return 0;
	}
	//读文件
	int ch = 0;
	while (ch = fgetc(pf) != EOF)
	{
		putchar(ch);
	}
	if (ferror(pf))
		printf("error\n");
	else if (feof(pf))
		printf("end of file\n");
	//关文件
	fclose(pf);
	pf = NULL;
	return 0;
}






//8. 文件缓冲区

/*

ANSIC 标准采用“缓冲文件系统”处理的数据文件的，所谓缓冲文件系统是指系统自动地在内存中为程序
中每一个正在使用的文件开辟一块“文件缓冲区”。从内存向磁盘输出数据会先送到内存中的缓冲区，装
满缓冲区后才一起送到磁盘上。如果从磁盘向计算机读入数据，则从磁盘文件中读取数据输入到内存缓
冲区（充满缓冲区），然后再从缓冲区逐个地将数据送到程序数据区（程序变量等）。缓冲区的大小根
据C编译系统决定的。

*/
#include <stdio.h>
#include <windows.h>
//VS2013 WIN10环境测试
int main_102_17()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//先将代码放在输出缓冲区
	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
	Sleep(10000);
	printf("刷新缓冲区\n");
	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
	//注：fflush 在高版本的VS上不能使用了
	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
	Sleep(10000);
	fclose(pf);
	//注：fclose在关闭文件的时候，也会刷新缓冲区
	pf = NULL;
	return 0;
}
/*
这里可以得出一个结论：因为有缓冲区的存在，C语言在操作文件的时候，需要做刷新缓冲区或者在文件操作结束的时候关闭文件。如果不做，可能导致读写文件的问题。
*/