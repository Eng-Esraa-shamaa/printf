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
{"b", print_binary},
{"x", print_lowhex},
{"X", print_uphex},
{"o", print_octal},
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
