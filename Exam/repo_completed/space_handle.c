#include <unistd.h>

static int	is_space(char c)
{
	return (c == ' ' || c == '\t');
}

int	main(int argc, char **argv)
{
	int	i;
	int	printed_word;

	if (argc == 2)
	{
		i = 0;
		printed_word = 0;
		while (argv[1][i])
		{
			while (is_space(argv[1][i]))
				i++;
			if (!argv[1][i])
				break ;
			if (printed_word)
				write(1, " ", 1);
			while (argv[1][i] && !is_space(argv[1][i]))
				write(1, &argv[1][i++], 1);
			printed_word = 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}
