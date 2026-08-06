#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
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

void	ft_putnbr(int nb)
{
  if (nb > 9)
    ft_putnbr(nb / 10);
  ft_putchar(nb % 10 + '0');
}

int	sum_digits(int n)
{
	int	sum;

	while (n > 9)
	{
		sum = 0;
		while (n > 0)
		{
			sum = sum + (n % 10);
			n = n / 10;
		}
		n = sum;
	}
	return (n);
}
int	main(int argc, char *argv[])
{
	int	result;

	if (argc == 2)
	{
		result = sum_digits(ft_atoi(argv[1]));
		ft_putnbr(result);
	}
	ft_putchar('\n');
	return (0);
}
