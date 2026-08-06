#include <unistd.h>

static void	obiwan(char *str)
{
	int	i;
	int	position;
	int	after_number;

	i = 0;
	position = 0;
	after_number = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			after_number = 1;
		else if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (position == 0 && after_number)
				position = 1;
			if (position % 2 == 0 && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			else if (position % 2 == 1 && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			position++;
			after_number = 0;
		}
		else
			position = 0;
		write(1, &str[i++], 1);
	}
}

int	main(void)
{
	char	text[] = "42 Born To Code\n";

	obiwan(text);
	return (0);
}
