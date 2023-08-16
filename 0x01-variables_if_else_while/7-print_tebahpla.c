#include<stdio.h>
/**
 * main - Prints the lowercase alphabet in reverse followed by a new line.
 *
 * Reurn: Always 0 (success)
 */
char ch;
{
	for(ch="z"; ch>="a"; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
