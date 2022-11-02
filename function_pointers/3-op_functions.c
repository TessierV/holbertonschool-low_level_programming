#include "3-calc.h"
/**
 * op_func - Calculation
 * @a: first variable
 * @b: second variable
 *
 * Return: result
 */

/**
 * op_add - addition
 * @a: variable
 * @b: second variable
 *
 * Return: result;
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @a: variable
 * @b: second variable
 *
 * Return: result;
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: variable
 * @b: second variable
 *
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: variable
 * @b: variable
 *
 * Return: result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo
 * @a: variable
 * @b: variable
 *
 * Return: result
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

