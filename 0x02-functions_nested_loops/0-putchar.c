#include  <stdio.h>
#include <unistd.h>

int main(void)
{
    	putchar('_');
	putchar('p');
	putchar('u');
	putchar('t');
	putchar('c');
	putchar('h');
	putchar('a');
	putchar('r');
	putchar('\n');
	return (o);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
