#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - switch alphabet lowercase except q and e
 *
 * Description: program will assign a random letter the variable i each time
 * it is executed.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a';

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
		putchar(i);
	putchar('\n');
	return (0);
}
