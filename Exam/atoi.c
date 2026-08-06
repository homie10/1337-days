#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	result;

	i = 0;
	minus = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus = -minus;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (minus == -1)
			result = result * 10 - (str[i] - '0'); // -
		else
			result = result * 10 + (str[i] - '0'); // +
		i++;
	}
	return (result);
}
int	main()
{
	char	str[] = " ---42abc";
	printf("%d", ft_atoi(str));
}
