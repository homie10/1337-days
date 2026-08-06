#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

int	main(void)
{
	char	s1[] = "mobouzha";
	char	s2[] = "mobouzhaa";

	printf("%d\n", ft_strcmp(s1, s2));
	return (0);
}
