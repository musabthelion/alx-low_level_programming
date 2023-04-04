#include<stdio.h>
#include<string.h>
#include"main.h"

/**
 * rev_string - reverse the string
 * @s: ponter to charater
 */


void rev_string(char *s)
{
	int r, i, size;
	char temp;

	size = strlen(s);
	for (i = size - 1, r = 0; i >= ((size - 1) / 2); i--, r++)
	{
		temp = s[i];
		s[i] = s[r];
		s[r] = temp;
	}
	putchar('\n');
}
