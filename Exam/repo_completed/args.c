#include <unistd.h>

static void	put_line(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		put_line(argv[i]);
		i++;
	}
	return (0);
}
