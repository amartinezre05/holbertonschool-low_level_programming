#include <stdarg.h>
#include <stdio.h>

/**
* print_strings -  a function that prints strings.
* @n: Constant variable type int.
* @separator: Constant variable type char.
*
* Return: Value of type void.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
char *s;
va_start(list, n);

	for (i = 0; i < n; i++)
	{
	s = va_arg(list, char*);
		if (s != NULL)
		{
		printf("%s", va_arg(list, char*));
		}
		else
		{
		printf("(nil)");
		}
		if (separator != NULL && i < n - 1)
		{
		printf("%s", separator);
		}
	}
printf("\n");
}
