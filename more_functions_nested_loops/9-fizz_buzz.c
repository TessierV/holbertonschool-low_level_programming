#include <stdio.h>
/**
 * fizz_buzz - depending of the x 
 *
 *Description: the x will print & list depending of %
 *Return: the result
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x != 100)
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
			printf(" ");
		}	
	}
	printf('\n');
	return (0);
}
