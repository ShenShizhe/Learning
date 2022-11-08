# ifndef __FUNCTION_H__
# define __FUNCTION_H__
//定义行与列
# define ROW 3
# define COL 3
//三子棋---Three_sons_chess
void Three_sons_chess_menu();

//初始化棋盘
void Three_sons_chess_Board(char board[ROW][COL], int row, int col);
//三子棋---Three_sons_chess
void Three_sons_chess_menu();
//打印棋盘
void Three_sons_chess_dispaly(char board[ROW][COL], int row, int col);
//玩家下棋
void Three_sons_chess_gamer(char board[ROW][COL], int row, int col);
//电脑下棋
void Three_sons_chess_computer(char board[ROW][COL], int row, int col);
//判断是否平局
void Three_sons_chess_full(char board[ROW][COL], int row, int col);
//判断玩家是否赢？
char Three_sons_chess_who_win(char board[ROW][COL], int row, int col);
void Three_sons_chess_game();
void Three_sons_chess_game();
# endif