#include "holberton.h"
#include <stdlib.h>

/**
* string_nconcat - Concatenates two strings.
* @b: The first string.
* @b: The second string.
* @n: Unsigned int variable, like a limit.
*
* Return: To the value of pointer.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, d, f;
char *e;
char *x;

	if (s1
