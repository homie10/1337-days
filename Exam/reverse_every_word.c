#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		if (i == 0 || argv[1][i - 1] == ' ')
		{

		}
    j = 0;
		if (argv[1][i + 1] == ' ' || argv[1][i + 1] == '\0')
		{
			j = i - 1;	
		}
		else if (argv[1][i] == ' ')
		{
			ft_putchar(' ');
		}
    else
      ft_putchar(argv[1][j]);
    j--;
	}
}
