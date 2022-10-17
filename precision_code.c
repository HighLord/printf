#include "main.h"

/**
 * get_precision - Calculates the precision for printing
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: Precision.
 */
int get_precision(const char *format, int *i, va_list list)
{
	int value = *i + 1;
	int precision = -1;

	if (format[value] != '.')
		return (precision);

	precision = 0;

	for (value += 1; format[value] != '\0'; value++)
	{
		if (is_digit(format[value]))
		{
			precision *= 10;
			precision += format[value] - '0';
		}
		else if (format[value] == '*')
		{
			value++;
			precision = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = value - 1;

	return (precision);
}
