#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<random>
#include "Source.h"

char z[3][3] = { '1','2','3','4','5','6','7','8','9' };
char m[3][3] = { '1','2','3','4','5','6','7','8','9' };
int CO = 0;
int CX = 0;
int CD = 0;


void choose(char* player1, char* player2, char* mode, char* computer)
{

	while (*mode != '1' && *mode != '2')
	{
		printf("chosse 1 or 2");
		printf("\n(1) for 1 player vs computer");
		printf("\n(2) for 2 players against each other\n");
		scanf_s(" %c", &*mode);
	}
	if (*mode == '1')
	{
		printf("choose X or O\n");
		scanf_s(" %c", &*player1);

		if (*player1 == 'x' || *player1 == 'X')
		{
			*computer = 'o';
			*player1 = 'x';
			printf("Player1 is playing with X\n");
			printf("Computer is playing with O\n");
		}
		else if (*player1 == 'o' || *player1 == 'O')
		{
			*computer = 'x';
			*player1 = 'o';
			printf("Player1 is playing with O\n");
			printf("Computer is playing with X\n");
		}
		else {
			printf("\ninvalid input");
			printf("\nplease Reenter your input : ");
			scanf_s(" %c", &*player1);

			if (*player1 == 'x' || *player1 == 'X')
			{
				*player1 = 'x';
				*computer = 'o';
				printf("Player1 is playing with X\n");
				printf("computer is playing with O\n");
			}
			else if (*player1 == 'o' || *player1 == 'O')
			{
				*player1 = 'o';
				*computer = 'x';
				printf("Player1 is playing with O\n");
				printf("computer is playing with X\n");

			}
		}
	}
	else if (*mode == '2')

	{

		printf("choose X or O\n");
		scanf_s(" %c", &*player1);

		if (*player1 == 'x' || *player1 == 'X')
		{
			*player1 = 'x';
			*player2 = 'o';
			printf("Player1 is playing with X\n");
			printf("Player2 is playing with O\n");
		}
		else if (*player1 == 'o' || *player1 == 'O')
		{
			*player1 = 'o';
			*player2 = 'x';
			printf("Player1 is playing with O\n");
			printf("Player2 is playing with X\n");
		}
		else {
			printf("\ninvalid input");
			printf("\nplease Reenter your input : ");
			scanf_s(" %c", &*player1);

			if (*player1 == 'x' || *player1 == 'X')
			{
				*player1 = 'x';
				*player2 = 'o';
				printf("Player1 is playing with X\n");
				printf("Player2 is playing with O\n");
			}
			else if (*player1 == 'o' || *player1 == 'O')
			{
				*player1 = 'o';
				*player2 = 'x';
				printf("Player1 is playing with O\n");
				printf("Player2 is playing with X\n");
			}
		}
	}
}

