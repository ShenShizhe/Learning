#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <string.h>
/*
�ṹ��-�������Ӷ���
�ṹ����ָ�����Լ����������һ������
������������ʱ��Ҫ�����֡���ߡ����䡢ʡ��֤�š���
������������ʱ��Ҫ�����������ߡ������硢���ۡ���š���

�ṹ��ؼ��֣�struct
*/

//����һ���ṹ������
struct Book
{
    char name[20];//C���Գ������
    short price;//55
};//�˴��ֺŲ���ȱ�٣����ã��������Ͷ���
int main_24 (void)
{
    //���ýṹ�����ͣ�����һ�������͵Ľṹ���b1.name,b1.price��
    struct Book b1 ={"C���Գ������",55};
    struct Book* pb = &b1;//b1��ִ������
    //�޸�(�ṹ�����.��Ա)���ã�[b1.name="C++";]//error,��Ϊ�˴���nameΪ���鱾��Ϊ��ַ,���Ǳ���]��
    strcpy(b1.name, "C++");//strcpy--string copy --�ַ�������--�⺯��--string.h
    printf("������%s\t�۸�%d\n",b1.name,b1.price);
    printf("������%s\t�۸�%d\n", (*pb).name, (*pb).price);//����b1��ָ�����b1������[.:�ṹ�����.��Ա]
    //b1.name,b1.price�����Ը�ֵ�޸�
    printf("������%s\t�۸�%d\n", pb->name, pb->price);//pbָ����������[�ṹ��ָ��->��Ա]

    return 0;

}