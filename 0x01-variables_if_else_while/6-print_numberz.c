#include <stdio.h>

/**
   * main - print base ten without chars
   *
   * Return: zero
   */
int main(void)
{
	int i;

	for (i = '0'; 0 <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
