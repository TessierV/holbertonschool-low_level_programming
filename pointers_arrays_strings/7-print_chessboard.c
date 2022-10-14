#include "main.h"
/**
 * print_chessboard - print multi-dimensional array
 * @a: array
 *
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int ligne, row;

	for (ligne = 0; ligne < 8; ligne++)
	{
		for (row = 0; row < 8; row++)
		{
			printf("%c", a[ligne][row]);
		}
		printf("\n");
	}

}
