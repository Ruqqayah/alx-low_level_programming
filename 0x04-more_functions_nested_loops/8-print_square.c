#include "main.h"

/**
 * print_square - Function with int type one argument
 * @size: 1st int argument
 *
 * Description: Nested loops to pring square with new line
 * Return: 0
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
