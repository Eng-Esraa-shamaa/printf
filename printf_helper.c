#include "main.h"
/**
 * print_helper - hel function used
 * @format: style format
 * @list: list
 * @funcs: functions used
 * Return: length of paramter
 */
int print_helper(const char *format, specs funcs[], va_list list)
{
	int i = 0, j = 0, count = 0;
	bool flag = false;

	if (format[i] == '\0')
		return (-1);

	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			for (j = 0; funcs[j].sym != NULL; j++)
			{
				if (format[i + 1] == funcs[j].sym[0])
				{
					count += funcs[j].f(list);
					flag = true;
					break;
				}
			}
			if (flag == false && format[i + 1] != ' ')
			{
				count += _putchar('%');
				count += _putchar(format[i + 1]);
			}
			i += 2;
		}
		else
		{
			count += _putchar(format[i]);
			i++;
		}
	}
	return (count);
}
