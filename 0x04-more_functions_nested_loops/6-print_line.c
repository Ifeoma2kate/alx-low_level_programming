#include "main.h"

/**
 * print_lines - draws a staight linein the terminal
 * @n: number of times the character _ should be printed
 */
void print_lines(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
       	else
	{
		int i;
						
		for (i == 1; i <= n; i++;)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
