#include <stdio.h>
#include <string.h>
#include"main.h"

/**
 * _strlen - main
 *
 * Return: 0
 * @s: char string
 */


int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
