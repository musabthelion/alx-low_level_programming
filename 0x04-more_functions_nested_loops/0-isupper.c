#include <stdio.h>
/**
 * _isupper - charater is upper case
 * @c: is a character
 * Return: 0
 */

int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		putchar(49);
	else
		putchar(48);
	return (0);
}
