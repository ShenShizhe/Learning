# ifndef __FUNCTION_H__
# define __FUNCTION_H__
//����������
# define ROW 3
# define COL 3
//������---Three_sons_chess
void Three_sons_chess_menu();

//��ʼ������
void Three_sons_chess_Board(char board[ROW][COL], int row, int col);
//������---Three_sons_chess
void Three_sons_chess_menu();
//��ӡ����
void Three_sons_chess_dispaly(char board[ROW][COL], int row, int col);
//�������
void Three_sons_chess_gamer(char board[ROW][COL], int row, int col);
//��������
void Three_sons_chess_computer(char board[ROW][COL], int row, int col);
//�ж��Ƿ�ƽ��
void Three_sons_chess_full(char board[ROW][COL], int row, int col);
//�ж�����Ƿ�Ӯ��
char Three_sons_chess_who_win(char board[ROW][COL], int row, int col);
void Three_sons_chess_game();
void Three_sons_chess_game();
# endif