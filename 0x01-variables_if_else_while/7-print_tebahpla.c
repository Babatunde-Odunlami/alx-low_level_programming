#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the alphabets in lower case
 *
 * Return: 0
*/
int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);
	return (0);
}
