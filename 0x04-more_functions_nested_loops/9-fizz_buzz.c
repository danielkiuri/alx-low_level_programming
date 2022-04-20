#include "main.h"

/**
* main - Solution for fizz-buzz problem
*
* Return: 0 - Success
*/

int main(void)
{
	int i;

	printf("%d", 1);
	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		elseif(i % 3 == 0)
			printf(" Fizz");
		elseif(i % 5 == 0)
			printf(" Buzz");
		else
			printf(" %d", 1);
	}
	printf("\n");
	return (0);
}

