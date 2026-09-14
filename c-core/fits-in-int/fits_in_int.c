#include <limits.h>
// Return 1 when value can be stored in an int without changing,
// 0 when the conversion would lose information.
int	fits_in_int(long value)
{
	if (value == 0)
		return (1);
	if ((value > INT_MAX) || (value < INT_MIN))
		return (0);
	else
		return (1);
}
