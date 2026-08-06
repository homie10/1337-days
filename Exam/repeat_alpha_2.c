#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int repeat;

	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	i = 0;
	repeat = 0;
	while (argv[1][i])
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			repeat = argv[1][i] - 'a' + 1;
		else if (argv[1][i] >= 'Z' && argv[1][i] <= 'Z')
			repeat = argv[1][i] + 'A' - 1;
		else
			repeat = 1;
		j = 0;
		while (j < repeat)
		{
			ft_putchar(argv[1][i]);
			j++;
		}
		i++;
	}
	ft_putchar('\n');
	return (0);
}
