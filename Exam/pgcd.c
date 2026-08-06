#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_atoi(char *str)
{
	int	i = 0;
	int	result = 0;
  while (str[i] >= 48 && str[i] <= 57)
  {
		result *= 10;
		result += str[i] - '0';
		i++;
	}
  return (result);
}

int	ft_putnbr(int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int	main(int argc, char *argv[])
{
	int	a;
	int	b;
	int	remainder;

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
	ft_putchar('\n');
	return (0);
}
