#include <stdio.h>
#include"main.h"

/**
 * swap_int - funciton
 * @*a: pointer
 * @*b:  pointer
 * @a: int
 * @b: int
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
