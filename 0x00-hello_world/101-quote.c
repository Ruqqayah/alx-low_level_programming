#include <stdio.h>
/**
 * main - Print a C program, followed by a new line and to the standard error
 *
 * Return: 1
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
