#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int	i = 0;

	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
int	main()
{
	char	s1[] = "1337";
	char	s2[5];

	char *p = ft_strcpy(s1, s2);
	printf("%s", p);
}
