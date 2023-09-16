#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len = 0, len2 = 0;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("%d", len);
	printf("%d", len2);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	return (0);
}
