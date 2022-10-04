#include "main.h"

#include <stdio.h>
/**
 * main - print_alphabet a lowercase alphabet
 *
 * Description: 
 * 
 * Return: new line 
 */
char print_alphabet(void)	
{
		char i = 'a';
		
		for(i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
		putchar('\n');
		return (0);
}
