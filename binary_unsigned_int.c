#include "main.h"

/**
 * printf_unsigned - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int printf_unsigned(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
int dig, last = n % 10, digit, exp = 1;
int  i = 1;
n = n / 10;
dig = n;
if (last < 0)
{
_putchar('-');
dig = -dig;
n = -n;
last = -last;
i++;
}
if (dig > 0)
{
while (dig / 10 != 0)
{
exp = exp * 10;
dig = dig / 10;
}
dig = n;
while (exp > 0)
{
digit = dig / exp;
_putchar(digit + '0');
dig = dig - (digit * exp);
exp = exp / 10;
i++;
}
}
_putchar(last + '0');
return (i);
}

