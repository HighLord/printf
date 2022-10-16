#include "main.h"
/**
 * _abs - calculates the absolute value.
 * @number: input.
 * Return: value.
 */
int _abs(int number)
{
if (number < 0)
return (-1 * number);
else
return (number);
}
/**
 * contadordigit - counts the digits.
 * @number: input integer
 * Return: digit count
 */
int contadordigit(int number)
{
int count = 0;
int number1 = number;
if (number <= 0)
count += 1;
while (_abs(number1 != 0))
{
number1 = number1 / 10;
count++;
}
return (count);
}   
/**
 * integer - a function that prints an integer.
 * @number: input integer
 * Return: digit count
 */
int integer(int number)
{
unsigned int value;
int count;
count = contadordigit(number);
if (number < 0)
{
_putchar('-');
value = -number;
}
else
value = number;
if (value >= 10)
integer(value / 10);
_putchar(value % 10 + '0');
return (count);
}
/**
 * printint - prints a number
 * @format: format to print number
 * @pa: va_list with number to print
 * Return: number of characters printed
 */
int printint(char *format, va_list pa)
{
int number = va_arg(pa, int);
int digit;
(void)format;
digit = integer(number);
return (digit);
}