void print()
{
	int i, j;
	char player1, player2;
	char mode, computer;
	choose(&player1, &player2, &mode, &computer);
	char move, move1;
	int move2;

	if (mode == '1')
	{

		for (i = 0; i < 3; i++)
		{
			printf("\n");
			printf("-------------------");
			printf("\n");

			for (j = 0; j < 3; j++)
			{


				printf(" %c\t", z[i][j]);
			}
		}
		printf("\n");
		printf("-------------------");
		int x;


		while (1)
		{

			printf("\nplayer 1 enter the coordenit you want to play at : ");
			scanf_s(" %c", &move);



			if (move == '1' && z[0][0] == '1')
				z[0][0] = player1;
			else if (move == '2' && z[0][1] == '2')
				z[0][1] = player1;
			else if (move == '3' && z[0][2] == '3')
				z[0][2] = player1;
			else if (move == '4' && z[1][0] == '4')
				z[1][0] = player1;
			else if (move == '5' && z[1][1] == '5')
				z[1][1] = player1;
			else if (move == '6' && z[1][2] == '6')
				z[1][2] = player1;
			else if (move == '7' && z[2][0] == '7')
				z[2][0] = player1;
			else if (move == '8' && z[2][1] == '8')
				z[2][1] = player1;
			else if (move == '9' && z[2][2] == '9')
				z[2][2] = player1;
			else {
				printf("\ninvalid move");
				printf("\nplease Reenter your move : ");
				scanf_s(" %c", &move);
				if (move == '1' && z[0][0] == '1')
					z[0][0] = player1;
				else if (move == '2' && z[0][1] == '2')
					z[0][1] = player1;
				else if (move == '3' && z[0][2] == '3')
					z[0][2] = player1;
				else if (move == '4' && z[1][0] == '4')
					z[1][0] = player1;
				else if (move == '5' && z[1][1] == '5')
					z[1][1] = player1;
				else if (move == '6' && z[1][2] == '6')
					z[1][2] = player1;
				else if (move == '7' && z[2][0] == '7')
					z[2][0] = player1;
				else if (move == '8' && z[2][1] == '8')
					z[2][1] = player1;
				else if (move == '9' && z[2][2] == '9')
					z[2][2] = player1;
				else {
					printf("\ninvalid move");
					printf("\nplease Reenter your move : ");
					scanf_s(" %c", &move);
					if (move == '1' && z[0][0] == '1')
						z[0][0] = player1;
					else if (move == '2' && z[0][1] == '2')
						z[0][1] = player1;
					else if (move == '3' && z[0][2] == '3')
						z[0][2] = player1;
					else if (move == '4' && z[1][0] == '4')
						z[1][0] = player1;
					else if (move == '5' && z[1][1] == '5')
						z[1][1] = player1;
					else if (move == '6' && z[1][2] == '6')
						z[1][2] = player1;
					else if (move == '7' && z[2][0] == '7')
						z[2][0] = player1;
					else if (move == '8' && z[2][1] == '8')
						z[2][1] = player1;
					else if (move == '9' && z[2][2] == '9')
						z[2][2] = player1;
					else {
						printf("\ninvalid move");
						printf("\nsee u next time :)");
						break;
					}
				}
			}


			for (i = 0; i < 3; i++)
			{
				printf("\n");
				printf("-------------------");
				printf("\n");

				for (j = 0; j < 3; j++)
				{
					printf(" %c\t", z[i][j]);
				}
			}
			printf("\n");
			printf("-------------------");



			if (z[0][0] == z[0][1] && z[0][1] == z[0][2])
				break;
			else if (z[1][0] == z[1][1] && z[1][1] == z[1][2]) {
				break;
			}
			else if (z[2][0] == z[2][1] && z[2][1] == z[2][2]) {
				break;
			}
			else if (z[0][0] == z[1][0] && z[1][0] == z[2][0]) {
				break;
			}
			else if (z[0][1] == z[1][1] && z[1][1] == z[2][1]) {
				break;
			}
			else if (z[0][2] == z[1][2] && z[1][2] == z[2][2]) {
				break;
			}
			else if (z[0][0] == z[1][1] && z[1][1] == z[2][2]) {
				break;
			}
			else if (z[0][2] == z[1][1] && z[1][1] == z[2][0]) {
				break;
			}
			else if (z[0][0] != '1' && z[0][1] != '2' && z[0][2] != '3' &&
				z[1][0] != '4' && z[1][1] != '5' && z[1][2] != '6' && z[2][0]
				!= '7' && z[2][1] != '8' && z[2][2] != '9') {
				break;
			}

			move2 = rand() % 10;
			printf("\ncomputer move :'%d' ", move2);


			if (move2 == 1 && z[0][0] == '1')
				z[0][0] = computer;
			else if (move2 == 2 && z[0][1] == '2')
				z[0][1] = computer;
			else if (move2 == 3 && z[0][2] == '3')
				z[0][2] = computer;
			else if (move2 == 4 && z[1][0] == '4')
				z[1][0] = computer;
			else if (move2 == 5 && z[1][1] == '5')
				z[1][1] = computer;
			else if (move2 == 6 && z[1][2] == '6')
				z[1][2] = computer;
			else if (move2 == 7 && z[2][0] == '7')
				z[2][0] = computer;
			else if (move2 == 8 && z[2][1] == '8')
				z[2][1] = computer;
			else if (move2 == 9 && z[2][2] == '9')
				z[2][2] = computer;
			else {
				printf("\ninvalid move");
				move2 = rand() % 10;
				printf("\ncomputer move :'%d'", move2);

				if (move2 == 1 && z[0][0] == '1')
					z[0][0] = computer;
				else if (move2 == 2 && z[0][1] == '2')
					z[0][1] = computer;
				else if (move2 == 3 && z[0][2] == '3')
					z[0][2] = computer;
				else if (move2 == 4 && z[1][0] == '4')
					z[1][0] = computer;
				else if (move2 == 5 && z[1][1] == '5')
					z[1][1] = computer;
				else if (move2 == 6 && z[1][2] == '6')
					z[1][2] = computer;
				else if (move2 == 7 && z[2][0] == '7')
					z[2][0] = computer;
				else if (move2 == 8 && z[2][1] == '8')
					z[2][1] = computer;
				else if (move2 == 9 && z[2][2] == '9')
					z[2][2] = computer;
				else {
					printf("\ninvalid move");
					move2 = rand() % 10;
					printf("\ncomputer move :'%d'", move2);

					if (move2 == 1 && z[0][0] == '1')
						z[0][0] = computer;
					else if (move2 == 2 && z[0][1] == '2')
						z[0][1] = computer;
					else if (move2 == 3 && z[0][2] == '3')
						z[0][2] = computer;
					else if (move2 == 4 && z[1][0] == '4')
						z[1][0] = computer;
					else if (move2 == 5 && z[1][1] == '5')
						z[1][1] = computer;
					else if (move2 == 6 && z[1][2] == '6')
						z[1][2] = computer;
					else if (move2 == 7 && z[2][0] == '7')
						z[2][0] = computer;
					else if (move2 == 8 && z[2][1] == '8')
						z[2][1] = computer;
					else if (move2 == 9 && z[2][2] == '9')
						z[2][2] = computer;
					else {
						printf("\ninvalid move");
						printf("\nsee u next time :)");
						break;
					}
				}
			}
			for (i = 0; i < 3; i++)
			{
				printf("\n");
				printf("-------------------");
				printf("\n");

				for (j = 0; j < 3; j++)
				{
					printf("%c\t", z[i][j]);
				}
			}
			printf("\n");
			printf("-------------------");


			if (z[0][0] == z[0][1] && z[0][1] == z[0][2])
				break;
			else if (z[1][0] == z[1][1] && z[1][1] == z[1][2]) {
				break;
			}
			else if (z[2][0] == z[2][1] && z[2][1] == z[2][2]) {
				break;
			}
			else if (z[0][0] == z[1][0] && z[1][0] == z[2][0]) {
				break;
			}
			else if (z[0][1] == z[1][1] && z[1][1] == z[2][1]) {
				break;
			}
			else if (z[0][2] == z[1][2] && z[1][2] == z[2][2]) {
				break;
			}
			else if (z[0][0] == z[1][1] && z[1][1] == z[2][2]) {
				break;
			}
			else if (z[0][2] == z[1][1] && z[1][1] == z[2][0]) {
				break;
			}
			else if (z[0][0] != '1' && z[0][1] != '2' && z[0][2] != '3' &&
				z[1][0] != '4' && z[1][1] != '5' && z[1][2] != '6' && z[2][0]
				!= '7' && z[2][1] != '8' && z[2][2] != '9') {
				break;
			}

		}
	}
	else if (mode == '2')
	{
		for (i = 0; i < 3; i++)
		{
			printf("\n");
			printf("-------------------");
			printf("\n");

			for (j = 0; j < 3; j++)
			{


				printf(" %c\t", z[i][j]);
			}
		}
		printf("\n");
		printf("-------------------");
		int x;


		while (1)
		{

			printf("\nplayer 1 enter the coordenit you want to play at : ");
			scanf_s(" %c", &move);


			if (move == '1' && z[0][0] == '1')
				z[0][0] = player1;
			else if (move == '2' && z[0][1] == '2')
				z[0][1] = player1;
			else if (move == '3' && z[0][2] == '3')
				z[0][2] = player1;
			else if (move == '4' && z[1][0] == '4')
				z[1][0] = player1;
			else if (move == '5' && z[1][1] == '5')
				z[1][1] = player1;
			else if (move == '6' && z[1][2] == '6')
				z[1][2] = player1;
			else if (move == '7' && z[2][0] == '7')
				z[2][0] = player1;
			else if (move == '8' && z[2][1] == '8')
				z[2][1] = player1;
			else if (move == '9' && z[2][2] == '9')
				z[2][2] = player1;
			else {
				printf("\ninvalid move");
				printf("\nplease Reenter your move : ");
				scanf_s(" %c", &move);
				if (move == '1' && z[0][0] == '1')
					z[0][0] = player1;
				else if (move == '2' && z[0][1] == '2')
					z[0][1] = player1;
				else if (move == '3' && z[0][2] == '3')
					z[0][2] = player1;
				else if (move == '4' && z[1][0] == '4')
					z[1][0] = player1;
				else if (move == '5' && z[1][1] == '5')
					z[1][1] = player1;
				else if (move == '6' && z[1][2] == '6')
					z[1][2] = player1;
				else if (move == '7' && z[2][0] == '7')
					z[2][0] = player1;
				else if (move == '8' && z[2][1] == '8')
					z[2][1] = player1;
				else if (move == '9' && z[2][2] == '9')
					z[2][2] = player1;
				else {
					printf("\ninvalid move");
					printf("\nplease Reenter your move : ");
					scanf_s(" %c", &move);
					if (move == '1' && z[0][0] == '1')
						z[0][0] = player1;
					else if (move == '2' && z[0][1] == '2')
						z[0][1] = player1;
					else if (move == '3' && z[0][2] == '3')
						z[0][2] = player1;
					else if (move == '4' && z[1][0] == '4')
						z[1][0] = player1;
					else if (move == '5' && z[1][1] == '5')
						z[1][1] = player1;
					else if (move == '6' && z[1][2] == '6')
						z[1][2] = player1;
					else if (move == '7' && z[2][0] == '7')
						z[2][0] = player1;
					else if (move == '8' && z[2][1] == '8')
						z[2][1] = player1;
					else if (move == '9' && z[2][2] == '9')
						z[2][2] = player1;
					else {
						printf("\ninvalid move");
						printf("\nsee u next time :)");
						break;
					}
				}
			}


			for (i = 0; i < 3; i++)
			{
				printf("\n");
				printf("-------------------");
				printf("\n");

				for (j = 0; j < 3; j++)
				{
					printf(" %c\t", z[i][j]);
				}
			}
			printf("\n");
			printf("-------------------");



			if (z[0][0] == z[0][1] && z[0][1] == z[0][2])
				break;
			else if (z[1][0] == z[1][1] && z[1][1] == z[1][2]) {
				break;
			}
			else if (z[2][0] == z[2][1] && z[2][1] == z[2][2]) {
				break;
			}
			else if (z[0][0] == z[1][0] && z[1][0] == z[2][0]) {
				break;
			}
			else if (z[0][1] == z[1][1] && z[1][1] == z[2][1]) {
				break;
			}
			else if (z[0][2] == z[1][2] && z[1][2] == z[2][2]) {
				break;
			}
			else if (z[0][0] == z[1][1] && z[1][1] == z[2][2]) {
				break;
			}
			else if (z[0][2] == z[1][1] && z[1][1] == z[2][0]) {
				break;
			}
			else if (z[0][0] != '1' && z[0][1] != '2' && z[0][2] != '3' &&
				z[1][0] != '4' && z[1][1] != '5' && z[1][2] != '6' && z[2][0]
				!= '7' && z[2][1] != '8' && z[2][2] != '9') {
				break;
			}

			printf("\nplayer 2 enter the coordenit you want to play at : ");
			scanf_s(" %c", &move1);


			if (move1 == '1' && z[0][0] == '1')
				z[0][0] = player2;
			else if (move1 == '2' && z[0][1] == '2')
				z[0][1] = player2;
			else if (move1 == '3' && z[0][2] == '3')
				z[0][2] = player2;
			else if (move1 == '4' && z[1][0] == '4')
				z[1][0] = player2;
			else if (move1 == '5' && z[1][1] == '5')
				z[1][1] = player2;
			else if (move1 == '6' && z[1][2] == '6')
				z[1][2] = player2;
			else if (move1 == '7' && z[2][0] == '7')
				z[2][0] = player2;
			else if (move1 == '8' && z[2][1] == '8')
				z[2][1] = player2;
			else if (move1 == '9' && z[2][2] == '9')
				z[2][2] = player2;
			else {
				printf("\ninvalid move");
				printf("\nplease Reenter your move : ");
				scanf_s(" %c", &move1);
				if (move1 == '1' && z[0][0] == '1')
					z[0][0] = player2;
				else if (move1 == '2' && z[0][1] == '2')
					z[0][1] = player2;
				else if (move1 == '3' && z[0][2] == '3')
					z[0][2] = player2;
				else if (move1 == '4' && z[1][0] == '4')
					z[1][0] = player2;
				else if (move1 == '5' && z[1][1] == '5')
					z[1][1] = player2;
				else if (move1 == '6' && z[1][2] == '6')
					z[1][2] = player2;
				else if (move1 == '7' && z[2][0] == '7')
					z[2][0] = player2;
				else if (move1 == '8' && z[2][1] == '8')
					z[2][1] = player2;
				else if (move1 == '9' && z[2][2] == '9')
					z[2][2] = player2;
				else {
					printf("\ninvalid move");
					printf("\nplease Reenter your move : ");
					scanf_s(" %c", &move1);
					if (move1 == '1' && z[0][0] == '1')
						z[0][0] = player2;
					else if (move1 == '2' && z[0][1] == '2')
						z[0][1] = player2;
					else if (move1 == '3' && z[0][2] == '3')
						z[0][2] = player2;
					else if (move1 == '4' && z[1][0] == '4')
						z[1][0] = player2;
					else if (move1 == '5' && z[1][1] == '5')
						z[1][1] = player2;
					else if (move1 == '6' && z[1][2] == '6')
						z[1][2] = player2;
					else if (move1 == '7' && z[2][0] == '7')
						z[2][0] = player2;
					else if (move1 == '8' && z[2][1] == '8')
						z[2][1] = player2;
					else if (move1 == '9' && z[2][2] == '9')
						z[2][2] = player2;
					else {
						printf("\ninvalid move");
						printf("\nsee u next time :)");
						break;
					}
				}
			}
			for (i = 0; i < 3; i++)
			{
				printf("\n");
				printf("-------------------");
				printf("\n");

				for (j = 0; j < 3; j++)
				{
					printf("%c\t", z[i][j]);
				}
			}
			printf("\n");
			printf("-------------------");


			if (z[0][0] == z[0][1] && z[0][1] == z[0][2])
				break;
			else if (z[1][0] == z[1][1] && z[1][1] == z[1][2]) {
				break;
			}
			else if (z[2][0] == z[2][1] && z[2][1] == z[2][2]) {
				break;
			}
			else if (z[0][0] == z[1][0] && z[1][0] == z[2][0]) {
				break;
			}
			else if (z[0][1] == z[1][1] && z[1][1] == z[2][1]) {
				break;
			}
			else if (z[0][2] == z[1][2] && z[1][2] == z[2][2]) {
				break;
			}
			else if (z[0][0] == z[1][1] && z[1][1] == z[2][2]) {
				break;
			}
			else if (z[0][2] == z[1][1] && z[1][1] == z[2][0]) {
				break;
			}
			else if (z[0][0] != '1' && z[0][1] != '2' && z[0][2] != '3' &&
				z[1][0] != '4' && z[1][1] != '5' && z[1][2] != '6' && z[2][0]
				!= '7' && z[2][1] != '8' && z[2][2] != '9') {
				break;
			}

		}
	}
}

