#include "main.h"
/**
 *print_binary - function used to print binary
 *@list: the number to be printed in binary
 *Return: zero
 */
#include "main.h"
int print_binary(va_list list)
{
unsigned int n, i, sum = 0, y = 2147483648;
unsigned int b[32];
int count = 0;

n = va_arg(list, unsigned int);
b[0] = n / y;
for (i = 1; i < 32; i++)
{
y = y / 2;
b[i] = (n / y) % 2;
}
for (i = 0; i < 32; i++)
{
sum = sum + b[i];
if (sum || i == 31)
{
_putchar(b[i] + '0');
count++;
}
}
return (count);
}
