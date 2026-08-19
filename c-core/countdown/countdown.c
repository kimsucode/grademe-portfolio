#include <unistd.h>

void	countdown(void)
{
	write(1, "9876543210\n", 11 );
	return;
}
int	main(int argc, char **argv)
{
	(void)argc;
	countdown();
	(void)argv;
	return (0);
}
