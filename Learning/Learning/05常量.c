#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# define MAX 10
/*����:
        1.����ĳ���
        2.const���εĳ�����
        3.#define ����ı�ʶ������
        4.ö�ٳ���
*/
int g_val = 2022;
int main_05(void)
{
    /*int num1,num2,sum = 0;
    scanf("%d%d", &num1,&num2);*/
    /*scanf��C�����ڲ��ĺ���������ȫ����VS�ṩ�ĺ���Ϊscanf_s�����벻���п���ֲ�ԣ�
    �����ͷ�ļ��м��루#define _CRT_SECURE_NO_WARNINGS 1�������������
    ��ӵ�ַ��C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\IDE\VC\VCProjectItems
    ������VS���ͼ�꣬ѡ�����ԣ����ļ�����λ�õ��ϲ�Ŀ¼����IDE\VC\VCProjectItems��
    �ļ�����newc++file.cpp
    */
    //sum = num1 + num2;
    //printf("%d\n", sum);
    /*���н����
            1
            2
            3*/

            /************************************************************************************/
            //1.����ĳ���
            /*int num = 4;
            printf("%d\n", num);
            num = 8;
            printf("%d\n", num);*/
            /*���н����
                        4
                        8*/
                        //2.const���εĳ�����
                        /*const int num = 4;
                        printf("%d\n", num);*/
                        //num = 8;//error,const--�����ԣ� ���εĳ�����num���ɱ�
                        //printf("%d\n", num);
                        /************/
                        //int arr[10] = {0};//ok
                        /************/
                        //int n = 10;
                        //int arr[n] = { 0 };//error�����ʽ���뺬�г���ֵ������˵���ô���n���ǳ�������һ������
                        /************/
                        //const int n;
                        //int arr[n] = { 0 };//error(��ʱn�Ǳ��������Ǿ��г�����)���������ǳƴ�ʱ��nΪ������

                        //3.#define ����ı�ʶ������
                        //int arr[MAX] = {0};//ok
                        //printf("%d\n", MAX);
                        /*���н����
                                    10*/


                                    //4.ö�ٳ���
                                    /*ö�٣�һһ�о�
                                    * �Ա��С�Ů
                                    * ��ԭɫ���졢�ơ���
                                    * ���ڣ�һ������������

                                    ö�ٵĹؼ��� enum
                                    ö�ٳ�����MALE,FEMALE,SECRET,
                                    */
                                    //����һ�������Ա��ö��
    enum Sex
    {
        MALE,
        FEMALE,
        SECRET,
    };

    //enum Sex s = MALE;
    //printf("%d\n", MALE); //���н����0
    //printf("%d\n", FEMALE);//���н����1
    //printf("%d\n", SECRET);//���н����2
    /************/
    //����һ��������ɫ��ö��
    enum Color
    {
        RED,
        YELLOW,
        BLUE,
    };
    //����ö��
    enum Color color = BLUE;
    //RED = 6;//error,ö�ٳ������ɸ��ģ�ͨ��ö�ٴ������ı����ɱ�
    return 0;

}