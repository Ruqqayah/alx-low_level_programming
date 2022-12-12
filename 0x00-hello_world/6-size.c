#include <stdio.h>
/**
 * main - C program that prints the sizes of data types
 *
 * Return: 0
*/
int main(void)
{
	char sizeof(a);
	int sizeof(b);
	long int sizeof(c);
	long long int sizeof(d);
	float sizeof(e);

	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long int: %d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	printf("Size of a float: %d byte(s)\n", sizeof(e));
	return (0);
}
