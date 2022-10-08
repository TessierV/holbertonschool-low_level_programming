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

	for (i = '0'; i < '9'; i++)
	{
		for (j = '0'; j < '9'; j++)
		{
			if (i % 10 < j % 10)
			{
				putchar(i % 10 + '0');
				putchar(j % 10 + '0');
				if (i != 57 && j != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
