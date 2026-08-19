#include <unistd.h>

unsigned int	putchar(unsigned char c)
{
	write(1, &c, 1);
	return(c);
}