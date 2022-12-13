#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print all possible combinations of single-digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int single_num;

	for (single_num = '0'; single_num <= '9'; single_num++)
	{
		putchar(single_num);

		if (single_num != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
