#include "holberton.h"

/**
 * more_numbers - Print the numbers to the list.
 *
 * Return: To the value of void.
 */
void more_numbers(void)
{
int i;
int j;
int pr;
int se;
i = 0;
while (i <= 9)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
{
pr = j / 10;
se = j % 10;
_putchar(pr + '0');
_putchar(se + '0');
}
else
{
_putchar(j + '0');
}
}
i++;
_putchar('\n');
}
}
