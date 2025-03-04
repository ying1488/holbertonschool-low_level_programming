#include"main.h"
#include<stdio.h>
#include"string.h"

/**
*_strchr - function that locates a character in a string.
*@s:string
*@c:charactertobelocated
*Return:Always0.
*/

unsigned int _strspn(char *s, char *accept)
{
       	int i, len, j;
	len = 0;
	for (i = 0; s[i] != '\0'; i++)
    	{
		for (j = 0; accept[j] != '\0'; j++)
	       	{
		       	if (s[i] == accept[j]) 
			{
                        	len++;
                        	break;
			}
         		 if (s[i] != accept[j])
            		{
                		return (len);
            		}
    		}
	}
return (len);
}
