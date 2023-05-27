#include "main.h"
/**
 * _print_int - function to print an int
 * @list: the integer
 * Return: int
 */
int _print_int(va_list list)
{
	int dec = va_arg(list, int);
	int div = 1, count = 0, digit;
	int num_digits = 0;
	int i;

	if (dec == 0)
		_putchar('0');

	if (dec < 0)
	{
		_putchar('-');
		dec = dec * (-1);
		count++;
	}
	num_digits = count_digits(dec);

	for (i = 1; i < num_digits; i++)
		div = div * 10;

	while (div != 0)
	{
		digit = dec / div;
		_putchar(digit + '0');
		dec = dec % div;
		div = div / 10;
		count++;
	}
	return (count);
}
/**
 * count_digits - used to count number of digits
 * @num: number of digits to be counted
 * Return: count of digits
 */
int count_digits(int num)
{
	int count = 0;

	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}
