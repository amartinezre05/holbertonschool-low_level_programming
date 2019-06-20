/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
char i;
i = 'a';
while (i <= 'z')
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
