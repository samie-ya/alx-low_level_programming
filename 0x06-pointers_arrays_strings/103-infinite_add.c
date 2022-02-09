#include "main.h"
#include <stddef.h>

/**
*
*
*
*
*
*
*
*
*
*
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, carry, len1, len2, max;
	char *res;

	rev_string(n1);
	rev_String(n2);
	len1 = _strlen(n1);
	len2 = _strlen(n2);
	(len2 > len1) ? max = len2 : max = len1;
	for (i = 0; i < max; i++)
	{
		r[i] = n1[i] + n2[i] + carry;
		if (r[i] % 10 >= 0)
		{
			res[i] = r[i] % 10;
			carry = r[i] / 10; 
		}
		rev_string(res);
	}
	return (res);
}

/**
* rev_string- reverses a string
*
* @s: parameter used
*
* Return: nothing
*/
void rev_string(char *s)
{
	int i = 0, j, k, l;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}
	j = 0;
	k = i - 1;
	for (l = j; l < k; l++)
	{
		temp = s[l];
		s[l] = s[k];
		s[k] = temp;
		k--;
	} 
}

/**
* _strlen - to check the length of a string
*
* @str: the string to be checked
*
* Return: the length of the string
*/

int _strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
