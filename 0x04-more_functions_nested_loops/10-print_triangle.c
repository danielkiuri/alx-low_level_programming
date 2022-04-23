trinagle.c
#include "main.h"

/**
* print_triangle - Prints a triangle of a determined size.
* @size: Size of the triangle.
*
* Return: There is no return value 9void).
*/

void print_triangle(int size)
{
	int i;
	int k;
	int j;

	if (size > 0)
	{
		for (1 = 1; i <= size; i++)
		{
			for (j = 1; j <= (size - i); j++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

