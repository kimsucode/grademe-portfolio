#include <unistd.h>

void	hello(void)
{
write(1,"Hello World!\n", 13);
return;
}
int	main(int argc, char **argv)
{
	(void)argc;
	hello();
	(void)argv;
	return (0);
}
