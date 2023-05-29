#include "main.h"
/**
 *print_binary - function used to print binary
 *@list: the number to be printed in binary
 *Return: zero
 */
#include "main.h"
int print_binary(va_list list)
{
unsigned int num;
int count = 0, i, b, size, zeros = 1;

num = va_arg(list, unsigned int);
if (num == 0)
{
_putchar('0');
return (1);
}
size = sizeof(unsigned int) * 8;
for (i = size - 1; i >= 0; i--)
{
if ((num >> i) & 1)
zeros = 0;
if (!zeros)
{
b = ((num >> i) & 1) + '0';
_putchar(b);
count++;
}
}
return (count);
}
