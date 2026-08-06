#include <unistd.h>

static void	reverse_in_place(char *str)
{
	int	left;
	int	right;
	char	temp;

	left = 0;
	right = 0;
	while (str[right])
		right++;
	right--;
	while (left < right)
	{
		temp = str[left];
		str[left] = str[right];
		str[right] = temp;
		left++;
		right--;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		reverse_in_place(argv[1]);
		i = 0;
		while (argv[1][i])
			write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