void checkwin()
{


	if (z[0][0] == 'o' && z[0][1] == 'o' && z[0][2] == 'o') {
		printf("\nwinner is the one playing with O");
		CO++;
	}
	else if (z[0][0] == 'x' && z[0][1] == 'x' && z[0][2] == 'x') {
		printf("\nwinner is the one playing with X");
		CX++;
	}
	else if (z[1][0] == 'o' && z[1][1] == 'o' && z[1][2] == 'o') {
		printf("\nwinner is the one playing with O");
		CO++;
	}
	else if (z[1][0] == 'x' && z[1][1] == 'x' && z[1][2] == 'x') {
		printf("\nwinner is the one playing with X");
		CX++;
	}
	else if (z[2][0] == 'o' && z[2][1] == 'o' && z[2][2] == 'o') {
		printf("\nwinner is the one playing with O");
		CO++;
	}
	else if (z[2][0] == 'x' && z[2][1] == 'x' && z[2][2] == 'x') {
		printf("\nwinner is the one playing with X");
		CX++;
	}
	else if (z[0][0] == 'o' && z[1][0] == 'o' && z[2][0] == 'o') {
		printf("\nwinner is the one playing with O");
		CO++;
	}
	else if (z[0][0] == 'x' && z[1][0] == 'x' && z[2][0] == 'x') {
		printf("\nwinner is the one playing with X");
		CX++;
	}
	else if (z[0][1] == 'o' && z[1][1] == 'o' && z[2][1] == 'o') {
		printf("\nwinner is the one playing with O");
		CO++;
	}
	else if (z[0][1] == 'x' && z[1][1] == 'x' && z[2][1] == 'x') {
		printf("\nwinner is the one playing with X");
		CX++;
	}
	else if (z[0][2] == 'o' && z[1][2] == 'o' && z[2][2] == 'o') {
		printf("\nwinner is the one playing with O");
		CO++;
	}
	else if (z[0][2] == 'x' && z[1][2] == 'x' && z[2][2] == 'x') {
		printf("\nwinner is the one playing with X");
		CX++;
	}
	else if (z[0][0] == 'o' && z[1][1] == 'o' && z[2][2] == 'o') {
		printf("\nwinner is the one playing with O");
		CO++;
	}
	else if (z[0][0] == 'x' && z[1][1] == 'x' && z[2][2] == 'x') {
		printf("\nwinner is the one playing with X");
		CX++;
	}
	else if (z[0][2] == 'o' && z[1][1] == 'o' && z[2][0] == 'o') {
		printf("\nwinner is the one playing with O");
		CO++;
	}
	else if (z[0][2] == 'x' && z[1][1] == 'x' && z[2][0] == 'x') {
		printf("\nwinner is the one playing with X");
		CX++;
	}
	else if (z[0][0] != '1' && z[0][1] != '2' && z[0][2] != '3' &&
		z[1][0] != '4' && z[1][1] != '5' && z[1][2] != '6' && z[2][0]
		!= '7' && z[2][1] != '8' && z[2][2] != '9') {

		printf("\nDraw");
		CD++;
	}
	char a;

	printf("\nwould u like to play again (y/n) : ");
	scanf_s(" %c", &a);
	if (a == 'y') {
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				z[i][j] = m[i][j];

			}
		}
		print();
		checkwin();
	}
	else {
		printf("See u next time :)");
		printf("\nThe score is : \nO:(%d) X:(%d) Draw:(%d)", CO, CX, CD);

	}
}

void main()
{

	print();
	checkwin();

	_getch();
}