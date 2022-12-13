#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print alphabet in lowercase without two alphabeths.
 *
 * Return: 0
 */

int main(void)
{
	char alpha;
	char alphe = 'e';
	char alphq = 'q';

	for (alpha = 'a'; alpha <= 'z'; alpha++)

	{
		if (alpha != alphe && alpha != alphq)
			putchar(alpha);
	}
	putchar('\n');

	return (0);
}
