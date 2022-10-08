#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - print all single aphabet in reverse
 *
 * Description: with a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			putchar(i % 10 + '0');
			putchar(j % 10 + '0');
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
