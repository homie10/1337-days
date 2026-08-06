#include <unistd.h>

static unsigned int	ft_atoi(char *str)
{
	unsigned int	result;

	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}

static void	ft_putnbr(unsigned int nb)
{
	char	digit;

	if (nb > 9)
		ft_putnbr(nb / 10);
	digit = nb % 10 + '0';
	write(1, &digit, 1);
}

int	main(int argc, char **argv)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	remainder;

	if (argc == 3)
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[2]);
		while (b != 0)
		{
			remainder = a % b;
			a = b;
			b = remainder;
		}
		ft_putnbr(a);
	}
	write(1, "\n", 1);
	return (0);
}
