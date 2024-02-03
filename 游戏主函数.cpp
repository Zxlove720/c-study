#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<windows.h>
#include<stdlib.h>
#define ROW 3
#define COL 3
void board_game()
{
	char board[ROW][COL];
	intboard(board, ROW, COL);
	Displayboard(board, ROW, COL);
	char ret;
	while (1)
	{
		playermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret = result(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		AlphaGO(board, ROW, COL);
		Sleep(1000);
		Displayboard(board, ROW, COL);
		ret = result(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("ƒ„”Æ¡À\n");
		Displayboard(board, ROW, COL);
		Sleep(2000);
		system("cls");

	}
	else if (ret == '$')
	{
		system("cls");
		printf("you loss\n");
		printf("fvv\n");
		Sleep(2000);
		Displayboard(board, ROW, COL);
		system("cls");

	}
	else
		printf("∆Ωæ÷\n");
	Displayboard(board, ROW, COL);
	Sleep(2000);
	system("cls");
}