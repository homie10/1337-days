#include <stdio.h>
#include <stdlib.h>

static unsigned int	pgcd(unsigned int a, unsigned int b)
{
	unsigned int	remainder;

	while (b != 0)
	{
		remainder = a % b;
		a = b;
		b = remainder;
	}
	return (a);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%u", pgcd((unsigned int)atoi(argv[1]),
				(unsigned int)atoi(argv[2])));
	printf("\n");
	return (0);
}
