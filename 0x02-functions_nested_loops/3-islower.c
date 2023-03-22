#include <stdio.h>
#include"main.h"
/**
 * _islower - function routione
 * @c: definition
 * Return: 1 incase c is lower else Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
