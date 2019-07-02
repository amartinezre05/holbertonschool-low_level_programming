#include "holberton.h"

/**
 * print_rev - Print in reverse a string.
 * @s: The information to the pointer.
 *
 * Return: To the value of void.
 */
void print_rev(char *s)
{
int i;
int cont;
int rev;
cont = 0;
i = 0;
while (s[i] != 0)
{
i++;
}
cont = cont + i;
rev = cont;
while (s[rev] >= 0)
{
_putchar(s[rev]);
rev--;
}
_putchar('\n');
}
