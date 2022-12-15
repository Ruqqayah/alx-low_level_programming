#include <stdio.h>

/**
 * main - Finds and prints the first 98 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	long int a, b, c, i;

	a = 1;
	b = 2;

	printf("%li, %li", a, b);
	for (i = 0; i <= 98; i++)
	{
		c = a + b;
		a = b;
		b = c;

		printf("%li", c);

		if (c < 135301852344706746049)
			printf(", ");
	}
	return (0);
}
