#include <stdio.h>
#include"main.h"
/**
 * _isalpha - Function
 * @c :definiton
 * Return: 1 incase of alphabet  else Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
