#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] && s2[i] != '\0')
  {
	  if (s1[i] == s2[i])
	  {
		  return (s1[i]);
	  }
	  i++;
  }
}
int	main()
{
	s1 = "hello";
	s2 = "hello";
	ft_strcmp(s1, s2);
	printf("%d\n", )
}
