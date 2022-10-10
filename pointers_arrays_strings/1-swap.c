#include "main.h"
/**
 * swap_int - swapping pointer
 * @n : pointer
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	*b = *a;
	*b = i;

}
