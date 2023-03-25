#include <stdio.h>
/**
 * _isdigit - is a digit between 0 and 9
 * @c: is a character
 * Return: 1 if true ,0 incase of false
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	return (1);
	else
	return (0);
}
