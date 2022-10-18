#include "main.h"
/**
 * main - print its name
 * @argc: argument count
 * @argv: argument vector for values
 *
 * Return: Always 0 (Success)
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int i;
	printf("%d\n", argc);
	for (i=0; i < argc - 1; i++)
	{
		printf("%s", argv[i]);
	}
	return (0);
}
