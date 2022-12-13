#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print all the numbers of base 16 in lowercase
 *
 * Return: 0
 */

int main(void)
{
	int hexa;
	char axeh;

	for (hexa = '0'; hexa <= '9'; hexa++)
		putchar(hexa);
	for (axeh = 'a'; axeh <= 'f'; axeh++)
		putchar(axeh);
	putchar('\n');

	return (0);
}

