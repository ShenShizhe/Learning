# define _CRT_SECURE_NO_WARNINGS 1
//����������
# define ROW 3
# define COL 3
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
# include <time.h>
//������---Three_sons_chess
void Three_sons_chess_menu()
{
	printf("**************************************************************\n");
	printf("**************************************************************\n");
	printf("**********          1.play          0.exit          **********\n");
	printf("**************************************************************\n");
	printf("**************************************************************\n");
}
//��ʼ������
void Three_sons_chess_Board(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//��ӡ����
void Three_sons_chess_dispaly(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		//1.��ӡһ�е�����
		//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < row - 1)
				printf("|");
		}
		printf("\n");
		//2.��ӡ�ָ���
		if (i < row - 1)
		{
			//printf("---|---|---\n");
			for (int j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}

	}
}
//�������
void Three_sons_chess_gamer(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;

	while (1)
	{
		printf("����ִ��غϣ��������������꣺>");
		scanf("%d %d", &x, &y);
		//�ж�x,y����ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("������Ƿ���������ִ��\n");
			}
		}
		else
		{
			printf("��������Ƿ�������������\n");
		}
	}

}
//��������
Three_sons_chess_computer(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("�����ִ�廷��\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
//�ж��Ƿ�ƽ��
Three_sons_chess_full(char board[ROW][COL], int row, int col)
{
	//����1��ʾ��������������0��ʾ����δ��
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//δ��
			}
		}
	}
	return 1;//����
}
//�ж�����Ƿ�Ӯ��
char Three_sons_chess_who_win(char board[ROW][COL], int row, int col)
{
	/*
	����״̬��
			���Ӯ����������������������������'*'
			�����Ӯ������������������������'#'
			ƽ�֡�������������������������������'Q'
			��Ϸ����������������������������'C'
	*/
	//����
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && (board[i][1] != ' '))
		{
			return board[i][1];
		}
	}
	//����
	for (int i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && (board[1][i] != ' '))
		{
			return board[1][i];
		}
	}
	//�Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//�ж��Ƿ�ƽ��
	//Three_sons_chess_full(board, ROW, COL);
	//
	if (1 == Three_sons_chess_full(board, ROW, COL))
	{
		return 'Q';
	}
	return 'C';
}
void Three_sons_chess_game()
{
	char ret = 0;
	//�������飬���������Ϣ
	char board[ROW][COL] = { 0 };//���ݣ�ȫ���ո�
	//��ʼ������[��ʼ������]
	Three_sons_chess_Board(board, ROW, COL);
	//��ӡ����
	Three_sons_chess_dispaly(board, ROW, COL);
	//����
	while (1)
	{
		//�������
		Three_sons_chess_gamer(board, ROW, COL);
		system("cls");
		Three_sons_chess_dispaly(board, ROW, COL);
		//�ж�����Ƿ�Ӯ��
		ret = Three_sons_chess_who_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		Three_sons_chess_computer(board, ROW, COL);
		system("cls");
		Three_sons_chess_dispaly(board, ROW, COL);
		//�жϼ�����Ƿ�Ӯ��
		ret = Three_sons_chess_who_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("��ϲ����Ӯ�ˣ���\n");
	}
	else if (ret == '#')
	{
		printf("��Ǹ�������ˣ���\n");
	}
	else
	{
		printf("�Ծֽ�����ƽ�֣���\n");
	}
}

void Three_sons_chess_test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		Three_sons_chess_menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Three_sons_chess_game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}

int main(void)
{
	Three_sons_chess_test();

	return 0;

}