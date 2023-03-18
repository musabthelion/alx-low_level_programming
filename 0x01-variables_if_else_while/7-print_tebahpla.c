#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int ch;
	int che = '\n';

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar(che);
	return (0);
}
