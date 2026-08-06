#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc <= 1)
		write(1, "a\n", 2);
	while (*argv[1])
	{
		if (*argv[1]++ == 'a')
			write(1, "a\n", 2);
	}
	return 0;
}
