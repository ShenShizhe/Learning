#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
//ָ��
int main_23 (void)
{
    
    int a = 10;    //����һ���������10��������һ��a�ĵ�ַ
    printf("a�ĵ�ַ��%p\n", &a);//��ӡa�ĵ�ַ
    int *p = &a;   //��a�ĵ�ַ����p�洢 (*:�����ò�����)
    printf("p��ֵ��  %p\n", p);//��ӡp��ֵ
    *p = 20;       //��20��ֵ��a�ĵ�ַ
    printf("a��ֵΪ��%d\n", a);
    char ch = 'a';
    char* pc = &ch;
    printf("%d\n", sizeof(pc));//sizeof�鿴��ǰϵͳָ��Ĵ�С�����С��32λƽ̨��4���ֽڣ�64λƽ̨��8���ֽڣ�
    return 0;

}