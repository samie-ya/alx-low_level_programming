#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint- convert binary to decimal
 *
 * @b: string used
 *
 * Return: Decimal
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	int j;
	int k = 0;
	int sum = 0;

	if (b == NULL)
		return (0);

	i = 0;
	while (b[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		if (b[j] == '1')
		{
			sum += ('1' - 48) << k;
		}
	k++;
	}
	return (sum);
}
