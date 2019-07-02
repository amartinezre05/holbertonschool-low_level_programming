#include "holberton.h"

/**
 * rev_string - Reverse a string.
 * @s: The pointer
 *
 * Return: To the value of void.
 */
void rev_string(char *s)
{
int i = 0;
int cont = 0;
int cont2 = 0;
char A[500];
while (s[i] != 0)
{
i++;
}
cont = i;
for (i = cont - 1; i >= 0; i--)
{
A[cont2] = s[i];
cont2++;
}
for (i = 0; i < cont; i++)
{
s[i] = A[i];
}
}
