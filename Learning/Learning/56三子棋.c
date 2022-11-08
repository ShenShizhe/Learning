# define _CRT_SECURE_NO_WARNINGS 1
//定义行与列
# define ROW 3
# define COL 3
# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>
# include <Windows.h>
# include <time.h>
//三子棋---Three_sons_chess
void Three_sons_chess_menu()
{
	printf("**************************************************************\n");
	printf("**************************************************************\n");
	printf("**********          1.play          0.exit          **********\n");
	printf("**************************************************************\n");
	printf("**************************************************************\n");
}
//初始化棋盘
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
//打印棋盘
void Three_sons_chess_dispaly(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		//1.打印一行的数据
		//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < row - 1)
				printf("|");
		}
		printf("\n");
		//2.打印分割行
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
//玩家下棋
void Three_sons_chess_gamer(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;

	while (1)
	{
		printf("您的执棋回合，请输入落子坐标：>");
		scanf("%d %d", &x, &y);
		//判断x,y坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标非法！请重新执棋\n");
			}
		}
		else
		{
			printf("您的坐标非法，请重新输入\n");
		}
	}

}
//电脑下棋
Three_sons_chess_computer(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("计算机执棋环节\n");
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
//判断是否平局
Three_sons_chess_full(char board[ROW][COL], int row, int col)
{
	//返回1表示棋盘已满，返回0表示棋盘未满
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//未满
			}
		}
	}
	return 1;//已满
}
//判断玩家是否赢？
char Three_sons_chess_who_win(char board[ROW][COL], int row, int col)
{
	/*
	四种状态：
			玩家赢——————————————'*'
			计算机赢————————————'#'
			平局————————————————'Q'
			游戏继续————————————'C'
	*/
	//三行
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && (board[i][1] != ' '))
		{
			return board[i][1];
		}
	}
	//三列
	for (int i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && (board[1][i] != ' '))
		{
			return board[1][i];
		}
	}
	//对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//判断是否平局
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
	//创建数组，存放棋盘信息
	char board[ROW][COL] = { 0 };//内容：全部空格
	//初始化棋盘[初始化数组]
	Three_sons_chess_Board(board, ROW, COL);
	//打印棋盘
	Three_sons_chess_dispaly(board, ROW, COL);
	//下棋
	while (1)
	{
		//玩家下棋
		Three_sons_chess_gamer(board, ROW, COL);
		system("cls");
		Three_sons_chess_dispaly(board, ROW, COL);
		//判断玩家是否赢？
		ret = Three_sons_chess_who_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		Three_sons_chess_computer(board, ROW, COL);
		system("cls");
		Three_sons_chess_dispaly(board, ROW, COL);
		//判断计算机是否赢？
		ret = Three_sons_chess_who_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("恭喜，您赢了！！\n");
	}
	else if (ret == '#')
	{
		printf("抱歉，您输了！！\n");
	}
	else
	{
		printf("对局结束，平局！！\n");
	}
}

void Three_sons_chess_test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		Three_sons_chess_menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Three_sons_chess_game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}

int main(void)
{
	Three_sons_chess_test();

	return 0;

}