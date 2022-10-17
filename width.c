#include "main.h"

/**
 * get_width - Calculates the width for printing
 * @format: Formatted string in which to print the arguments.
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: width.
 */
int get_width(const char *format, int *i, va_list list)
{
	int value;
	int width = 0;

	for (value = *i + 1; format[value] != '\0'; curr_i++)
	{
		if (is_digit(format[value]))
		{
			width *= 10;
			width += format[value] - '0';
		}
		else if (format[value] == '*')
		{
			value++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = value - 1;

	return (width);
}
