#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}

int	main(void)
{
	int	nb;

	nb = 1;
	while (nb <= 100)
	{
		if (nb % 15 == 0)
			ft_putstr("fizzbuzz");
		else if (nb % 3 == 0)
			ft_putstr("fizz");
		else if (nb % 5 == 0)
			ft_putstr("buzz");
		else
			ft_putnbr(nb);
		ft_putchar('\n');
		nb++;
	}
	return (0);
}
