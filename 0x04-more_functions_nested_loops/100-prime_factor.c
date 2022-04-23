#include "main.h"

/**
* main - Return the largest prime factor for 612852475143 .
*
* Return: Always 0.
*/
int main(void)
{
	long int i;
	long int n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		if (n % 1 == 0)
		{
			n /= i;
			i--;
		}
	}
	printf("%1d\n", i);
	return (0);
}

