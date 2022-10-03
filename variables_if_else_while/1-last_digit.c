#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - determine if number is more than 5 or less than 6
 *
 * Description: program will assign a random number to the variable n each time
 * it is executed.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
		int n, lastint;
			srand(time(0));
				n = rand() - RAND_MAX / 2;
				lastint = n % 10;
					if (lastint < 6 && lastint != 0)
					printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastint);
					else if (lastint == 0)
					printf("Last digit of %d is %d and is 0\n", n, lastint);
					else if (lastint > 5)
					printf("Last digit of %d is %d and is greater than 5\n", n, lastint);
					return (0);
}


