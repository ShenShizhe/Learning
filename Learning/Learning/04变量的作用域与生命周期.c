#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
//����������������������
int global = 2022;
void test()
{
    printf("test()--%d\n", global);
}
int main_04(void)
{
    {
        int num2 = 2;
    }
    int num1 = 1;
    //printf("num1= %d\n", num1);
    //printf("num2= %d\n", num2);//error��num2���ڵ�ǰ����������
    //test();//����test
    //printf("%d\n", global);
    /*���н����
            num1= 1
            test()--2022
            2022*/
            /*�ܽ᣺
                    1.�ֲ��������������Ǳ������ڵľֲ���Χ
                    2.ȫ�ֱ���������������������*/
                    /*��ͬһ����Ŀ¼�´���һ��ȫ�ֱ�������int g_val=2022;��

                    */
                    //printf("g_val = %d\n", g_val); //error��δ�����ı�ʶ����
                    //����extern�ⲿ����
                    //extern int g_val;
                    //printf("g_val = %d\n", g_val);
                    /*���н����
                            test()--2022
                            g_val = 2022*/



    int  a = 10;
    printf("a = %d\n", a);//ok

    //printf("a = %d\n", a);//error
    /*�ܽ᣺
    * 1.�ֲ����������������ǣ�������������������ڿ�ʼ�����������������ڽ���
    * 2.ȫ�ֱ��������������ǣ������������������
    */
    return 0;

}