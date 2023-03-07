#include "main.h"

/**
 * more_numbers - function declaration
 * Description: print 1-14, 10 times
 * Return: void
 */

void more_numbers(void);

/**
 * more_numbers - function definition
 * Description: prints 1-14, ten times
 * Return: void
 */

void more_numbers(void)
{
	int counter;
	int number;

	for (counter = 0; counter <= 9; counter++)

	{
		if (number > 9)
		{
			_putchar(number / 10 + '0');
		}
		_putchar(number % 10 + '0');
	}
	_putchar('\n');
}
