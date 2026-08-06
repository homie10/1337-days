#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	while (to_find[0] == '\0')
	{
		return (str);
	}
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
int	main()
{
	char	str[] = "hello world";
	char	to_find[] = "w";
	char	*p = ft_strstr(str, to_find);
	printf("%c", *p);
}
