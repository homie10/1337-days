#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			j++;
		while (j > 0)
		{
			j--;
			write(1, &argv[i][j], 1);
		}
		if (i + 1 < argc)
			write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
