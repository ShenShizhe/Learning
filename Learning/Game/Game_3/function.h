# ifndef __FUNCTION_H__
# define __FUNCTION_H__

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

//1.ɨ��---Minesweeper
void Minesweeper_menu();
//2.��ʼ������
void Init_board_minesweeper(char board[ROWS][COLS], int rows, int cols, char set);
//3.��ӡ����
void Display_board_minesweeper(char board[ROWS][COLS], int row, int col);
//4.������
void Set_mine__minesweeper(char board[ROWS][COLS], int row, int col);
//5.ͳ���׵ĸ���
int Get_mine_count(char mine[ROWS][COLS], int x, int y);
//6.ɨ��
void Find_mine_minesweeper(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
//7.ɨ����Ϸ
void Minesweeper_game();
//8.����
void Minesweeper_test();
# endif