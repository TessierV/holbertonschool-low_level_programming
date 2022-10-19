#include "main.h"

/**
 * main - adds
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, j, sum;

	sum = 0;
	a = 1;

	for (; a < argc; a++)
	{
		j = 0;

		while (argv[a][j] != '\0')
		{

			if (!isdigit(argv[a][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
