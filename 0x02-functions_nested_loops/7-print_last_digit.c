#include "main.h"
/**
 * print_last_digit - print that last digit of a number
 * code by Babatunde
 * @n: is the number in question
 * Return: 0
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
