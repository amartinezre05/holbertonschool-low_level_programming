#include "holberton.h"

/**
 * _puts - Prints the strings.
 * @str: The character to be printed
 *
 * Return: To the value of void.
 */
void _puts(char *str)
{
int i;
i = 0;
while (str[i] != 0)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
