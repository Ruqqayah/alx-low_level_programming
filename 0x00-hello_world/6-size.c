#include <stdio.h>
/**
 * main - C program that prints the sizes of data types
 *
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu byte(s)\n", a);
	printf("Size of a int: %lu byte(s)\n", b);
	printf("Size of a long int: %lu byte(s)\n", c);
	printf("Size of a long long int: %lu byte(s)\n", d);
	printf("Size of a float: %lu byte(s)\n", e);
	return (0);
}
