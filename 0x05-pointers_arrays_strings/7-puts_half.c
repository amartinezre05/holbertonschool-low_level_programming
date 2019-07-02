#include "holberton.h"

/**
 * puts_half - Print half of a string.
 * @str: The pointer.
 *
 * Return: To the value of void..
 */
void puts_half(char *str)
{
int i;
int cont;
int pr;
cont = 0;
for (i = 0; str[i] != 0; i++)
{
}
cont = cont + i;
if (cont % 2 == 0)
{
for (pr = (cont / 2); pr <= cont; pr++)
{
_putchar(str[pr]);
}
}
else
{
for (pr = ((cont - 1) / 2); pr <= cont; pr++)
{
_putchar(str[pr]);
}
}
_putchar('\n');
}
