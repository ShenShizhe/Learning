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


//扫雷---Minesweeper
void Minesweeper_menu()
{
	printf("**************************************************************\n");
	printf("**************************************************************\n");
	printf("**********          1.play          0.exit          **********\n");
	printf("**************************************************************\n");
	printf("**************************************************************\n");
}
//初始化棋盘
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
//打印棋盘
void Display_board_minesweeper(char board[ROWS][COLS], int row, int col)
{
	//打印列号
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
//布置雷
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
//统计雷的个数
int Get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	//'0'-'0'=0,'1'-'0'=1
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0';

}
//扫雷
void Find_mine_minesweeper(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0, y = 0, win = 0;

	while (win < row * col - EASY_COUNT)
	{
		printf("请输入排查雷的坐标：>\n");
		scanf("%d%d", &x, &y);
		//判断用户输入坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//合法[1、是雷2、不是雷]
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				Display_board_minesweeper(mine, row, col);
				break;
			}
			//不是雷，计算x\y坐标周围有几个雷
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
			printf("您的坐标非法，请重新输入\n");
		}
	}
	if (win = row * col - EASY_COUNT)
	{
		printf("恭喜你，你赢了\n");
		Display_board_minesweeper(mine, ROW, COL);
	}
}
void Minesweeper_game()
{
	//雷的存储信息
	//1.布置好的的雷的信息

	char mine[ROWS][COLS] = { 0 };
	//2.排出的雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化棋盘
	Init_board_minesweeper(mine, ROWS, COLS, '0');
	Init_board_minesweeper(show, ROWS, COLS, '*');
	//打印棋盘
	//Display_board_minesweeper(mine, ROW, COL);
	//printf("\n");
	Display_board_minesweeper(show, ROW, COL);
	//布置雷
	Set_mine__minesweeper(mine, ROW, COL);
	//Display_board_minesweeper(mine, ROW, COL);
	//Display_board_minesweeper(show, ROW, COL);
	//扫雷
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
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Minesweeper_game();
			break;
		case 0:
			printf("即将退出游戏！\n");
			Sleep(3000);
			break;
		default:
			printf("您的输入有误，请确认无误后在输入!!\n");
			break;
		}
	} while (input != 1);
}
int main(void)
{
	Minesweeper_test();
	return 0;
}