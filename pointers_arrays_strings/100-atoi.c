#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: an integer
 **/

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int isInt= 0;
	unsigned int NotInt = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			sign *= -1;
		}

		while (s[i] >= 48 && s[i] <=57)
		{
			isInt = 1;
			NotInt = (NotInt * 10) + (s [i] - '0');
			i ++;
		}	
		
		if (isInt == 1)
		{
			break;
		}
		
		i++;
	}
	NotInt *= sign;
	return (NotInt);
}
