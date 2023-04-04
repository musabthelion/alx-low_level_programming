#include <stdio.h>
#include<string.h>
#include "main.h"

/**
 * puts2 - function
 *
 * @str:  string
 */

void puts2(char *str)
{
	int i, size;

	size = strlen(str);
	for (i = 0; i < size; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
