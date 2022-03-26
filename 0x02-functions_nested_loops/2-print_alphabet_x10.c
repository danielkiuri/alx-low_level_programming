#include "main.h"

/**
* main - print_alphabet_x10 - func
*
* print_alphabet_x10 - function to print alphabets 10 times
*
* Return: Always 0
*/
void print_alphabet_x10(void)
{
	int b = 0;

	while (b < 10)
	{
		char a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		b++;
	}
}
