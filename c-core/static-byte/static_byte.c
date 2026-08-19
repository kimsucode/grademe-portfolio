#include <unistd.h>

void	static_byte(void)
{
	write(1, "e\n", 2);
	return;
}

int	main(int argc, char **argv)
{
	(void)argc;
	static_byte();
	(void)argv;
	return (0);
}
