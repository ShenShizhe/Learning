#define _CRT_SECURE_NO_WARNINGS 1


/*
1. Ϊʲôʹ���ļ�
	����ǰ��ѧϰ�ṹ��ʱ��д��ͨѶ¼�ĳ��򣬵�ͨѶ¼����������ʱ�򣬿��Ը�ͨѶ¼�����ӡ�ɾ�����ݣ���ʱ�����Ǵ�����ڴ��У��������˳���ʱ��ͨѶ¼�е�������Ȼ�Ͳ������ˣ�
	���´�����ͨѶ¼�����ʱ�������ֵ�����¼�룬���ʹ��������ͨѶ¼�ͺ����ܡ�

	���������Ȼ��ͨѶ¼��Ӧ�ð���Ϣ��¼������ֻ�������Լ�ѡ��ɾ�����ݵ�ʱ�����ݲŲ������ڡ�����漰�������ݳ־û������⣬����һ�����ݳ־û��ķ����У�
	�����ݴ���ڴ����ļ�����ŵ����ݿ�ȷ�ʽ��ʹ���ļ����ǿ��Խ�����ֱ�Ӵ���ڵ��Ե�Ӳ���ϣ����������ݵĳ־û���
*/



/*
2. ʲô���ļ�

	�����ϵ��ļ����ļ��������ڳ�������У�����һ��̸���ļ������֣������ļ��������ļ������ļ����ܵĽǶ�������ģ���
	2.1 �����ļ�
		����Դ�����ļ�����׺Ϊ.c��,Ŀ���ļ���windows������׺Ϊ.obj��,��ִ�г���windows������׺Ϊ.exe����
	2.2 �����ļ�
		�ļ������ݲ�һ���ǳ��򣬶��ǳ�������ʱ��д�����ݣ��������������Ҫ���ж�ȡ���ݵ��ļ�������������ݵ��ļ���

	����ǰ�������������ݵ���������������ն�Ϊ����ģ������ն˵ļ����������ݣ����н����ʾ����ʾ���ϡ�
	��ʵ��ʱ�����ǻ����Ϣ����������ϣ�����Ҫ��ʱ���ٴӴ����ϰ����ݶ�ȡ���ڴ���ʹ�ã����ﴦ��ľ��Ǵ������ļ���


	2.3 �ļ���
		һ���ļ�Ҫ��һ��Ψһ���ļ���ʶ���Ա��û�ʶ������á��ļ�������3���֣��ļ�·��+�ļ�������+�ļ���׺���磺 c:\code\test.txtΪ�˷���������ļ���ʶ������Ϊ�ļ�����
*/
//3. �ı��ļ��Ͷ������ļ�
#include <stdio.h>
int main_102_1()
{
	int a = 10000;
	FILE* pf = fopen("test.txt", "wb");
	fwrite(&a, 4, 1, pf);//��������ʽд���ļ�
	fclose(pf);
	pf = NULL;

	return 0;
}
/*4. �ļ��Ĵ򿪺͹ر�
4.1 �ļ�ָ��
�����ļ�ϵͳ�У��ؼ��ĸ����ǡ��ļ�����ָ�롱����ơ��ļ�ָ�롱��ÿ����ʹ�õ��ļ������ڴ��п�����һ����Ӧ���ļ���Ϣ������������ļ��������Ϣ�����ļ������֣��ļ�״̬���ļ���ǰ��λ�õȣ���
��Щ��Ϣ�Ǳ�����һ���ṹ������еġ��ýṹ����������ϵͳ�����ģ�ȡ��FILE.
���磬VS���뻷���ṩ��stdio.h ͷ�ļ��������µ��ļ���������
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

/*��ͬ��C��������FILE���Ͱ��������ݲ���ȫ��ͬ�����Ǵ�ͬС�졣ÿ����һ���ļ���ʱ��ϵͳ������ļ�������Զ�����һ��FILE�ṹ�ı�������������е���Ϣ��ʹ���߲��ع���ϸ�ڡ�
һ�㶼��ͨ��һ��FILE��ָ����ά�����FILE�ṹ�ı���������ʹ���������ӷ��㡣�������ǿ��Դ���һ��FILE* ��ָ�����:

FILE * pf;//�ļ�ָ�����

����pf��һ��ָ��FILE�������ݵ�ָ�����������ʹpfָ��ĳ���ļ����ļ���Ϣ������һ���ṹ���������ͨ�����ļ���Ϣ���е���Ϣ���ܹ����ʸ��ļ���
Ҳ����˵��ͨ���ļ�ָ������ܹ��ҵ������������ļ���

4.2 �ļ��Ĵ򿪺͹ر�
�ļ��ڶ�д֮ǰӦ���ȴ��ļ�����ʹ�ý���֮��Ӧ�ùر��ļ����ڱ�д�����ʱ���ڴ��ļ���ͬʱ�����᷵��һ��FILE * ��ָ�����ָ����ļ���Ҳ�൱�ڽ�����ָ����ļ��Ĺ�ϵ��

ANSIC �涨ʹ��fopen���������ļ���fclose���ر��ļ�

//���ļ�
FILE * fopen(const char* filename, const char* mode);
//�ر��ļ�
int fclose(FILE* stream);
*/
/*
�ļ�ʹ�÷�ʽ				�������									ָ���ļ�������
------------------------------------------------------------------------------ -
��r����ֻ����		Ϊ���������ݣ���һ���Ѿ����ڵ��ı��ļ�				����
��w����ֻд��		Ϊ��������ݣ���һ���ı��ļ�						����һ���µ��ļ�
��a����׷�ӣ�		���ı��ļ�β�������								����һ���µ��ļ�
��rb����ֻ����		Ϊ���������ݣ���һ���������ļ�						����
��wb����ֻд��		Ϊ��������ݣ���һ���������ļ�					����һ���µ��ļ�
��ab����׷�ӣ�		��һ���������ļ�β�������								����
��r + ������д��		Ϊ�˶���д����һ���ı��ļ�							����
��w + ������д��		Ϊ�˶���д������һ���µ��ļ�						����һ���µ��ļ�
��a + ������д��		��һ���ļ������ļ�β���ж�д						����һ���µ��ļ�
��rb + ������д��	Ϊ�˶���д��һ���������ļ�							����
��wb + ������д��	Ϊ�˶���д���½�һ���µĶ������ļ�					����һ���µ��ļ�
��ab + ������д��	��һ���������ļ������ļ�β���ж���д				����һ���µ��ļ�
*/

