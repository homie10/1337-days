#include <stdio.h>

char	*rev_in_place(char *str)
{
	int	l;
	int	r;
	int	size;
	char	temp;

	l = 0;
	size = 0;
	temp = 0;
	while (str[size])
	{
		size++;
	}
	r = size - 1;
	while (l < r)
	{
		temp = str[l];
		str[l] = str[r];
		str[r] = temp;
		l++;
		r--;
	}
	return (str);
}
int	main()
{
	char	str[] = "Hello";
	char	*s;

	s = rev_in_place(str);
	printf("%s", s);
}
