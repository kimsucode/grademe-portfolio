#include <limits.h> 
// Return the absolute value of n as a long.
// Widen to long before negating, never after.
long	abs_safe(int n)
{
	long	nb;

	nb = n;

	if (nb > 0)
		return n;
	if (n == 0)
		return n;
	if (nb < 0)
		nb = -nb;
	return (nb);
}
