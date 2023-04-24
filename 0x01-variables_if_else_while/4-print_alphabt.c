#include <stdio.h>
/**
 * main: Entry point
 * 'print alphabet except a and e'
 * Return: Always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
vim -r 4-print_alphabt.c	putchar ('\n')
