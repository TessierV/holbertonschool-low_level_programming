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
	int i;

	for (i = '0'; i <= '9'; i++)
	{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(',');
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
