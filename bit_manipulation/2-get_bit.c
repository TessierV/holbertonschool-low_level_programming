#include "main.h"
/**
 *
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (8 * sizeof(n)))
	{
		return (-1);
	}
	else 
	{
		return (n >> index & 1);
	}
}
