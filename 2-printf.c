#include "main.h"
/**
 * print_int - Print integers
 * @buffer: Buffer array that handles print
 * Return: No of characters printed
 */
int print_int(va_list types, char buffer[], ...)
{
	int my_int = BUFF_SIZE - 2;
	int  j = 0;
	long int k = va_arg(types, long int);
	unsigned long int num;

	k = convert_size_number(n, size);

	if (k == 0)
		buffer[my_int--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';
	num = (unsigned long int)k;

	if (k < 0)
	{
		num = (unsigned long int)((-1) * k);
		j = 1;
	}

	while (num > 0)
	{
		buffer[my_int--] = (num % 10) + '0';
		num /= 10;
	}

	my_int++;

	return (write_number(j, my_int, buffer));
}
