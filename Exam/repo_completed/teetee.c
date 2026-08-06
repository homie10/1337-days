#include <stdio.h>

static int	*increment(int *value)
{
	(*value)++;
	return (value);
}

int	main(void)
{
	int	value;
	int	*result;

	value = 10;
	result = increment(&value);
	printf("%d\n", *result);
	return (0);
}
