#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
/*�ַ�����
        "abcd"
        ""//���ַ���
*/
int main_06(void)
{
    char arr1[] = "abc";//����������ַ������д洢
    //"abc"=='a','b','c','\0'��'\0'���ַ������ı�־,'\0'��ֵ��0��
    char arr2[] = { 'a','b','c' };
    // {'a','b','c'}ĩβû�н����ı�־,��˻���������������������ӡһЩ���ֵ
    //printf("%s\n", arr1);
    //���н����abc
    //printf("%s\n", arr2);
    //���н����abc��������������������������������̔����
    /*��arr2�޸�Ϊchar arr2[] = { 'a','b','c',0 };ʱ�����н��Ϊ��abc
    */

    //�ڼ�����Ͻ��ж����ƴ洢��ASSII�룩
    //strlen--string lenth (�����ַ����ĳ���)
    printf("%d\n", strlen(arr1));//���н����3
    printf("%d\n", strlen(arr2));//���н����42(���ֵ)
    return 0;

}