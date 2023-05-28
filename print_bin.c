#include "main.h"
/**
 *print_binary - function used to print binary
 *@num: the number to be printed in binary
 *Return: zero
 */
void print_binary(unsigned int num)
{
	int bin[32];
	int i, b;

	if (num == 0)
	{
		_putchar('0');
	}
	for (i = 0; num > 0; i++)
	{
		bin[i] = num % 2;
		num = num / 2;
	}
	for (i = i - 1; i >= 0; i--)
{
		b = bin[i] + '0';
_putchar(b);
}
}
