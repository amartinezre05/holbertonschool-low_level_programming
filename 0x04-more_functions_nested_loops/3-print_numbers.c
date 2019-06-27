#include "holberton.h"

/**
 * print_numbers - Print the numbers to the list.
 *
 * Return: To the value of void.
 */
void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
