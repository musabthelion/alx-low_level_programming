#include <stdio.h>
/**
 * _isupper - charater is upper case
 * @c: is a character
 * Return: 1 if true ,0 incase of false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
