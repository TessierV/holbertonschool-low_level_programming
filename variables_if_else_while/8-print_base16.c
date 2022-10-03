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
	char i;

	for (i = '1'; i <= '9'; i++)
		putchar(i);
	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
