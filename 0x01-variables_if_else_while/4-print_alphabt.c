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
		if (ch == 'e')
			ch++;
		else
		{
			if (ch == 'q')
				ch++;
		}
		putchar(ch);
	}
	putchar(che);
	return (0);
}
