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
{
_putchar('0');
return (1);
}
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
/**
 * print_unsigned -- prints unsigned integer
 * @list: argument list
 *
 * Return: number printed
*/
int print_unsigned(va_list list)
{
int div = 1, count = 0, digit;
int num_digits = 0;
int i;
unsigned int u = va_arg(list, unsigned int);

if (u == 0)
_putchar('0');
num_digits = count_digits(u);
for (i = 1; i < num_digits; i++)
div = div * 10;
while (div != 0)
{
digit = u / div;
_putchar(digit + '0');
u = u % div;
div = div / 10;
count++;
}
return (count);
}
/**
 *print_binary - function used to print binary
 *@list: the number to be printed in binary
 *Return: zero
 */
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
