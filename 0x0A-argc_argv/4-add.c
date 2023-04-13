#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 * main- add arguments
 * @argc: arg count
 * @argv: arg vector
 * Return: 0, 1
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if  (argc <= 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0';  j++)
			{
				if ((argv[i][j] < '0') || (argv[i][j] > '9'))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
