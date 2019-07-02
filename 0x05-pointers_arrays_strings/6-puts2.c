#include "holberton.h"

/**
 * puts2 - Print one char out of 2 of a string.
 * @str: The pointer
 *
 * Return: To the value of void..
 */
void puts2(char *str)
{
int i;
for (i = 0; str[i]; i++)
{
if (str[i] % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
