// scale must return the product of its two parameters.
// This file does not build yet: read the compiler message, then use factor.

int	scale(int value, int factor)
{
	if (factor == 1)
		return (value);
	if (factor == 0)
		return (0);
	if (value == 0)
		return (0);
	return (value * factor);
}