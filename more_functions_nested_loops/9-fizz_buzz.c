#include <stdio.h>
/**
 * fizz_buzz - depending of the x 
 *
 *Description: the x will print & list depending of %
 *Return: the result
 */
int fizz_buzz(void)
{
	int x;

	for (x = 0; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("Fizz Buzz");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz"); 
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", x);
		}
		printf("\n");
		return(0);
	}
}
