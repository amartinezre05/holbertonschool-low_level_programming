#include <stdarg.h>
#include <stdio.h>
/**
* print_all -  a function that prints anything.
* @format: Constant variable type char.
* Return: Value of type void.
*/
void print_all(const char * const format, ...)
{
int i = 0;
char *s;
va_list list;
va_start(list, format);

	while (format == NULL)
	{	printf("\n");
		return;
	}
	while (format[i] != '\0')
	{
	switch (format[i])
		{
		case 'c':
			printf("%c", (char)va_arg(list, int));
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			break;
		case 'f':
			printf("%f", (float)va_arg(list, double));
			break;
		case 's':
			s = va_arg(list, char*);
			if (s != NULL)
			{	printf("%s", s);
			break;
			}
			else
			{	printf("(nil)");
			break;
			}
		}
	if ((format[i] == 'c' || format[i] == 'i' ||
format[i] == 'f' || format[i] == 's') && (format[i + 1] != '\0'))
		printf(", ");
	i++;
	}
printf("\n");
va_end(list);
}
