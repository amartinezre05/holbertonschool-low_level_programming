#include "holberton.h"
/**
 * print_alphabet - Print all the letters.
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
int i;
char x;
while (i <= 9)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
i++;
}
}
