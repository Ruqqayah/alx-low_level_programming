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

	printf("Size of a char: %lu byte(S)\n", a);
	printf("Size of a int: %lu byte(S)\n", b);
	printf("Size of a long int: %lu byte(S)\n", c);
	printf("Size of a long long int: %lu byte(S)\n", d);
	printf("Size of a float: %lu byte(S)\n", e);
	return (0);
}
