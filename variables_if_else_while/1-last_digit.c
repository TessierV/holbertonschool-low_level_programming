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
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					if (n < 6 && 0 )
					printf("is %d and is less than 6 and not 0\n", n);
					else if (n == 0)
					printf("is %d and is 0\n", n);
					else if(n > 5)
					printf("is %d and is greater than 5",n);	
					else
					printf("%d is not a number\n", n);
					return (0);
}
