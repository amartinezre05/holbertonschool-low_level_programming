#include "holberton.h"
/**
 * print_alphabet - Print all the letters.
 *
 * Return: void.
 */
void print_alphabet(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
