#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
  * main - Prints the number of args
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */


int main(int argc, char *argv[])
{
       	if (argc >1)
	{
		for(i = 0; i <argc; i++)
		{
			e = argv [i];

			for (k = 0; k < strlen(e); k++)
			{
				if (e[k] < 48 || e[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			
			}
			sum += atoi(e);
			e++;
		}	
		printf("%d\n",sum);
	}
	else 
	{
		printf("0\n");
	}
	return(0);
} 
