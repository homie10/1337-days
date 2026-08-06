#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			argv[1][i] = 'a' + 'z' - argv[1][i];
		}
		ft_putchar(argv[1][i]);
		i++;
	}
}
