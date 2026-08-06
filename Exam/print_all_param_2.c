#include <unistd.h>

void ft_puts(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	(void)argc;

	while (*(++argv))
		ft_puts(*argv);
}
