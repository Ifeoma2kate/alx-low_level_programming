#include "main.h"
#include <stddef.h>


/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string containing digits.
 *
 * Return: The converted number, or 0 if b is NULL or contains
 * characters other than '0' 0r '1'.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		result = 2 * result + (b[i] - '0');
	}

	return (result);
}

