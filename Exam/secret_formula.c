#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (i == 0
				|| argv[1][i - 1] == ' '
				|| argv[1][i + 1] == ' '
				|| argv[1][i + 1] == '\0')
				write(1, &argv[1][i], 1);
			else
				write(1, "*", 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
