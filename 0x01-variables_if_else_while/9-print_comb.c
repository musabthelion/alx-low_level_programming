#include <stdio.h>
/**
 * main - number combinations separted by comma
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		putchar(ch);
		if (ch < 57)
		{
			putchar(44);
			putchar (32);
		}
	}
	putchar('\n');
	return (0);
}
