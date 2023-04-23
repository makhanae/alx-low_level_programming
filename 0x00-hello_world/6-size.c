#include <stdio.h>
/**
 * main - Entry point
 * code by bwave ict
 * Return: always 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(s)", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu bytes(s)", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu bytes(s)", (unsigned long)sizeof(d));
	printf("Size of a float: %lu bytes(s)", (unsigned long)sizeof(f));
	return (0);
}
