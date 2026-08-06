#include <unistd.h>

int	main()
{
	int	a;
	int	b;
	int	result;

	if (argc == 3)
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(agrv[2]);
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
