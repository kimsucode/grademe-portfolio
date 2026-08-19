#include <unistd.h>

void	bare_char(void)
{
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	(void)argc;
	bare_char();
	(void)argv;
	return (0);
}
