#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* int binary_to_uint - a function that converts a binary number to an int.
* @b: Variable the type string.
*
* Return: The number unsigned int.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int i;
unsigned int a;
unsigned int acu = 1;
unsigned int len = 0;
unsigned int num = 1;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);
	}
	len = i;
	for (a = 0; b[a] != '\0'; a++)
	{
		while (len > 0)
		{
		acu = 2 * acu;
		len--;
		}
		num = (b[a] - '0') * acu;
	}
return (num);
}
