#include <unistd.h>

void	ft_obiwan(char *str)
{
	int	i;
	int	pos;
	int	after_number;

	i = 0;
	pos = 0;
	after_number = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			after_number = 1;
		else if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (pos == 0 && after_number == 1)
				pos = 1;
			if (pos % 2 == 0
				&& str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			else if (pos % 2 == 1
				&& str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			pos++;
			after_number = 0;
		}
		else
			pos = 0;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char	str[] = "42 Born To Code\n";

	ft_obiwan(str);
	return (0);
}
