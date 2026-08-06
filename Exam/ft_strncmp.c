#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 && n > 0 && *s1 == *s2)
	{
		*s1++;
		*s2++;
    n--;
	}
  if (n == 0)
  {
    return (0);
  }
	return (*s1 - *s2);
}
int	main()
{
	char	s1[] = "mobouzha";
	char	s2[] = "mobouzha";

	int	l = ft_strncmp(s1, s2, 5);

	printf("%d", l);
}
