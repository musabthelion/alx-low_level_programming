#include <stdio.h>
#include"main.h"
/**
 * _abs - absolute function
 * @i: is an integer
 * Return: absolute value
 */

int _abs(int i)
{
	if (i < 0)
	{
		i = -i;
	}
	return (i);
}
