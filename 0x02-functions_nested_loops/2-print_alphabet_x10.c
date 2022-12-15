#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet in lowercase 10 times
 */

void print_alphabet_x10(void)
{
	int tentimes = 0;
	char alpha;

	while
		(tentimes < 10)
	{

		char alpha = 'a';

		while
			(alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}

		_puchar(tentimes);
		tentimes++;

		_putchar('\n');
	}
}
