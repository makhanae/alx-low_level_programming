#include <stdio.h>
#include <unistd.h>

/**
 * main- Entry point
 *
 * description: print a qoute using write function
 *    sszie_t write(int fd, const void *buf, size_t count)
 *
 * Return: l (not Success)
*/
int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}
