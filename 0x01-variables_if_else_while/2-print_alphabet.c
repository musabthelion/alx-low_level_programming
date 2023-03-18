#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int ch;
	int che = '\n';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar(che);
	return (0);
}
