#include <stdio.h>
/**
*  main - Entry Point
*  Return: 0
*/

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;
		printf("Size of char: %lu.\n",	(unsigned char)sizeof (c));
		printf("Size of int: %lu.\n",  (unsigned int)sizeof (i));
		printf("Size of long int: %lu.\n",  (unsigned long int)sizeof (li));
		printf("Size of long long int: %lu.\n",  (unsigned long long int)sizeof (lli));
		printf("Size of float: %f.\n",  (float)sizeof (f));
		printf("Size of char: %ls.\n",  (signed char)sizeof (c));
		printf("Size of int: %ls.\n",  (signed int)sizeof (i));
		printf("Size of long int: %ls.\n",  (signed long int)sizeof (li));
		printf("Size of long long int: %ls.\n",  (signed long long int)sizeof (lli));
		printf("Size of float: %f.\n",  (float)sizeof (f));

	return (0);
}
