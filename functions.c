#include "main.h"
/**
 *_putchar - function used to print character
 *@c: the character to be printed
 *Return: the character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 *print_percent - function used to print character
 *@list: the percentage to be printed
 *Return: the character
 */
int print_percent(__attribute__((unused))va_list list)
{
_putchar('%');
return (1);
}
/**
 * print_char - Prints character
 * @list: list of arguments
 * Return: number of characters printed.
 */
int print_char(va_list list)
{
return (_putchar(va_arg(list, int)));
}
/**
 * print_string - Prints a string
 * @list: list of arguments
 * Return: number of characters printed.
 */
int print_string(va_list list)
{
int i = 0;
char *s;

s = va_arg(list, char *);
if (s == NULL)
s = "(null)";
while (s[i] != '\0')
i += _putchar(s[i]);
return (i);
}
