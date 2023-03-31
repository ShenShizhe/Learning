#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
ջ�����ֲ���������������ʽ�������ֲ����������
��������̬�ڴ����
��̬����ȫ�ֱ�������̬������ȫ�ַ�Χ������
*/


//��̬�ڴ����

//struct S
//{
//	char name[20];
//	int age;
//};

//int main()
//{
//	//struct S arr[50];//50��struct S ���͵����ݣ����ڲ�ȷ���������������˷ѺͿռ䲻�������
//
//
//
//	return 0;
//}

/*
malloc
void * malloc(size_t size);

����������ڴ�����һ���������õĿռ䣬������ָ�����ռ��ָ�롣
��������ٳɹ����򷵻�һ��ָ�򿪱ٺÿռ��ָ�롣
���������ʧ�ܣ��򷵻�һ��NULLָ�룬���malloc�ķ���ֵһ��Ҫ����顣
������ֵ��������void*������malloc��������֪�����ٿռ�����ͣ�������ʹ�õ�ʱ��ʹ�����Լ�������.���������sizeΪ0 , malloc����Ϊ�Ǳ�׼��δ����ģ�ȡ���ڱ�������


free
void free(void* ptr)
free���������ͷŶ�̬���ٵ��ڴ档
�������ptrָ��Ŀռ䲻�Ƕ�̬���ٵģ���free��������Ϊ��δ����ġ�
�������ptr��NULLָ�룬����ʲô�¶�������
*/


#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>

int main_99_1()
{
	// ���ڴ����� 10 �����͵Ŀռ�
	int* p = (int*)malloc(10 * sizeof(int));

	if (p == NULL)
	{
		// ��ӡ�����ԭ��
		printf("%s\n", strerror(errno));
	}
	else
	{
		// ����ʹ��
		int i = 0;
		for (i = 0; i < 10; i++)
			*(p + i) = i;
		for (i = 0; i < 10; i++)
			printf("%d ", *(p + i));
	}
	//��̬����Ŀռ䲻��ʹ�õ�ʱ�򣬾�Ӧ�û�������ϵͳ

	free(p);
	p = NULL;
	return 0;
}

/*
calloc

void* colloc (size_t num,size_t size)

�����Ĺ�����Ϊnum ����СΪsize��Ԫ�ؿ���һ��ռ䣬���Ұѿռ��ÿ���ֽڳ�ʼ��Ϊ0��
�뺯�� ma1loc ������ֻ����ca1loc ���ڷ��ص�ַ֮ǰ������Ŀռ��ÿ���ֽڳ�ʼ��Ϊȫ0��

*/
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>
int main_99_2()
{
	int* p = (int*)calloc(10, sizeof(int));


	if (p == NULL)
	{
		// ��ӡ�����ԭ��
		printf("%s\n", strerror(errno));
	}
	else
	{
		// ����ʹ��
		int i = 0;
		for (i = 0; i < 10; i++)
			printf("%d ", *(p + i));
	}
	//free--�ͷŶ�̬���ٵĿռ��
	free(p);
	p = NULL;


	return 0;
}


/*
realloc

realloc�����ĳ����ö�̬�ڴ���������
��ʱ�����Ƿ��ֹ�ȥ����Ŀռ�̫С�ˣ���ʱ�������ֻ��������Ŀռ�����ˣ���Ϊ�˺����ʹ���ڴ棬����һ������ڴ�Ĵ�С�����ĵ�������rea1loc�����Ϳ��������Զ�̬�����ڴ��С�ĵ���������ԭ������;

void* realloc (void ptr,size_t size)

ptr��Ҫ�������ڴ��ַ
size����֮���´�С
����ֵΪ����֮����ڴ���ʼλ�á�
�����������ԭ�ڴ�ռ��С�Ļ����ϣ����Ὣԭ���ڴ��е������ƶ����µĿռ䡣
realloc�ڵ����ڴ�ռ���Ǵ����������:

reallocʹ�õ�����ע�����
1.���Pָ��Ŀռ�֮�����㹻���ڴ�ռ����ֱ��׷�ӣ���ֱ��׷�ӣ��󷵻�P
2.���Pָ��Ŀռ�֮��û���㹻���ڴ�ռ����ֱ��׷�ӣ���realloc������������һ���µ��ڴ����򣬿���һ����������Ŀռ䣬���Ұ�ԭ���ڴ�����ݽ��п������ͷžɵ��ڴ�ռ䣬�����¿��ٵ��ڴ�ռ�ĵ�ַ
3.��Ҫ��һ���µı���������realloc�����ķ���ֵ
*/

#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>

int main_99_3()
{
	int* p = (int*)malloc(20);
	if (p == NULL)
		printf("%s\n", strerror(errno));
	else
	{
		int i = 0;
		for (; i < 5; i++)
			*(p + i) = i;
	}
	//ֻ������ʹ��malloc���ٵ�20���ֽڿռ䣬����20���ֽڲ����������ǵ�ʹ�ã����ǵ�������40���ֽڣ���ʱ����ʹ��realloc��������̬���ٵ��ڴ�
	int* ptr = realloc(p, 40);
	if (ptr == NULL)
	{
		//׷��ʧ��

	}
	if (ptr != NULL)
	{
		//׷�ӳɹ�
		p = ptr;
		int i = 0;
		for (i = 5; i < 10; i++)
			*(p + 1) = i;
		for (i = 0; i < 10; i++)
			printf("%d ", *(p + i));
	}
	//�ͷ��ڴ�
	free(p);
	p = NULL;
	return 0;
}


//�����Ķ�̬�ڴ����
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>
#include <Windows.h>
int main_99_4()
{
	//1.��NULL���н����ò���

	//int* p = (int*)malloc(40);
	////�����ʱmallocʧ�ܣ�p�ͱ���ֵΪNULL
	//*p = 0;//err
	//int i = 0;
	//for (; i < 10; i++)
	//{

	//	*(p + 1) = i;//err
	//}

	//free(p);
	//p = NULL;


	//2.�Զ�̬�����ڴ��Խ�����

	//int* p = (int*)malloc(5 * sizeof(int));
	//if (p == NULL){	}
	//else
	//{
	//	int i = 0;
	//	//i>5ʱ��Խ�����
	//	for (i = 0; i < 10; i++)
	//		*(p + i) = i;
	//}
	//free(p);
	//p = NULL;

	//3.�ԷǶ�̬�����ڴ��free

	//int a = 10;//ջ
	//int* p = &a;
	//*p = 20;

	//free(p);//error,ֻ�ܶԶ����Ķ�̬�ռ���в���
	//p = NULL;

	//4.ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����

	//int* p = (int*)malloc(40);

	//if (p == NULL)
	//{
	//}
	//else
	//{
	//	int i = 0;
	//	for (i = 0; i < 10; i++)
	//		*p++ = i;
	//}
	//free(p);//error,ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
	//p = NULL;

	//5.��ͬһ�鶯̬�ڴ����ͷš�ԭ��˭���٣�˭���գ�˭���룬˭���ա������⣺free��ɺ�ʱ����ָ�룬������free����ʧЧ��


	//int* p = (int*)malloc(40);
	//if (p == NULL) {}
	//else
	//{
	//	//ʹ��
	//}
	//free(p);
	////.....
	//free(p);//error,��ν���free

	//6.��̬�����ڴ������ͷţ��ڴ�й©��

	//while (1)
	//{
	//	malloc(1);//�����ͷ�
	//	//Sleep(1000);
	//}

	return 0;
}