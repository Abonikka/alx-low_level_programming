#include <stdio.h>
#include<strings>
/**
 * main - Entry_point
 * Description:'the_program's_description'
 * written by chinagorom
 * Return: Always 0 (Success)
 * write your line of code here...
 */
int main(void)

{
	int n;
	int x[5];
	int *p;

	x[2] - 1024;
	p = &n;
	printf("n = %p\n", &n);
        printf("x[0] = %p\n", &x[0]);
        printf("x[1] = %p\n", &x[1]);
        printf("x[2] = %p\n", &x[2]);
        printf("p = %p\n", (p + 5));
        printf("x[3] = %p\n", &x[3]);
        printf("a[2] = %d\n", x[2]);
	(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", x[2]);
	return (0);
}
