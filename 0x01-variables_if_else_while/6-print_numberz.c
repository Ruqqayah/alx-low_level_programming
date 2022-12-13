#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print alphabet in lowercase, then uppercase, and then new line
 *
 * Return: 0
 */

int main(void)
{
	int num = '0';

	while
		(num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
