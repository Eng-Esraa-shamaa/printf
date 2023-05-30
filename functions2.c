#include "main.h"
/**
 * _print_int - function to print an int
 * @list: the integer
 * Return: int
 */
int _print_int(va_list list)
{
int dec, rem, dev = 1, len = 0;
unsigned int num;

dec = va_arg(list, int);
if (dec < 0)
{
len = len + _putchar('-');
num = dec * -1;
}
else
{
num = dec;
}
while (num / dev > 9)
dev = dev * 10;
while (dev != 0)
{
rem = num / dev;
len += _putchar(rem + '0');
num = num % dev;
dev = dev / 10;
}
return (len);
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
int len = 0;
unsigned int num;
unsigned int dev = 1, rem;

num = va_arg(list, unsigned int);
while (num / dev > 9)
dev = dev * 10;
while (dev != 0)
{
rem = num / dev;
len += _putchar(rem + '0');
num = num % dev;
dev = dev / 10;
}
return (len);
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
