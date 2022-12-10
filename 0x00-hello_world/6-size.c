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

	printf("Size of a char: %lu byte(s)", a);
	printf("Size of a int: %lu byte(s)", b);
	printf("Size of a long int: %lu byte(s)", c);
	printf("Size of a long long int: %lu byte(s)", d);
	printf("Size of a float: %lu byte(s)", e);
	return (0);
}
