#include <stdio.h>
#include"main.h"
/**
 * print_alphabet_x10 - Entry point
 * void
 */

void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	while (i < 10)
	{
		for (ch = 97; ch < 123; ch++)
		{
		putchar (ch);
		}
	putchar ('\n');
	}
}
