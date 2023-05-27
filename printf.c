#include"main.h"
/**
 *_printf - function the same as printf function
 *@format: the format that will be checked
 *Return: the required output
 */
int _printf(const char *format, ...)
{
	int i, count = 0;
	char *st;
	va_list list;

	if (format == NULL || (format[0] == '%' && !format[1]))
		return (-1);
	va_start(list, format);
	for (i = 0; format[i] != '\0'; ++i)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					_putchar(va_arg(list, int)), i++, count++;
					break;
				case 's':
					st = va_arg(list, char *);
					_puts(st), i++, count++;
					break;
				case 'd':
				case 'i':
					count += _print_int(list), i++;
					break;
				case '%':
					_putchar('%'), count++, i++;
					break;
				default:
					_putchar(format[i]), count++;
					break;
			}
		}
		else
		{
			_putchar(format[i]), count++;
		}
	}
	va_end(list);
	return (count);
}
