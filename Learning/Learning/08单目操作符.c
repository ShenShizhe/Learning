#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
int main_08(void)
{
    //��Ŀ������ ˫Ŀ������ ��Ŀ������
    int a = 10, b = 20, c = 0, d = -1, e = +2;//-:��ʾ��ֵ��+����ʾ��ֵ(ͨ��ʡ�Բ�д)
    a = a + b;//�˴���+Ϊ��Ŀ������������Ҫ����������(a��b)
    /*  ��C�����У�0��ʾ�٣���0��ʾ��

    */
    printf("%d\n", a);
    printf("%d\n", !c);//��c�����߼�ȡ��,��0��Ϊ��ȡ����ֵΪ0,0Ϊ��ȡ����ֵΪ1
    printf("%d\n", sizeof(a));//sizeof������Ǳ���������ռ�ռ�Ĵ�С(��λ���ֽ�)
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof a);
    //printf("%d\n", sizeof int);//error,��������Ĵ�Сʱ����ʡ�����ţ�������ʱ����ʡ��
    //sizeof������Ĵ�С
    int arr[10] = { 0 };//ʮ������Ԫ�ص�����
    printf("%d\n", sizeof(arr));//10 * sizeof{int} = 40
    //���������Ԫ�ظ���(�����ܴ�С/���������С)
    int ar = sizeof(arr) / sizeof(arr[0]);
    printf("�����Ԫ�ظ���:%d\n", ar);

    /*���н����
            30
            1
            4
            4
            4
            40
            �����Ԫ�ظ���:10*/
    return 0;

}