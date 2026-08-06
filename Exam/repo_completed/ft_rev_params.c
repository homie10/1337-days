#include <unistd.h>

static void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	while (--argc > 0)
		ft_putstr(argv[argc]);
	return (0);
}
