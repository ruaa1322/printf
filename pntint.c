#include "main.h"

/**
 * pntint - function that prints an integer
 * @value: argument
 * Return: t_len
 */

int pntint(va_list value)
{
	int n = va_arg(value, int); /* retrieve the integer from value */
	int t_len = 0; /*initialize total length*/
	int dg, i = 0; /*i is counter, dg is the current digit*/
	char dg_char; /*used to convert int to char*/
	char buf[36];

	if (n < 0) /*if integer is negative*/
	{
		t_len += put_char('-');
		n = -n;
	}

	if (n == 0)
	{
		t_len += put_char('0');
		return (t_len);
	}

	while (n > 0) /*while the n > 0*/
	{
		dg = n % 10;
		dg_char = '0' + dg;
		buf[i] = dg_char;
		n /= 10;
		i++;
	}

	for (i--; i >= 0; i--)
	{
		t_len += put_char(buf[i]);
	}

	return (t_len);
}
