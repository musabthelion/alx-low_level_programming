#include "main.h"
#include<stdlib.h>

/**
 * create_array - main function
 * @size: varaiable
 * @c : charactrer variable
 * Return: pointer to an array, Null if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *string;

	string = malloc(sizeof(char) * size);
	if (size == 0 || string == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		string[i] = c;
	return (string);
}
