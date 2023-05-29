#include "main.h"
/**
 * _printf - recives parameters to be printed
 * @format: list
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
int count;
specs funcs[] = {
{"c", print_char},
{"s", print_string},
{"%", print_percent},
{"d", _print_int},
{"i", _print_int},
{"u", print_unsigned},
{NULL, NULL}
};
va_list list;

if (format == NULL)
return (-1);
va_start(list, format);
count = print_helper(format, funcs, list);
va_end(list);
return (count);
}
/**
 *print_helper - hel function used
 *@format: style format
 *@list: list
 *@funcs: functions used
 *Return: success
 */
int print_helper(const char *format, specs funcs[], va_list list)
{
int i = 0, j = 0, count = 0;

if (format[i] == '\0')
{
return (-1);
}
while (format[i])
{
if (format[i] == '%')
{
if (format[i + 1] == '\0')
{
return (-1);
}
for (; funcs[j].sym ; j++)
{
if (format[i + 1] == funcs[j].sym[0])
{
count += funcs[j].f(list);
break;
}
else if (format[i + 1] == '%')
{
count += _putchar('%');
break;
}
}
if (funcs[j].sym == NULL && format[i + 1] != ' ')
{
count += _putchar('%'), count += _putchar(format[i + 1]);
}
i += 2;
}
else
{
_putchar (format[i]), count++, i++;
}
}
return (count);
}
