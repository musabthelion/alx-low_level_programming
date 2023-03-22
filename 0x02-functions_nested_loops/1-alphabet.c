#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry Point
 * void
 */

void print_alphabet(void)
{
	char i;

	for (i = 97; i < 123; i++)
	{
	putchar (i);
	}
	putchar ('\n');
}
