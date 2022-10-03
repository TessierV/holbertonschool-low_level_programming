#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - determine if alphabet
 *
 * Description: program will assign a random letter the variable n each time
 * it is executed.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a';

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
