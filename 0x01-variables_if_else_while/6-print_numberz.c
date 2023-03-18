#include <stdio.h>
/**
 * main - pritn number
 * Return: 0
 */

int main(void)
{
	int num;
	int che = '\n';

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar(che);
	return (0);
}
