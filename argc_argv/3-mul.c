#include "main.h"

/**
 * main - print	all arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		c = a * b;
		printf("%d\n", c);
		return (0);
	}
}
