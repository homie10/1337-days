#include <unistd.h>

static int	repeat_count(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 1);
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 1);
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	repeat;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			repeat = repeat_count(argv[1][i]);
			while (repeat-- > 0)
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
