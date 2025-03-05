#include"main.h"
#include<stdio.h>
#include"string.h"

/**
*_strchr-functionthatlocatesacharacterinastring.
*@s:string
*@c:charactertobelocated
*Return:Always0.
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}

		if (c == '\0')
		{
			return (&s[i]);
		}
		
	
	return (0);
}
