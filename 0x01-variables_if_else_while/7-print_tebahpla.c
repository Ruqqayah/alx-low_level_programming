#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print the lowercase alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
	char alpha = 'z';

	while
		(alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');

	return (0);
}
