#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
/*��������
    char �ַ���������
    short int ������
    int ����
    long ������
    long long ���������� C99��׼
    float �����ȸ�����
    double ˫���ȸ�����*/
int main_02 (void)
{   
    /*printf���÷���
                %d--��ʮ���ƴ�ӡ����
                %c--��ӡ�ַ�
                %f--��ӡ��������(С��)
                %lf--��ӡ˫���ȸ�������(С��)<double>
                %p--�Ե�ַ����ʽ��ӡ
                %x--��ʮ�����ƴ�ӡ����*/
    //char ch = 'A';
    //printf("%c\n", ch); /*%c--��ӡһ���ַ���ʽ������*/
    //int age = 20;
    //printf("%d\n", age);/*%d--��ӡ����ʮ��������*/
    //long num = 100;
    //printf("%d\n", num);
    //float f = 5.0;
    //printf("%f\n", f);
    //double d = 3.14;
    //printf("%lf\n", d);

    /*���н����
            A
            20
            100
            5.000000
            3.140000*/

    /*ÿһ���������͵Ĵ�С��*/
    /*printf("char        %d\n", sizeof(char));
    printf("short       %d\n", sizeof(short));
    printf("int         %d\n", sizeof(int));
    printf("long        %d\n", sizeof(long));
    printf("long long   %d\n", sizeof(long long));
    printf("float       %d\n", sizeof(float));
    printf("double      %d\n", sizeof(double));*/
    
    /*���н����
                char        1
                short       2
                int         4
                long        4
                long long   8
                float       4
                double      8*/
    //C���Թ涨sizeof(long)>=sizeof(int)
    /*������ڿռ��С��
                    bit(����λ)
                    1B(Byte �ֽ�)=8bit
                    1KB (Kilobyte ǧ�ֽ�)=1024B
                    1MB (Megabyte ���ֽ� ��ơ��ס�)=1024KB
                    1GB (Gigabyte ���ֽ� �ֳơ�ǧ�ס�)=1024MB
                    1TB (Trillionbyte �����ֽ� ̫�ֽ�)=1024GB������1024=2^10 ( 2 ��10�η�)
                    1PB��Petabyte ǧ�����ֽ� ���ֽڣ�=1024TB
                    1EB��Exabyte �������ֽ� ���ֽڣ�=1024PB
                    1ZB (Zettabyte ʮ�������ֽ� ���ֽ�)= 1024 EB
                    1YB (Yottabyte һ�������ֽ� Ң�ֽ�)= 1024 ZB
                    1BB (Brontobyte һǧ�������ֽ�)= 1024 YB */
 
    return 0;

}