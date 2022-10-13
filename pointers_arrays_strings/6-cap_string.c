#include "main.h"
/**
 * cap_string - capitalize the first letter
 * @str: pointer
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int i;
	
	for (i = 0; str[i]; i++)
	{
		if((str[i - 1] == ' ' || str[i - 1] == 9 ||str[i - 1] == 10 ||
				str[i - 1] == 44 || str[i - 1] == 59 || str[i - 1] == 46 ||
				str[i - 1] == 33 || str[i - 1] == 63 || str[i - 1] == 34 ||
				str[i - 1] == 41 || str[i - 1] == 123 ||
				str[i - 1] == 125) && (str[i] == 0 && str[i] >= 97 && str[i] <= 122))
		{
			str[i] = str[i] - 32;
		}
	}
	return(str);
}
