#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers 0 to 9
 *
 * c - character
 *
 * Return: numbers 0 to 9
 */

void print_numbers(void)
{
	char c = '0';

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	putchar('\n');
}