//fopen fclose example
#include <stdio.h>
#include <string.h>
#include <errno.h>
int main_102_2()
{
	//���ļ�

	//FILE* pf = fopen("test.txt", "r");//���·��[../��һ��·����./��ǰ·��]
	FILE* pf = fopen("D:\\Compiler\\VisualStudioSetup\\project\\Learning\\Learning\\Learning\\test.txt", "r");//����·��

	//�ļ�����
	if (pf == NULL)//��ʧ��
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	else
	{
		//�򿪳ɹ�
		fputs("fopen example", pf);

		fclose(pf);//�ر��ļ�
		pf = NULL;
	}

}


/*5. �ļ���˳���д

����				������			������
�ַ����뺯��		fgetc			����������
�ַ��������		fputc			���������
�ı������뺯��	fgets			����������
�ı����������	fputs			���������
��ʽ�����뺯��	fscanf			����������
��ʽ���������	fprintf			���������
����������		fread			�ļ�
���������		fwrite			�ļ�


�Ӽ������룬�������Ļ������&��Ļ�����ⲿ�豸

����--��׼�����豸--stdin����Ļ--��׼����豸--stdout����һ������Ĭ�ϴ򿪵��������豸

Ĭ�ϴ򿪵���������stdin,stdout,stderr.���ͣ�FILE*

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
		//д���ļ�
		fputc('h', pfWrite);
		fputc('e', pfWrite);
		fputc('l', pfWrite);
		fputc('l', pfWrite);
		fputc('o', pfWrite);

		//�ر��ļ�
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
		//��ȡ�ļ�
		for (int i = 0; i < 5; i++)
			printf("%c", fgetc(pfRead));

		//�ر��ļ�
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
			//printf("%s", buf);//��һ�����
			puts(buf);//��һ�������
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
	//�Ӽ��̶�ȡһ���ı���Ϣ
	char buf[1024] = { 0 };
	fgets(buf, 1024, stdin);//�ӱ�׼��������ȡ,�ȼ���[gets(buf);]
	fputs(buf, stdout);//�������׼�����,�ȼ���[puts(buf);]

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
scanf/printf ����Ա�׼����/������� ��ʽ������/������
fscanf/fprintf �������������������/������� ��ʽ������/������

sscanf/sprintf sscanf�Ǵ��ַ����ж�ȡ��ʽ�������� sprintf�ǰѸ�ʽ�������������(�洢��)�ַ���

*/



