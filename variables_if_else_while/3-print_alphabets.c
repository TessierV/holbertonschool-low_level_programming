#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - switch alphabet lowercase to uppercase
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
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
		printf('\n');
	return (0);
}
