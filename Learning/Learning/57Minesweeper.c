# define _CRT_SECURE_NO_WARNINGS 1
# define ROW 9
# define COL 9
# define ROWS ROW+2
# define COLS COL+2
# define EASY_COUNT 10
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <time.h>
# include <Windows.h>


//ɨ��---Minesweeper
void Minesweeper_menu()
{
	printf("**************************************************************\n");
	printf("**************************************************************\n");
	printf("**********          1.play          0.exit          **********\n");
	printf("**************************************************************\n");
	printf("**************************************************************\n");
}
//��ʼ������
void Init_board_minesweeper(char board[ROWS][COLS], int rows, int cols, char set)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
//��ӡ����
void Display_board_minesweeper(char board[ROWS][COLS], int row, int col)
{
	//��ӡ�к�
	for (int i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
//������
void Set_mine__minesweeper(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;//1~9
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}

	}
}
//ͳ���׵ĸ���
int Get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	//'0'-'0'=0,'1'-'0'=1
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0';

}
//ɨ��
void Find_mine_minesweeper(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0, y = 0, win = 0;

	while (win < row * col - EASY_COUNT)
	{
		printf("�������Ų��׵����꣺>\n");
		scanf("%d%d", &x, &y);
		//�ж��û���������ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//�Ϸ�[1������2��������]
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				Display_board_minesweeper(mine, row, col);
				break;
			}
			//�����ף�����x\y������Χ�м�����
			else
			{
				int count = Get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				Display_board_minesweeper(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("��������Ƿ�������������\n");
		}
	}
	if (win = row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬��Ӯ��\n");
		Display_board_minesweeper(mine, ROW, COL);
	}
}
void Minesweeper_game()
{
	//�׵Ĵ洢��Ϣ
	//1.���úõĵ��׵���Ϣ

	char mine[ROWS][COLS] = { 0 };
	//2.�ų����׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	Init_board_minesweeper(mine, ROWS, COLS, '0');
	Init_board_minesweeper(show, ROWS, COLS, '*');
	//��ӡ����
	//Display_board_minesweeper(mine, ROW, COL);
	//printf("\n");
	Display_board_minesweeper(show, ROW, COL);
	//������
	Set_mine__minesweeper(mine, ROW, COL);
	//Display_board_minesweeper(mine, ROW, COL);
	//Display_board_minesweeper(show, ROW, COL);
	//ɨ��
	Find_mine_minesweeper(mine, show, ROW, COL);
	//system("cls");
}
void Minesweeper_test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		Minesweeper_menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Minesweeper_game();
			break;
		case 0:
			printf("�����˳���Ϸ��\n");
			Sleep(3000);
			break;
		default:
			printf("��������������ȷ�������������!!\n");
			break;
		}
	} while (input != 1);
}
int main(void)
{
	Minesweeper_test();
	return 0;
}