int main_102_11()
{
	struct S s = { 100,3.14,"hello" };
	struct S tmp = { 0 };

	char buf[1024] = { 0 };
	//�Ѹ�ʽ��������ת�����ַ����洢��buf
	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);//���ṹ������ת��Ϊ�ַ���
	//printf("%s\n", buf);
	//��buf�ж�ȡ��ʽ�������ݵ�tmp
	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), &(tmp.arr));
	printf("%d %f %s \n", tmp.n, tmp.score, tmp.arr);

	return 0;
}


//6. �ļ��������д
/*
6.1 fseek
�����ļ�ָ���λ�ú�ƫ��������λ�ļ�ָ��
int fseek ( FILE * stream, long int offset, int origin );
*/
//fseek example 
int main_102_12()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
		return 0;
	//1.��λ�ļ�ָ��
	fseek(pf, 4, SEEK_CUR);//SEEK_CUR--�ļ�ָ�뵱ǰ��λ��,SEEK_END--�ļ���ĩβ��λ��(��ǰƫ�ƣ�ƫ����Ϊ��)��SEEK_SET--�ļ���ʼλ��(���ƫ�ƣ�ƫ����Ϊ��)
	//2.��ȡ�ļ�
	int ch = fgetc(pf);
	printf("%c\n", ch);

	fclose(pf);
	pf = NULL;
	return 0;
}
/*
6.2 ftell
�����ļ�ָ���������ʼλ�õ�ƫ����
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

���ļ�ָ���λ�ûص��ļ�����ʼλ��
���ӣ�
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

//7. �ļ���ȡ�������ж�
/*
�μǣ����ļ���ȡ�����У�������feof�����ķ���ֱֵ�������ж��ļ����Ƿ����������Ӧ���ڵ��ļ���ȡ������ʱ���ж��Ƕ�ȡʧ�ܽ��������������ļ�β������
1. �ı��ļ���ȡ�Ƿ�������жϷ���ֵ�Ƿ�ΪEOF �� fgetc ��������NULL �� fgets ��
���磺fgetc �ж��Ƿ�ΪEOF ��fgets �жϷ���ֵ�Ƿ�ΪNULL .
2. �������ļ��Ķ�ȡ�����жϣ��жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ�����
���磺fread�жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ�����

//feof();//EOF--end of file--�ļ�������־
*/


int main_102_15()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
		return 0;
	int ch = fgetc(pf);
	printf("%d\n", ch);//�ļ�Ϊ�գ�-1

	fclose(pf);
	pf = NULL;
	return 0;
}


int main_102_16()
{

	//printf("%s\n", strerror(errno));//strerror--�Ѵ������Ӧ�Ĵ�����Ϣ�ַ�����ַ����

	//perror
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("error");
		return 0;
	}
	//���ļ�
	int ch = 0;
	while (ch = fgetc(pf) != EOF)
	{
		putchar(ch);
	}
	if (ferror(pf))
		printf("error\n");
	else if (feof(pf))
		printf("end of file\n");
	//���ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}






//8. �ļ�������

/*

ANSIC ��׼���á������ļ�ϵͳ������������ļ��ģ���ν�����ļ�ϵͳ��ָϵͳ�Զ������ڴ���Ϊ����
��ÿһ������ʹ�õ��ļ�����һ�顰�ļ��������������ڴ������������ݻ����͵��ڴ��еĻ�������װ
�����������һ���͵������ϡ�����Ӵ����������������ݣ���Ӵ����ļ��ж�ȡ�������뵽�ڴ滺
��������������������Ȼ���ٴӻ���������ؽ������͵���������������������ȣ����������Ĵ�С��
��C����ϵͳ�����ġ�

*/
#include <stdio.h>
#include <windows.h>
//VS2013 WIN10��������
int main_102_17()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//�Ƚ�����������������
	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
	Sleep(10000);
	printf("ˢ�»�����\n");
	fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
	//ע��fflush �ڸ߰汾��VS�ϲ���ʹ����
	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
	Sleep(10000);
	fclose(pf);
	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
	pf = NULL;
	return 0;
}
/*
������Եó�һ�����ۣ���Ϊ�л������Ĵ��ڣ�C�����ڲ����ļ���ʱ����Ҫ��ˢ�»������������ļ�����������ʱ��ر��ļ���������������ܵ��¶�д�ļ������⡣
*/