# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
# include <time.h>

//����һ���ṹ������[struct Stu]
//ѧ��[���֡����䡢ѧ��]
struct Stu
{
	//��Ա����
	char name[10];
	int age;
	char id[20];
};
int main(void)
{
	//����һ���ṹ�ĳ�Ա[. �ṹ�� .��Ա��][->�ṹ��ָ��->��Ա��]

	int a = 10;
	//ʹ��struct Stu������ʹ�����һ��ѧ������s1,����ʼ��
	struct Stu s1 = { "����",18,"888888" };
	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);
	//�ṹ�����.��Ա��


	struct Stu* ps = &s1;
	printf("%s\n", (*ps).name);
	printf("%d\n", (*ps).age);
	printf("%s\n", (*ps).id);


	printf("%s\n", ps->name);//[ps->name]�ȼ���[(*ps).name]
	printf("%d\n", ps->age);
	printf("%s\n", ps->id);
	//�ṹ��ָ��->��Ա��

	return 0;
}